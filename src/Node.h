#ifndef SINGLYLINKEDLIST_NODE_H
#define SINGLYLINKEDLIST_NODE_H

class Node {
private:
    int data;
    Node * next;
public:
    Node(int d, Node * n);
    ~Node();
    void Update_Pointer(Node * n);
    int Get_Value();

    Node *Get_Next();
};


#endif