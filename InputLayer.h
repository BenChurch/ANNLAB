#ifndef INPUTLAYER_H
#define INPUTLAYER_H

#include "ANNLAB.h"
#include "Node.h"

class InputLayer
{
    public:

        // Basic constructors and destructor
        //--------------------------------------------------------
        // Constructor
        InputLayer();

        // Destructor
        ~InputLayer();

        // Copy constructor
        InputLayer(const InputLayer& OriginalInputLayer);

        // Copy assignment operator
        InputLayer& operator= (const InputLayer&);

        // Move constructor
        InputLayer(InputLayer&& OriginalInputLayer);

        // Move assignment operator
        InputLayer& operator= (InputLayer&);
        //--------------------------------------------------------

        void AddNeuron();
        void RemoveNeuron(int Index);;

        vector<Node> Neurons;               // Layer's actual neurons
};

#endif // INPUTLAYER_H
