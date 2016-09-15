#include "FeedforwardArchitecture.h"
#include "IdentityFunction.h"

FeedforwardArchitecture::FeedforwardArchitecture()// : NetworkArchitecture()
{

}

FeedforwardArchitecture::~FeedforwardArchitecture()
{

}

FeedforwardArchitecture::FeedforwardArchitecture(const FeedforwardArchitecture& OriginalFeedforwardArchitecture)
{

}

FeedforwardArchitecture& FeedforwardArchitecture::operator= (const FeedforwardArchitecture&)
{

}

FeedforwardArchitecture::FeedforwardArchitecture(FeedforwardArchitecture&& OriginalFeedforwardArchitecture)
{

}

FeedforwardArchitecture& FeedforwardArchitecture::operator= (FeedforwardArchitecture&)
{

}

void FeedforwardArchitecture::InitializeLayers()
{
    cout << "Enter integer in range 1-10 for number of input neurons." << endl;
    this->NumberOfInputNeurons = GetIntegerInput(1,10);
    Node * LastNode = this->InputLayer.Nodes.data();
    IdentityFunction Identity;
    for(int i = 0; i < this->NumberOfInputNeurons; i++)
    {
        this->InputLayer.AddNode();
        LastNode->ActivationFunction = Identity;

    }

    cout << "Enter integer in range 1-10 for number of hidden layers." << endl;
    this->NumberOfHiddenLayers = GetIntegerInput(1,10);
    cout << "Enter integer in range 1-10 for number of neurons in each hidden layer." << endl;
    this->NumberOfNeuronsPerHiddenLayer = this->NumberOfHiddenLayers * GetIntegerInput(1,10);
    for(int i = 0; i < this->NumberOfHiddenLayers; i++)
    {
        NetworkHiddenLayer NewHiddenLayer;
        for(int j = 0; j < this->NumberOfNeuronsPerHiddenLayer; j++)
        {
            NewHiddenLayer.AddNode();
        }
        this->HiddenLayers.push_back(NewHiddenLayer);
        //delete NewHiddenLayer;                              // Not sure about memory management
    }

    cout << "Enter integer in range 1-10 for number of output neurons." << endl;
    this->NumberOfOutputNeurons = GetIntegerInput(1,10);
    for(int i = 0; i < this->NumberOfOutputNeurons; i++)
    {
        this->OutputLayer.AddNode();
    }
}

//void FeedforwardArchitecture::InitializeConnections()
//{
//    // For development purposes, use complete connectivity, all TanH functions
//    for(int i = 0; i < this->InputLayer.Nodes.size(); i++)
//    {
//        this->InputLayer.Connections.push_back(1);          // 1 for now to represent XOR
//    }

//    for(int i = 0; i < this->NumberOfHiddenLayers; i++)
//    {
//        for(int j = 0; j < this->NumberOfNeuronsPerHiddenLayer; j++)
//        {
//            this->HiddenLayers[i].Connections.push_back(1);
//        }
//    }

//    this->HiddenLayers[0].Connections[1] = -2;
//}
