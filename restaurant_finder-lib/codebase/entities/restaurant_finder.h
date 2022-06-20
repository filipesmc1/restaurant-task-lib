#ifndef RESTAURANTFINDER_H
#define RESTAURANTFINDER_H

#include <QObject>
#include <QVariantList>
#include "../restaurant_finder-lib_global.h"


namespace Repository{

    class IRestaurantRepository;
}

namespace Entity{

class RESTAURANT_FINDERLIB_EXPORT RestaurantFinder : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QVariantList list READ list NOTIFY listChanged)

public:

    explicit RestaurantFinder(QObject* parent = nullptr);
    ~RestaurantFinder();
    Q_INVOKABLE void availableHours(const QString& path, const QString& time);
    void setRepository(Repository::IRestaurantRepository* repository);
    QVariantList list() const;


private:

    QVariantList restaurantList;
    Repository::IRestaurantRepository* repository;



signals:
    void allRestaurantsRetrieved();
    void notRestaurantsRetrieved();
    void listChanged();

private slots:
    void onAllRestaurantsRetrieved(const QVariantList& registros);
};
}
#endif
