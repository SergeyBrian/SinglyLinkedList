#include "Node.h"

Node::Node(int d, Node *n) {
    data= d;
    next= n;
}

Node::~Node() = default;

void Node::Update_Pointer(Node * n) {
    next= n;
}

Node *Node::Get_Next() {
    return next;
}

int Node::Get_Value() {
    return data;
}

Node::Node(const Node &obj) {

}
