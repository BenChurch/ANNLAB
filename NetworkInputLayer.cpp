#include "NetworkInputLayer.h"

NetworkInputLayer::NetworkInputLayer()
{

}

NetworkInputLayer::~NetworkInputLayer()
{

}

NetworkInputLayer::NetworkInputLayer(const NetworkInputLayer& OriginalNetworkInputLayer)
{

}

NetworkInputLayer& NetworkInputLayer::operator= (const NetworkInputLayer&)
{

}

NetworkInputLayer::NetworkInputLayer(NetworkInputLayer&& OriginalNetworkInputLayer)
{

}

NetworkInputLayer& NetworkInputLayer::operator= (NetworkInputLayer&)
{

}

void NetworkInputLayer::AddNode()
{
    this->Nodes.push_back(Node());
    //this->Connections.push_back(0);
}

void NetworkInputLayer::RemoveNode(int Index)
{
    //this->Neurons.erase(Index);     // Not sure about Index - int vs iterator type
}
