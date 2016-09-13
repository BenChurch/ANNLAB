#include "NeuralNet.h"
#include "ANNLAB.h"
#include "UserInterface.h"

NeuralNet::NeuralNet()
{
    // Consider including parameters to modify the function like multiplicitive coefficients
}

NeuralNet::~NeuralNet()
{

}

NeuralNet::NeuralNet(const NeuralNet& OriginalNeuralNet)
{

}

NeuralNet& NeuralNet::operator= (const NeuralNet&)
{
    return * this;
}

NeuralNet::NeuralNet(NeuralNet&& OriginalNeuralNet)
{

}

NeuralNet& NeuralNet::operator= (NeuralNet&)
{
    return * this;
}

const char * NeuralNet::GetArchitecture()
{
    return this->Architecture;
}

void NeuralNet::SetArchitecture(const char * NewArchitecture)
{
    this->Architecture = NewArchitecture;
}

void NeuralNet::InputAndSetArchitecture()
{
    // Iterate through SupportedArchitectures, printing them out, get user to input corresponding integer
    cout << "Enter integer corresponding to desired network architecture." << endl;
    for(uint i = 0; i < this->SupportedArchitectures.size(); i++)
    {
        cout << i + 1 << ". " << this->SupportedArchitectures[i] << endl;
    }
    this->Architecture = this->SupportedArchitectures[GetIntegerInput(1, this->SupportedArchitectures.size()) - 1];

}


