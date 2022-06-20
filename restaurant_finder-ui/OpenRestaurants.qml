import QtQuick 2.15

SearchRestaurantsView{

    searchRestaurantsButton.onClicked: restaurantsEntity.availableHours("/home/filipe/Downloads/restaurant-hours.csv", time)
    restaurantListView.model: restaurantsEntity.list

    //Component.onCompleted: restaurantsEntity.run("/home/filipe/Downloads/restaurant-hours.csv", "14:00")
}
