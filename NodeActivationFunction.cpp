#include "NodeActivationFunction.h"

// Basic constructors and destructors
//----------------------------------------------------------------------------------------
NodeActivationFunction::NodeActivationFunction()
{

}

NodeActivationFunction::~NodeActivationFunction()
{

}

NodeActivationFunction::NodeActivationFunction(const NodeActivationFunction& OriginalNodeActivationFunction)
{

}

NodeActivationFunction& NodeActivationFunction::operator= (const NodeActivationFunction&)
{

}

NodeActivationFunction::NodeActivationFunction(NodeActivationFunction&& OriginalActivationFunction)
{

}

NodeActivationFunction& NodeActivationFunction::operator= (NodeActivationFunction&)
{

}
//----------------------------------------------------------------------------------------

void NodeActivationFunction::PrintAvailibleFunctions()
{
    for(uint it = 0; it++; it != this->FunctionCatalogue.size())
    {
        cout << this->FunctionCatalogue[it] << endl;
    }
}

const char * NodeActivationFunction::GetFunctionVariety()
{
    return this->FunctionVatiety;
}

void NodeActivationFunction::SetFunctionVariety(const char * NewFunctionVariety)
{
    this->FunctionVatiety.clear();
    this->FunctionVatiety = NewFunctionVariety;
}
