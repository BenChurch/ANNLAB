#include "InputLayer.h"

InputLayer::InputLayer()
{

}

InputLayer::~InputLayer()
{

}

InputLayer::InputLayer(const InputLayer& OriginalInputLayer)
{

}

InputLayer& InputLayer::operator= (const InputLayer&)
{

}

InputLayer::InputLayer(InputLayer&& OriginalInputLayer)
{

}

InputLayer& InputLayer::operator= (InputLayer&)
{

}

void InputLayer::AddNeuron()
{
    this->Neurons.push_back(Node());
}

void InputLayer::RemoveNeuron(int Index)
{
    this->Neurons.erase(Index);     // Not sure about Index - int vs iterator type
}
