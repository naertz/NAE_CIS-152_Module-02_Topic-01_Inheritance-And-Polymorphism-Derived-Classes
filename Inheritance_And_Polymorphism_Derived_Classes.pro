QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    clothing.cpp \
    clothing_driver_ertz.cpp \
    main_driver_ertz.cpp \
    pants.cpp \
    pants_driver_ertz.cpp \
    shirt.cpp \
    shirt_driver_ertz.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    clothing.h \
    clothing_driver_ertz.h \
    pants.h \
    pants_driver_ertz.h \
    shirt.h \
    shirt_driver_ertz.h

DISTFILES += \
    LICENSE \
    README.md
