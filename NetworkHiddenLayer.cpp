#include "NetworkHiddenLayer.h"

NetworkHiddenLayer::NetworkHiddenLayer()
{

}

NetworkHiddenLayer::~NetworkHiddenLayer()
{

}

NetworkHiddenLayer::NetworkHiddenLayer(const NetworkHiddenLayer& OriginalNetworkHiddenLayer)
{

}

NetworkHiddenLayer& NetworkHiddenLayer::operator= (const NetworkHiddenLayer&)
{

}

NetworkHiddenLayer::NetworkHiddenLayer(NetworkHiddenLayer&& OriginalNetworkHiddenLayer)
{

}

NetworkHiddenLayer& NetworkHiddenLayer::operator= (NetworkHiddenLayer&)
{

}

void NetworkHiddenLayer::AddNode()
{
    this->Nodes.push_back(Node());
    //this->Connections.push_back(0);
}
