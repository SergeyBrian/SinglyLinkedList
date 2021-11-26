#ifndef SINGLYLINKEDLIST_LIST_H
#define SINGLYLINKEDLIST_LIST_H

#include "Node.h"

class List {
private:
    Node * root;
public:
    List();
    List(const List &obj);
    ~List();

    friend void Add_Item_To_Begin(List * list, int data);
    friend void Extract_Item_From_Begin(List * list);
    void Add_Item_To_End(int data);
    void Extract_Item_From_End();
};


#endif