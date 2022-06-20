#include <QFile>
#include <QTextStream>
#include <QVariantMap>
#include <QTime>
#include <QString>

#include "csv_repository.h"
#include "../restaurant_finder-lib/codebase/entities/restaurant_finder.h"
#include "../restaurant_finder-lib/codebase/entities/restaurant.h"

namespace Repository{

CSVRepository::CSVRepository(QObject *parent) : IRestaurantRepository{parent}{}

void CSVRepository::retrieveRestaurantsOpenByHour(const QString& path, const QString& time)
{

    QFile file{path};

    /* Checagem de path válido e permissões devem ser verificadas
     *  em outro ponto da aplicação.
    */

    if(!file.open(QIODevice::OpenModeFlag::ReadOnly)){ return; }

    QTextStream stream(&file);
    QString times;
    QString res_name;
    QTime open_time;
    QTime close_time;
    QVector<Entity::Restaurant> restaurantsCompareList;

    while(!stream.atEnd()){

        QString lines = stream.readLine().remove('\"');

        times = lines.split(',').takeLast();
        res_name = lines.split(',').takeFirst();
        open_time = QTime::fromString(times.split('-').takeFirst(), "H:m");
        close_time = QTime::fromString(times.split('-').takeLast(), "H:m");

        /* Ignora a primeira linha */

        if(!open_time.isValid()){

            continue;
        }

        /* Classe Restaurante como um repositório temporário.
           Talvez um pimpl com std::move?
        */
        Entity::Restaurant restaurant{res_name, open_time, close_time};

        restaurantsCompareList.push_back(restaurant);

    }

    file.close();



    /* Fazer a comparação do range de horario de cada restaurante */

    for(const Entity::Restaurant& r: qAsConst(restaurantsCompareList)){

        if(QTime::fromString(time, "H:m") >= r.getOpenTime()  && QTime::fromString(time, "H:m") <= r.getCloseTime()){

            restaurants.push_back(QVariantMap{{"restaurant", r.getRestaurantName()}});

        }

     }

     emit allRestaurantsRetrieved(restaurants);

    /* Limpa a lista para não fazer uma "concatenação" na listview */
     restaurants.clear();

}




}

