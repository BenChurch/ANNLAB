#ifndef NODEACTIVATIONFUNCTION_H
#define NODEACTIVATIONFUNCTION_H

#include "ANNLAB.h"

class NodeActivationFunction
{
public:

    // Basic class constructors and destructors
    //--------------------------------------------------------------------------
    // Constructor
    NodeActivationFunction();

    // Destructor
    ~NodeActivationFunction();

    // Copy constructor
    NodeActivationFunction(const NodeActivationFunction& OriginalNodeActivationFunction);

    // Copy assignment operator
    NodeActivationFunction& operator= (const NodeActivationFunction&);

    // Move constructor
    NodeActivationFunction (NodeActivationFunction&& OriginalNodeActivationFunction);

    // Move assignment operator
    NodeActivationFunction& operator= (NodeActivationFunction&);
    //--------------------------------------------------------------------------

    void PrintAvailibleFunctions();
    const char * GetFunctionVariety();
    void SetFunctionVariety(const char * NewFunctionVariety);

protected:
    vector<string> FunctionCatalogue = {"TanH"};
    const char * FunctionVatiety;                   // Whether the function be tanh, radial basis, identity, etc...

};

#endif // ACTIVATIONFUNCTION_H
