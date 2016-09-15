#ifndef NODE_H
#define NODE_H

#include "ANNLAB.h"
#include "NodeActivationFunction.h"
#include "NodeActivationState.h"

using namespace std;

class Node
{
public:

    // Basic constructors and destrcutors
    //------------------------------------------------------
    // Constructor
    Node();
    Node(NodeActivationFunction * NewActivationFunction, int NumberOfInputs, int NumberOfOutputs);

    // Destructor
    ~Node();

    // Copy constructor
    Node(const Node& OriginalNode);

    // Copy assignment operation
    Node& operator= (const Node&);

    // Move constructor
    Node(Node&& OriginalNode); // Create deep copy of objects therin contained, delete orginals

    // Move assignment operation
    Node& operator= (Node&);    // Create deep copy of objects therin contained, delete orginals
    //------------------------------------------------------

    // Lists node types to which this->NodeType can be set
    void PrintAvailibleNodeTypes();

    //void AddInputConnection(Node ConnectingNode);
    //void RemoveInputConnection(Node DisconnectingNode);
    vector<double> Connections;
    float NodeValue = 0;
    float NodeThreshold = 1;        // 1 for now, try to come up with XOR network
    NodeActivationFunction ActivationFunction;

protected:
//    vector<const char *> NodeTypeCatalogue = {"Input", "Hidden", "Output"};
//    string NodeType;
    int NumberOfInputs = 0;
    int NumberOfOutputs = 0;

    //NodeActivationFunction ActivationFunction;
    //NodeActivationState ActivationState;

};

#endif // NODE_H
