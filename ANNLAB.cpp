//#include <iterator>
#include "ANNLAB.h"
#include "UserInterface.h"
#include "NeuralNet.h"
//#include "NetworkArchitecture.h"
#include "FeedforwardArchitecture.h"

//using namespace std;

int main()
{
    //NeuralNet ActiveNeuralNet;                      // Currently selected neural network
   // FeedforwardArchitecture A;
    vector<string> ArchitectureCatalogue;
    ArchitectureCatalogue.push_back("1. Feedforward");
    int Architecture = 0;
    cout << "Select neural network architecture by entering corresponding integer:" << endl;
    for(uint i = 0; i < ArchitectureCatalogue.size(); i++)
    {
        cout << ArchitectureCatalogue[i] << endl;
    }

    Architecture = GetIntegerInput(1, ArchitectureCatalogue.size());

    cout << endl << ArchitectureCatalogue[Architecture-1] << " architecture selected." << endl;

    switch (Architecture)
    {
        case 1:
        {
            // Create an instance of class FeedforwardNeuralNet
            //FeedforwardArchitecture A;
            //NetworkArchitecture<FeedforwardArchitecture> A;
            NeuralNet<FeedforwardArchitecture> ActiveNeuralNet;
            //ActiveNeuralNet.SetArchitecture(A);
            //ActiveNeuralNet.Architecture.InitializeConnections();
            ActiveNeuralNet.Architecture.InitializeLayers();
            ActiveNeuralNet.Architecture.InitializeConnections();
            // Arbitrarily set input
            ActiveNeuralNet.Architecture.InputLayer.Nodes[0].NodeValue = 1;
            ActiveNeuralNet.Architecture.InputLayer.Nodes[1].NodeValue = 1;

            // Instantiate connections
            for(int i = 0; i < ActiveNeuralNet.Architecture.OutputLayer.Nodes.size(); i++)
            {
                for(int j = 0; j < ActiveNeuralNet.Architecture.HiddenLayers[0].Nodes.size(); j++)
                {
                    if(j == 1)
                        ActiveNeuralNet.Architecture.HiddenLayers[0].Nodes[j].Connections.push_back(-2);
                    else
                        ActiveNeuralNet.Architecture.HiddenLayers[0].Nodes[j].Connections.push_back(1);
                }
            }
            for(int i = 0; i < ActiveNeuralNet.Architecture.HiddenLayers[0].Nodes.size(); i++)
            {
                for(int j = 0; j < ActiveNeuralNet.Architecture.InputLayer.Nodes.size(); j++)
                {
                    ActiveNeuralNet.Architecture.InputLayer.Nodes[j].Connections.push_back(1);
                }
            }
            ActiveNeuralNet.PropagateForward();
            break;
        }
        default:
            break;
    }

    cin.ignore();
    return 0;
}
