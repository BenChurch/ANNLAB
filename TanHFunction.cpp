#include "NodeActivationFunction.h"
#include "TanHFunction.h"

// Basic constructors and destructors
//------------------------------------------------------------------
TanHFunction::TanHFunction()
{
    // Consider including parameters to modify the function like multiplicitive coefficients
}

TanHFunction::~TanHFunction()
{

}

TanHFunction::TanHFunction(const TanHFunction& OriginalTanH)
{

}

TanHFunction& TanHFunction::operator= (const TanHFunction&)
{

}

TanHFunction::TanHFunction(TanHFunction&& OriginalTanH)
{

}

TanHFunction& TanHFunction::operator= (TanHFunction&)
{

}
//------------------------------------------------------------------

double TanHFunction::GetFunctionOutput(double Input)
{
    double Output = tanh(Input);
    return Output;
}
