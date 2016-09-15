#ifndef NETWORKINPUTLAYER_H
#define NETWORKINPUTLAYER_H

#include "ANNLAB.h"
#include "Node.h"
#include "NetworkArchitecture.h"
#include "NetworkHiddenLayer.h"

class NetworkInputLayer
{
    public:

        // Basic constructors and destructor
        //--------------------------------------------------------
        // Constructor
        NetworkInputLayer();

        // Destructor
        ~NetworkInputLayer();

        // Copy constructor
        NetworkInputLayer(const NetworkInputLayer& OriginalNetworkInputLayer);

        // Copy assignment operator
        NetworkInputLayer& operator= (const NetworkInputLayer&);

        // Move constructor
        NetworkInputLayer(NetworkInputLayer&& OriginalNetworkInputLayer);

        // Move assignment operator
        NetworkInputLayer& operator= (NetworkInputLayer&);
        //--------------------------------------------------------

        void AddNode();
        void RemoveNode(int Index);

        vector<Node> Nodes;               // Layer's actual neurons

        //vector<double> Connections;         // Contains values to be propaged to next layer
};

#endif // INPUTLAYER_H
