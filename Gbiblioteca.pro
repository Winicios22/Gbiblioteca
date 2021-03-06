QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admopcoes.cpp \
    cadlivro.cpp \
    cadusuario.cpp \
    main.cpp \
    mainwindow.cpp \
    opcoes.cpp \
    relatoriolivros.cpp \
    selecaodelivros2.cpp \
    telaadm2.cpp \
    teladepedidos.cpp \
    telausuario.cpp

HEADERS += \
    admopcoes.h \
    cadlivro.h \
    cadusuario.h \
    mainwindow.h \
    opcoes.h \
    relatoriolivros.h \
    selecaodelivros2.h \
    telaadm2.h \
    teladepedidos.h \
    telausuario.h

FORMS += \
    admopcoes.ui \
    cadlivro.ui \
    cadusuario.ui \
    mainwindow.ui \
    opcoes.ui \
    relatoriolivros.ui \
    selecaodelivros2.ui \
    telaadm2.ui \
    teladepedidos.ui \
    telausuario.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    arquivos.qrc
