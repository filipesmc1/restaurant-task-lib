#include "find_restaurant_by_hour.h"
#include "../restaurant_finder-lib/codebase/entities/restaurant_finder.h"

namespace Test{

FindRestaurant::FindRestaurant(Entity::RestaurantFinder* resFinder, QObject* parent) : QObject{parent}, openRestaurants{resFinder} {

    connect(resFinder, &Entity::RestaurantFinder::allRestaurantsRetrieved, this, &FindRestaurant::onRetrievedAllRestaurantsOpenByHour);
    connect(resFinder, &Entity::RestaurantFinder::notRestaurantsRetrieved, this, &FindRestaurant::onNotRetrievedAllRestaurantsOpenByHour);
}

void FindRestaurant::run(const QString& path, const QString& time){
    openRestaurants->availableHours(path, time);
}

void FindRestaurant::onRetrievedAllRestaurantsOpenByHour(){
    emit success("OK - SUCCESS");
}

void FindRestaurant::onNotRetrievedAllRestaurantsOpenByHour(){
    emit failure("ERROR - FAILURE");
}

}
