#ifndef NEURONINPUT_H
#define NEURONINPUT_H


class NeuronInput
{
public:

    // Basic constructors and destrcutors
    //------------------------------------------------------
    // Constructor
    NeuronInput();

    // Destructor
    ~NeuronInput();

    // Copy constructor
    NeuronInput(const NeuronInput& OriginalNeuronInput);

    // Copy assignment operation
    NeuronInput& operator= (const NeuronInput&);

    // Move constructor
    NeuronInput (NeuronInput&& OriginalNeuronInput); // Create deep copy of objects therin contained, delete orginals

    // Move assignment operation
    NeuronInput& operator= (NeuronInput&);    // Create deep copy of objects therin contained, delete orginals
    //------------------------------------------------------

    float Magnitude = 0;                            // Magnitude of input to neuron

};

#endif // NEURONINPUT_H
