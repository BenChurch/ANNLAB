#ifndef NETWORKHIDDENLAYER_H
#define NETWORKHIDDENLAYER_H

#include "ANNLAB.h"
#include "Node.h"
//#include "NetworkArchitecture.h"
//#include "NetworkInputLayer.h"
//#include "NetworkHiddenLayer.h"
//#include "NetworkOutputLayer.h"

class NetworkHiddenLayer
{
    public:

        // Basic constructors and destructors
        //-------------------------------------------------
        // Constructor
        NetworkHiddenLayer();

        // Destructor
        ~NetworkHiddenLayer();

        // Copy constructor
        NetworkHiddenLayer(const NetworkHiddenLayer& OriginalNetworkHiddenLayer);

        // Copy assignment operator
        NetworkHiddenLayer& operator = (const NetworkHiddenLayer&);

        // Move constructor
        NetworkHiddenLayer(NetworkHiddenLayer&& OriginalNetworkHiddenLayer);

        // Move assignment operator
        NetworkHiddenLayer& operator = (NetworkHiddenLayer&);
        //-------------------------------------------------

        vector<Node> Nodes;
        //vector<double> Connections;                     // Contains values to be propagated to next layer
        //NetworkInputLayer * InputLayer;                 // Use pointer to actual input layer, rather than create an independent copy of it
        NetworkHiddenLayer * PreviousHiddenLayer;       // Could be null_ptr
        NetworkHiddenLayer * NextHiddenLayer;           // Could be null_ptr
        //NetworkOutputLayer * OutputLayer;

        void AddNode();
};

#endif // NETWORKHIDDENLAYER_H
