#ifndef NEURALNET_H
#define NEURALNET_H

#include "ANNLAB.h"
#include "NetworkArchitecture.h"

template <class T>
class NeuralNet
{
public:
    // Constructor
    NeuralNet()
    {

    }

    // Destructor
    ~NeuralNet()
    {

    }

    // Copy constuctor
    NeuralNet(const NeuralNet& OriginalNeuralNet) {}

    // Copy assignment operation
    NeuralNet& operator= (const NeuralNet&) {}

    // Move constructor
    NeuralNet (NeuralNet&& OriginalNeuralNet) {} // Return relevant copies and delete originals

    // Move assignment operation
    NeuralNet& operator= (NeuralNet& ){}      // Return relevant copies and delete originals

    T Architecture;

    T GetArchitecture()
    {
        return this->Architecture;
    }

    void PropagateForward()                // With InputNodes' current values, propagate them through to the outputs
    {
        for(int i = 0; i < this->Architecture.InputLayer.Nodes.size(); i++)
        {
            for(int j = 0; j < this->Architecture.InputLayer.Nodes[i].Connections.size(); j++)
            {
                this->Architecture.HiddenLayers[0].Nodes[j].NodeValue += (this->Architecture.InputLayer.Nodes[i].NodeValue) * (this->Architecture.InputLayer.Nodes[i].Connections[j]);
            }
        }
        for(int i = 0; i < this->Architecture.HiddenLayers[0].Nodes.size(); i++)
        {
            for(int j = 0; j < this->Architecture.HiddenLayers[0].Nodes[i].Connections.size(); j++)
            {
                this->Architecture.OutputLayer.Nodes[j].NodeValue += (this->Architecture.HiddenLayers[0].Nodes[i].NodeValue) * (this->Architecture.HiddenLayers[0].Nodes[i].Connections[j]);
            }
        }
        cout << endl << "And the output is...." << endl;
        cout << this->Architecture.OutputLayer.Nodes[0].NodeValue << "!!!" << endl;
    }

    //void SetArchitecture(T NewArchitecture);

};

#endif // NEURALNET_H
