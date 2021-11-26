#ifndef SINGLYLINKEDLIST_NODE_H
#define SINGLYLINKEDLIST_NODE_H

template<typename T>
class Node {
private:
    T data;
    Node * next;
public:
    Node(T d, Node * n) {
        data= d;
        next= n;
    }
    ~Node() = default;
    void Update_Pointer(Node * n) {next=n;}
    T Get_Value() {
        return data;
    }

    Node *Get_Next() {
        return next;
    }
};


#endif