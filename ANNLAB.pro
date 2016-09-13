TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    UserInterface.cpp \
    NeuralNet.cpp \
    Node.cpp \
    TanHFunction.cpp \
    NeuronInput.cpp \
    NodeActivationState.cpp \
    NodeActivationFunction.cpp \
    Catalogue.cpp \
    ANNLAB.cpp \
    FeedforwardArchitecture.cpp \
    InputLayer.cpp

HEADERS += \
    UserInterface.h \
    ANNLAB.h \
    NeuralNet.h \
    Node.h \
    TanHFunction.h \
    NeuronInput.h \
    NodeActivationState.h \
    NodeActivationFunction.h \
    Catalogue.h \
    FeedforwardArchitecture.h \
    InputLayer.h

