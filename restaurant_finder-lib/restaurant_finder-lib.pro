include(../qmake-target-platform.pri)
include(../qmake-destination-path.pri)
include(restaurant_finder.pri)


QT -= gui
TEMPLATE = lib
DEFINES += RESTAURANT_FINDERLIB_LIBRARY
TARGET += restaurant_finder-lib
CONFIG += c++17

INCLUDEPATH += codebase \
               codebase/entities
               codebase/repository

DESTDIR = $$PWD/../binaries/$$DESTINATION_PATH
OBJECTS_DIR = $$PWD/build/$$DESTINATION_PATH/.obj
MOC_DIR = $$PWD/build/$$DESTINATION_PATH/.moc
RCC_DIR = $$PWD/build/$$DESTINATION_PATH/.qrc
UI_DIR = $$PWD/build/$$DESTINATION_PATH/.ui

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target


SOURCES +=


