#include "restaurant_finder.h"
#include "../repository/irestaurant_repository.h"

namespace Entity{

RestaurantFinder::RestaurantFinder(QObject *parent)
    : QObject{parent}, restaurantList{QVariantList()}, repository{nullptr} {
}

RestaurantFinder::~RestaurantFinder(){}


void RestaurantFinder::availableHours(const QString& path, const QString& time)
{
    if(repository){
         repository->retrieveRestaurantsOpenByHour(path, time);
    }
}

void RestaurantFinder::setRepository(Repository::IRestaurantRepository *repo)
{
    repository = repo;

    /* O sinal allRestaurantsRetrieved sera enviado com uma QVariantList contendo os restaurantes abertos.
        Essa lista será consumida pelo slot onAllRestaurantsRetrieved. */

    connect(repository, &Repository::IRestaurantRepository::allRestaurantsRetrieved,
            this, &Entity::RestaurantFinder::onAllRestaurantsRetrieved, Qt::UniqueConnection);


}

QVariantList RestaurantFinder::list() const{

    return restaurantList;
}

void RestaurantFinder::onAllRestaurantsRetrieved(const QVariantList &records)
{
    restaurantList = records;
    emit listChanged();
    emit allRestaurantsRetrieved();
}




}
