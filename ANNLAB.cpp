//#include <iterator>
#include "ANNLAB.h"
#include "UserInterface.h"

//using namespace std;

int main()
{
    vector<string> ArchitectureCatalogue;
    ArchitectureCatalogue.push_back("1. Feedforward");
    int NetworkArchitecture = 0;
    cout << "Select neural network architecture by entering corresponding integer:" << endl;
    for(int i = 0; i < ArchitectureCatalogue.size(); i++)
    {
        cout << ArchitectureCatalogue[i] << endl;
    }

    NetworkArchitecture = GetIntegerInput(1, ArchitectureCatalogue.size());

    cout << endl << ArchitectureCatalogue[NetworkArchitecture-1] << " architecture selected." << endl;

    switch (NetworkArchitecture)
    {
        case 1:
            // Create an instance of class FeedforwardNeuralNet
            ActiveNeuralNet.Architecture = "Feedforward";
            InputAndSetFeedforwardNetworkParameters(/*Instance of FFNN*/);
            break;
        default:
            break;
    }

    cin.ignore();
    return 0;
}

void InputAndSetFeedforwardNetworkParameters()
{
    cout << "Enter number of hidden layers." << endl;
}
