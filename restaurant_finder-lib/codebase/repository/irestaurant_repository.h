#ifndef IRESTAURANTREPOSITORY_H
#define IRESTAURANTREPOSITORY_H

#include <QObject>
#include <QVariantList>

namespace Repository{

class IRestaurantRepository : public QObject
{
    Q_OBJECT

protected:
    explicit IRestaurantRepository(QObject *parent = nullptr) : QObject{parent} {}

public:
    virtual void retrieveRestaurantsOpenByHour(const QString& path, const QString& time) = 0;


signals:
    void allRestaurantsRetrieved(QVariantList restaurants);

};
}
#endif
