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
    qmarkdown/mainwindow.cpp \
    qmarkdown/markdownhighlighter.cpp \
    qmarkdown/qmarkdowntextedit.cpp \
    qmarkdown/qownlanguagedata.cpp \
    qmarkdown/qplaintexteditsearchwidget.cpp \
    statusmanager.cpp \
    yedit.cpp

HEADERS += \
    centralwidget.h \
    document.h \
    filedock.h \
    mainwindow.h \
    menumanager.h \
    previewpage.h \
    qmarkdown/linenumberarea.h \
    qmarkdown/mainwindow.h \
    qmarkdown/markdownhighlighter.h \
    qmarkdown/qmarkdowntextedit.h \
    qmarkdown/qownlanguagedata.h \
    qmarkdown/qplaintexteditsearchwidget.h \
    statusmanager.h \
    yedit.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    media/edit-find-replace.svg \
    media/format-text-superscript.svg \
    media/go-bottom.svg \
    media/go-top.svg \
    media/window-close.svg \
    resources/3rdparty/MARKDOWN-LICENSE.txt \
    resources/3rdparty/MARKED-LICENSE.txt \
    resources/3rdparty/markdown.css \
    resources/3rdparty/marked.js \
    resources/3rdparty/qt_attribution.json \
    resources/default.md \
    resources/index.html \
    resources/media/edit-find-replace.svg \
    resources/media/format-text-superscript.svg \
    resources/media/go-bottom.svg \
    resources/media/go-top.svg \
    resources/media/window-close.svg

RESOURCES += \
    resources/markdowneditor.qrc

FORMS += \
    qplaintexteditsearchwidget.ui
