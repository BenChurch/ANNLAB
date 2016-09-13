#ifndef NEURALNET_H
#define NEURALNET_H

#include "ANNLAB.h"

class NeuralNet
{
public:
    // Constructor
    NeuralNet();

    // Destructor
    ~NeuralNet();

    // Copy constuctor
    NeuralNet(const NeuralNet& OriginalNeuralNet);

    // Copy assignment operation
    NeuralNet& operator= (const NeuralNet&);

    // Move constructor
    NeuralNet (NeuralNet&& OriginalNeuralNet); // Return relevant copies and delete originals

    // Move assignment operation
    NeuralNet& operator= (NeuralNet& );      // Return relevant copies and delete originals


    vector<const char *> SupportedArchitectures = {"Feedforward"};
    const char * Architecture;

    const char * GetArchitecture();
    void SetArchitecture(const char* NewArchitecture);
    void InputAndSetArchitecture();

};

#endif // NEURALNET_H
