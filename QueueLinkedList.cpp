//
//  QueueLinkedList.cpp
//  CSDP PP2
//
//  Created by Chris Turnbull on 4/10/24.
//

#include "QueueLinkedList.h"
#include <iostream>

using namespace std;

QueueLinkedList::QueueLinkedList() {
    front = nullptr;
    rear = nullptr;
}

void QueueLinkedList::enqueue(int data) {
    QueueNode* newNode = new QueueNode();
    newNode->data = data;
    newNode->next = nullptr;
    if (rear == nullptr) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

void QueueLinkedList::display() {
    QueueNode* temp = front;
    while (temp != nullptr) {
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

