#include "List.h"

#include <iostream>

List::List() {
    root= nullptr;
}

List::~List() {
    while (root != nullptr) {
        Extract_Item_From_End();
    }
}

void Add_Item_To_Begin(List *list, int data) {
    list->root = new Node(data, list->root);
}

void Extract_Item_From_Begin(List *list) {
    Node * tmp = list->root->Get_Next();
    delete list->root;
    list->root = tmp;
}

void List::Add_Item_To_End(int data) {
    if (root == nullptr)
        root = new Node(data, nullptr);
    else {
        Node * tmp = root;
        while (tmp->Get_Next() != nullptr)
            tmp=tmp->Get_Next();
        tmp->Update_Pointer(new Node(data, nullptr));
    }
}

void List::Extract_Item_From_End() {
    if (root == nullptr)
        std::cout << "List is empty!\n";
    else {
        if (root->Get_Next() == nullptr) root= nullptr;
        else {
            Node * tmp = root;
            while (tmp->Get_Next()->Get_Next() != nullptr)
                tmp=tmp->Get_Next();
            delete tmp->Get_Next();
            tmp->Update_Pointer(nullptr);
        }
    }
}
