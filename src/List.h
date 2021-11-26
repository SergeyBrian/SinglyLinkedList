#ifndef SINGLYLINKEDLIST_LIST_H
#define SINGLYLINKEDLIST_LIST_H

#include <iostream>

#include "Node.h"

template<typename T>
class List {
private:
    Node<T> * root;
public:
    List() {
        root= nullptr;
    }
    ~List() {
        while (root != nullptr) {
            Extract_Item_From_End();
        }
    }

    friend void Add_Item_To_Begin(List * list, T data) {
        list->root = new Node<T>(data, list->root);
    }
    friend void Extract_Item_From_Begin(List * list) {
        Node<T> * tmp = list->root->Get_Next();
        delete list->root;
        list->root = tmp;
    }
    void Add_Item_To_End(T data) {
        if (root == nullptr)
            root = new Node<T>(data, nullptr);
        else {
            Node<T> * tmp = Get_Last();
            tmp->Update_Pointer(new Node<T>(data, nullptr));
        }
    }
    void Extract_Item_From_End() {
        if (root == nullptr)
            std::cout << "List is empty!\n";
        else {
            if (root->Get_Next() == nullptr) root= nullptr;
            else {
                Node<T> * tmp = root;
                while (tmp->Get_Next()->Get_Next() != nullptr)
                    tmp=tmp->Get_Next();
                delete tmp->Get_Next();
                tmp->Update_Pointer(nullptr);
            }
        }
    }
    Node<T> * Get_Last() {
        Node<T> * tmp = root;
        while (tmp->Get_Next() != nullptr)
            tmp=tmp->Get_Next();
        return tmp;
    }

    Node<T> * Get_First() {
        return root;
    }
};


#endif