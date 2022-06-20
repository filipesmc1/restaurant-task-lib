#ifndef CSVREPOSITORY_H
#define CSVREPOSITORY_H

#include <QObject>
#include <QVariantList>

#include "irestaurant_repository.h"
#include "../entities/restaurant_finder.h"
#include "../entities/restaurant.h"

namespace Repository{

class CSVRepository : public IRestaurantRepository
{
    Q_OBJECT

public:

    explicit CSVRepository(QObject *parent = nullptr);
    void retrieveRestaurantsOpenByHour(const QString& path, const QString& time);

private:
    QVariantList restaurants;
};
}
#endif
