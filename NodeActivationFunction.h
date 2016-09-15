#ifndef NODEACTIVATIONFUNCTION_H
#define NODEACTIVATIONFUNCTION_H

#include "ANNLAB.h"
#include "Catalogue.h"
//#include "TanHFunction.h"
//#include "IdentityFunction.h"

using namespace std;

//namespace NodeActivationFunctions{

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

    //void PrintAvailibleFunctions();
    //const char * GetFunctionVariety();
    //void SetFunctionVariety(const char * NewFunctionVariety);

protected:
    Catalogue SupportedActivationFunctions(vector<const char *> = {"TanH"});
    //NodeActivationFunction FunctionVatiety;                   // Whether the function be tanh, radial basis, identity, etc...

};

//}
#endif // ACTIVATIONFUNCTION_H
