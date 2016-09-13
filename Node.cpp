#include "Node.h"
#include "ANNLAB.h"

// Basic constructors and destructors
//----------------------------------------------------------------------------------
Node::Node()
{
    // Consider including parameters to modify the function like multiplicitive coefficients
}

Node::Node(string NodeType, NodeActivationFunction ActivationFunction, int NumberOfInputs, int NumberOfOutputs)
{
    this->NodeType = NodeType;
    this->ActivationFunction = ActivationFunction;
    this->NumberOfInputs = NumberOfInputs;
    this->NumberOfOutputs = NumberOfOutputs;
}

Node::~Node()
{

}

Node::Node(const Node& OriginalNode)
{

}

Node& Node::operator= (const Node& OriginalNode)
{
    this->NodeTypeCatalogue = OriginalNode.NodeTypeCatalogue;
    this->NodeType = OriginalNode.NodeType;
    this->NumberOfInputs = OriginalNode.NumberOfInputs;
    this->NumberOfOutputs = OriginalNode.NumberOfOutputs;
    this->ActivationFunction = OriginalNode.ActivationFunction;
    this->NodeResponse = OriginalNode.NodeResponse;
    return * this;
}

Node::Node(Node&& OriginalNode)
{
    //return OriginalNode;
}

Node& Node::operator= (Node& OriginalNode)
{
    this->NodeTypeCatalogue = OriginalNode.NodeTypeCatalogue;
    this->NodeType = OriginalNode.NodeType;
    this->NumberOfInputs = OriginalNode.NumberOfInputs;
    this->NumberOfOutputs = OriginalNode.NumberOfOutputs;
    this->ActivationFunction = OriginalNode.ActivationFunction;
    this->NodeResponse = OriginalNode.NodeResponse;
    return * this;
}
//----------------------------------------------------------------------------------

void Node::PrintAvailibleNodeTypes()
{

    for(uint it = 0; it++; it != this->NodeTypeCatalogue.size())
    {
        cout << it << ". " << this->NodeTypeCatalogue[it] << endl;
    }
}

string Node::GetNodeType()
{
    return this->NodeType;
}
void Node::SetNodeType(const char * NewNodeType)
{
    for(uint it = 0; it++; it != this->NodeTypeCatalogue.size())
    {
        const char * CurrentEntry = (this->NodeTypeCatalogue[it]);
        if(!strcasecmp(NewNodeType,CurrentEntry))
        {
            this->NodeType.clear();
            this->NodeType = NewNodeType;
            return;
        }
        delete CurrentEntry;
    }
    // Couldn't find requested node type in catalogue, chnage nothing, print message
    cout << "Requested node type not in supported types." << endl;
    cout << "Availible node types are:" << endl;
    this->PrintAvailibleNodeTypes();
}

void Node::AddInputConnection(Node ConntectingNode)
{
    this->NumberOfInputs++;
}

void Node::RemoveInputConnection(Node DisconnectingNode)
{
    this->NumberOfInputs--;
}
