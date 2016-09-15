#include "NodeActivationFunction.h"
#include "ANNLAB.h"

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

NodeActivationFunction& NodeActivationFunction::operator= (const NodeActivationFunction& OriginalActivationFunction)
{
    //this = * OriginalActivationFunction;
}

NodeActivationFunction::NodeActivationFunction(NodeActivationFunction&& OriginalActivationFunction)
{

}

NodeActivationFunction& NodeActivationFunction::operator= (NodeActivationFunction&)
{

}
//----------------------------------------------------------------------------------------

//void NodeActivationFunction::PrintAvailibleFunctions()
//{
//    for(uint it = 0; it++; it != this->FunctionCatalogue.size())
//    {
//        cout << this->FunctionCatalogue[it] << endl;
//    }
//}

//NodeActivationFunction NodeActivationFunction::GetFunctionVariety()
//{
//    return this->FunctionVatiety;
//}

//void NodeActivationFunction::SetFunctionVariety(const char * NewFunctionVariety)
//{
//    this->FunctionVatiety.clear();
//    this->FunctionVatiety = NewFunctionVariety;
//}
