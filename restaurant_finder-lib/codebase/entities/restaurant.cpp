#include "restaurant.h"

namespace Entity{

Restaurant::Restaurant(const QString name, QTime openHour, QTime closeHour)
    : restaurantName{name}, openTime{openHour}, closeTime{closeHour}
{

}

const QTime Restaurant::getOpenTime() const
{
    return openTime;
}

const QTime Restaurant::getCloseTime() const
{

    return closeTime;
}

const QString& Restaurant::getRestaurantName() const
{
    return restaurantName;
}

}
