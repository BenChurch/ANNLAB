#ifndef NODE_H
#define NODE_H

#include "ANNLAB.h"
#include "NodeActivationFunction.h"
#include "NodeActivationState.h"

class Node
{
public:

    // Basic constructors and destrcutors
    //------------------------------------------------------
    // Constructor
    Node();
    Node(string NodeType, NodeActivationFunction ActivationFunction, int NumberOfInputs, int NumberOfOutputs);

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

    // Returns string stating the current NodeType
    // TODO make sure this can handle an uninitialized NodeType
    string GetNodeType();

    void SetNodeType(const char * NewNodeType);

    void AddInputConnection(Node ConnectingNode);
    void RemoveInputConnection(Node DisconnectingNode);

protected:
    vector<const char *> NodeTypeCatalogue = {"Input", "Hidden", "Output"};
    string NodeType;
    int NumberOfInputs = 0;
    int NumberOfOutputs = 0;
    float NodeResponse = 0;
    NodeActivationFunction ActivationFunction;
    NodeActivationState ActivationState;

};

#endif // NODE_H
