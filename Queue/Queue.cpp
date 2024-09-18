#include <iostream>
#include "Queue.h"


Queue::~Queue() {
    while(pop());
}

Queue::Queue(const Queue& q) {
    Node* tmp = q.front;
    front = end = nullptr;

    while(tmp != nullptr) {
        push(tmp->data);
        tmp = tmp->next;
    }
}   

void Queue::push(int data) {
    Node* tmp = new Node(data);

    if (front == nullptr) {
        front = tmp;
    }   else {
        end->next = tmp;
    }
    
    end = tmp;
    
};

bool Queue::pop() {
    
    if (front == nullptr) return false;

    Node* tmp = front;
    front = front->next;

    if (front == nullptr) {
        end = nullptr;
    }

    delete tmp;
    return true
}

bool Queue::push(int &data)
{
    
}

bool Queue::peek(int& data) {
if (front == nullptr) return false;

data = front->data;
return true;
}
