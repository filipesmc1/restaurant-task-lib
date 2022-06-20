#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <QString>
#include <QTime>
namespace Entity{

class Restaurant
{

public:

    Restaurant(const QString name, QTime openHour, QTime closeHour);
    const QTime getOpenTime() const;
    const QTime getCloseTime() const;
    const QString& getRestaurantName() const;

private:
    QString restaurantName;
    QTime openTime;
    QTime closeTime;

};
}
#endif
