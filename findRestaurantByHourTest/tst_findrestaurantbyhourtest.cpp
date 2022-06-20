#include <QtTest>
#include <QCoreApplication>
#include <../restaurant_finder-lib/codebase/restaurant_finder-lib_global.h>
#include <../restaurant_finder-lib/codebase/entities/restaurant_finder.h>
#include <../restaurant_finder-lib/codebase/repository/csv_repository.h>
#include <find_restaurant_by_hour.h>

class findRestaurantByHourTest : public QObject
{
    Q_OBJECT

public:
    findRestaurantByHourTest();
    ~findRestaurantByHourTest();

private Q_SLOTS:
    void test_case1();

};

findRestaurantByHourTest::findRestaurantByHourTest()
{

}

findRestaurantByHourTest::~findRestaurantByHourTest()
{

}

void findRestaurantByHourTest::test_case1()
{
   auto restaurantFinder = new Entity::RestaurantFinder(this);
   QVERIFY(restaurantFinder);


   auto restaurantRepository = new Repository::CSVRepository(restaurantFinder);
   restaurantFinder->setRepository(restaurantRepository);
   auto findRestaurantsByHour = new Test::FindRestaurant(restaurantFinder, this);
   QSignalSpy checkSucces(findRestaurantsByHour, &Test::FindRestaurant::success);

   findRestaurantsByHour->run("/home/filipe/Downloads/restaurant-hours.csv","14:00");

   //QTRY_COMPARE_WITH_TIMEOUT(checkSucces.count(), 3, 1000);
  // QCOMPARE(restaurantFinder->list().count(), 1);


}

QTEST_MAIN(findRestaurantByHourTest)

#include "tst_findrestaurantbyhourtest.moc"
