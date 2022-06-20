include(../qmake-target-platform.pri)
include(../qmake-destination-path.pri)
include(../restaurant_finder-lib/restaurant_finder.pri)
include(../findRestaurantByHourTest/findrestaurantbyhourtest.pri)
QT += quick qml

SOURCES += \
        $$PWD/main.cpp

LIBS += -L$$PWD/../binaries/$$DESTINATION_PATH

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
