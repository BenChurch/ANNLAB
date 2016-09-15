#ifndef NETWORKARCHITECTURE_H
#define NETWORKARCHITECTURE_H

#include "ANNLAB.h"
#include "Catalogue.h"
#include "Node.h"
#include "NetworkInputLayer.h"
#include "NetworkHiddenLayer.h"
#include "NetworkOutputLayer.h"

using namespace std;

template <class T>                          // Specifies the exact variety of network architecture
class NetworkArchitecture
{
    public:

        // Basic constructors and destructor
        //------------------------------------------------
        // Constructor
        NetworkArchitecture() {}

        // Destructor
        ~NetworkArchitecture() {}

        // Copy constructor
        NetworkArchitecture(const NetworkArchitecture& OriginalNetworkArchitecture) {}

        // Copy assignment operator
        NetworkArchitecture& operator = (const NetworkArchitecture&) {}

        // Move constructor
        NetworkArchitecture(NetworkArchitecture&& OriginalNetworkArchitecture) {}

        // Move assignment operator
        NetworkArchitecture& operator = (NetworkArchitecture&) {}
        //------------------------------------------------

        Catalogue SupportedArchitectures(vector<const char *> OriginallySupportedArchitectures = {"Feedforward"});

        //T ArchitectureInstance;

        //virtual NetworkInputLayer InputLayer;
        //virtual vector<NetworkHiddenLayer> HiddenLayers;
        //virtual NetworkOutputLayer OutputLayer;

        virtual void InitializeLayers() {}
        virtual void InitializeConnections() {}


};

#endif // NETWORKARCHITECTURE_H
