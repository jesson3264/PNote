QT       += core gui
QT       += webenginewidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    centralwidget.cpp \
    document.cpp \
    filedock.cpp \
    main.cpp \
    mainwindow.cpp \
    menumanager.cpp \
    previewpage.cpp \
    statusmanager.cpp

HEADERS += \
    centralwidget.h \
    document.h \
    filedock.h \
    mainwindow.h \
    menumanager.h \
    previewpage.h \
    statusmanager.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    resources/3rdparty/MARKDOWN-LICENSE.txt \
    resources/3rdparty/MARKED-LICENSE.txt \
    resources/3rdparty/markdown.css \
    resources/3rdparty/marked.js \
    resources/3rdparty/qt_attribution.json \
    resources/default.md \
    resources/index.html

RESOURCES += \
    resources/markdowneditor.qrc
