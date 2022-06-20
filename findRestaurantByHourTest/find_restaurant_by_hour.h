#ifndef FINDRESTAURANT_H
#define FINDRESTAURANT_H

#include <QObject>
#include <QString>
#include "../restaurant_finder-lib/codebase/restaurant_finder-lib_global.h"

namespace Entity{
    class RestaurantFinder;
}

namespace Test{

class FindRestaurant : public QObject
{

    Q_OBJECT

public:

    explicit FindRestaurant(Entity::RestaurantFinder* restaurantFinder, QObject *parent = nullptr);
    Q_INVOKABLE void run(const QString& path, const QString& time);
private:

    QString time;
    Entity::RestaurantFinder* openRestaurants;

signals:
    void success(QString value);
    void failure(QString value);

private slots:
    void onRetrievedAllRestaurantsOpenByHour();
    void onNotRetrievedAllRestaurantsOpenByHour();

};
}
#endif
