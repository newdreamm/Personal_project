
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
THIRD_DIR = $$PWD/../

include(qosbrowser.pri)

RC_ICO = $$PWD/static/img/icontt.ico

SOURCES += \
    main.cpp

RESOURCES += \
    Resource.qrc

FORMS +=

HEADERS +=







