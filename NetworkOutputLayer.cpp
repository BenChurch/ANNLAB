#include "NetworkOutputLayer.h"

NetworkOutputLayer::NetworkOutputLayer()
{

}

NetworkOutputLayer::~NetworkOutputLayer()
{

}

NetworkOutputLayer::NetworkOutputLayer(const NetworkOutputLayer& OriginalNetworkOutputLayer)
{

}

NetworkOutputLayer& NetworkOutputLayer::operator= (const NetworkOutputLayer&)
{

}

NetworkOutputLayer::NetworkOutputLayer(NetworkOutputLayer&& OriginalNetworkOutputLayer)
{

}

NetworkOutputLayer& NetworkOutputLayer::operator= (NetworkOutputLayer&)
{

}

void NetworkOutputLayer::AddNode()
{
    this->Nodes.push_back(Node());
}

void NetworkOutputLayer::PrintOutput()
{
    for(int i = 0; i < this->Nodes.size(); i++)
    {
        cout << this->Nodes[i].NodeValue << endl;
    }
}
