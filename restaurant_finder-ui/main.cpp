#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "../restaurant_finder-lib/codebase/entities/restaurant_finder.h"
#include "../restaurant_finder-lib/codebase/repository/csv_repository.h"
#include "../findRestaurantByHourTest/find_restaurant_by_hour.h"

int main(int argc, char *argv[])
{

    QGuiApplication app(argc, argv);

    auto restaurantsEntity = new Entity::RestaurantFinder(&app);
    auto restaurantRepository = new Repository::CSVRepository(&app);
    restaurantsEntity->setRepository(restaurantRepository);

    /* teste */
    auto findRestaurantByHour = new Test::FindRestaurant(restaurantsEntity, &app);


    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("restaurantsEntity", restaurantsEntity);
    engine.rootContext()->setContextProperty("findRestaurantByHour", findRestaurantByHour);
    const QUrl url(QStringLiteral("qrc:/main.qml"));

    engine.load(url);

    return app.exec();
}
