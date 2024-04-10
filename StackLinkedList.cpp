//
//  StackLinkedList.cpp
//  CSDP PP2
//
//  Created by Chris Turnbull on 4/10/24.
//

#include "StackLinkedList.h"
#include <iostream>

using namespace std;

StackLinkedList::StackLinkedList() {
    top = nullptr;
}

void StackLinkedList::push(int data) {
    StackNode* newNode = new StackNode();
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}

void StackLinkedList::display() {
    StackNode* temp = top;
    while (temp != nullptr) {
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

