#ifndef IDENTITYFUNCTION_H
#define IDENTITYFUNCTION_H

#include "NodeActivationFunction.h"

class IdentityFunction : public NodeActivationFunction
{
    public:
        IdentityFunction();


        double ComputeOutput(double Input);
};

#endif // IDENTITYFUNCTION_H
