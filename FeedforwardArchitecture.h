#ifndef FEEDFORWARDARCHITECTURE_H
#define FEEDFORWARDARCHITECTURE_H

#include "ANNLAB.h"
#include "NeuralNet.h"
#include "Node.h"
#include "NetworkArchitecture.h"
#include "UserInterface.h"

class FeedforwardArchitecture : public NetworkArchitecture<FeedforwardArchitecture>
{
    public:

        // Basic constructors and destructors
        //-------------------------------------------------
        // Constructor
        FeedforwardArchitecture();

        // Destructor
        ~FeedforwardArchitecture();

        // Copy constructor
        FeedforwardArchitecture(const FeedforwardArchitecture& OriginalFeedforwardAtchitecture);

        // Copy assignment operator
        FeedforwardArchitecture& operator = (const FeedforwardArchitecture&);

        // Move constructor
        FeedforwardArchitecture(FeedforwardArchitecture&& OriginalFeedforwardArchitecture);

        // Move assignment operator
        FeedforwardArchitecture& operator = (FeedforwardArchitecture&);
        //-------------------------------------------------

        int NumberOfInputNeurons = 0;
        NetworkInputLayer InputLayer;

        int NumberOfHiddenLayers = 0;
        int NumberOfNeuronsPerHiddenLayer = 0;
        //vector<int> NumbersOfHiddenNeurons;                   // Will allow for hidden layers with varying numbers of neurons
        vector<NetworkHiddenLayer> HiddenLayers;

        int NumberOfOutputNeurons = 0;
        NetworkOutputLayer OutputLayer;

        void InitializeLayers();
        //void InitializeConnections();
};

#endif // FEEDFORWARDARCHITECTURE_H
