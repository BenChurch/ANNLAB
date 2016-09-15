#ifndef NETWORKOUTPUTLAYER_H
#define NETWORKOUTPUTLAYER_H

#include "ANNLAB.h"
#include "Node.h"
//#include "NetworkArchitecture.h"
#include "NetworkHiddenLayer.h"

class NetworkOutputLayer
{
    public:

        // Basic constructors and destructors
        //-------------------------------------------------
        // Constructor
        NetworkOutputLayer();

        // Destructor
        ~NetworkOutputLayer();

        // Copy constructor
        NetworkOutputLayer(const NetworkOutputLayer& OriginalNetworkOutputLayer);

        // Copy assignment operator
        NetworkOutputLayer& operator = (const NetworkOutputLayer&);

        // Move constructor
        NetworkOutputLayer(NetworkOutputLayer&& OriginalNetworkOutputLayer);

        // Move assignment operator
        NetworkOutputLayer& operator = (NetworkOutputLayer&);
        //-------------------------------------------------

        vector<Node> Nodes;

        NetworkHiddenLayer * HiddenLayer;

        void AddNode();
        void PrintOutput();

};

#endif // NETWORKOUTPUTLAYER_H
