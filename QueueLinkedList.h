//
//  QueueLinkedList.h
//  CSDP PP2
//
//  Created by Chris Turnbull on 4/10/24.
//

#ifndef QUEUE_LINKED_LIST_H
#define QUEUE_LINKED_LIST_H

class QueueNode {
public:
    int data;
    QueueNode* next;
};

class QueueLinkedList {
private:
    QueueNode* front;
    QueueNode* rear;
public:
    QueueLinkedList();
    void enqueue(int data);
    void display();
};

#endif
