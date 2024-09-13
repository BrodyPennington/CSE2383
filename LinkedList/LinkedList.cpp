#include <iostream>
#include "LinkedList.h"

LinkedList::~LinkedList() {

    Node* tmp = head, *rmv;

    while (tmp != nullptr) {
        rmv = tmp;
        tmp = tmp->next;
        delete rmv;
    }

    head = nullptr;
    tail = nullptr;
    
}

LinkedList::LinkedList(const LinkedList& ll) {
    Node* tmp = ll, head;
    head = nullptr;
    tail = nullptr;

    while(tmp != nullptr) {
        append(tmp->data);
        tmp = tmp->next;
    }
}

bool LinkedList::append(int val) {
    Node* tmp = new Node(val);
    
    if(head == nullptr) {
        head = tmp;
    } else {
        tail->next = tmp;
    }

    tail = tmp;
    return true;
}

bool LinkedList::prepend(int val) {
    Node* tmp = new Node(val);
    
    if(head == nullptr) {
        tail = tmp;
    }

    tmp->next = head;
    head = tmp;
}


bool LinkedList::search(int val) {

}
    
bool LinkedList::remove(int val) {

}
    
void LinkedList::display(std::ostream& os) {
    Node* tmp = head;

    while (tmp != nullptr){
        os << tmp->data << ", ";
        tmp = tmp->next;
    }
}


std::ostream &operator<<(std::ostream& os, LinkedList& ll) {
    ll.display(os);
    return(os);
}

int main() {

}