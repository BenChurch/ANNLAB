#ifndef NODEACTIVATIONSTATE_H
#define NODEACTIVATIONSTATE_H

#include "ANNLAB.h"

class NodeActivationState
{
public:

    // Basic class constructors and destructors
    //--------------------------------------------------------------------------
    // Constructor
    NodeActivationState();

    // Destructor
    ~NodeActivationState();

    // Copy constructor
    NodeActivationState(const NodeActivationState& OriginalNodeActivationState);

    // Copy assignment operator
    NodeActivationState& operator= (const NodeActivationState&);

    // Move constructor
    NodeActivationState (NodeActivationState&& OriginalNodeActivationState);

    // Move assignment operator
    NodeActivationState& operator= (NodeActivationState&);
    //--------------------------------------------------------------------------

    string ResponseType;
    int BinaryResponse = 0;
    double ContinuousResponse = 0.0;

};

#endif // NODEACTIVATIONSTATE_H
