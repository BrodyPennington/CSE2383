#include <iostream>
#include "Chall1.h"

LinkedList::~LinkedList() {
    Node *tmp = head;
    
    while (tmp != nullptr) {

        // move the head to the next node
        head = head->next;
        // delete the current node stored in tmp
        delete tmp;
        // set tmp to the new head
        tmp = head;
        
    }
    tail = nullptr; // set tail to nullptr
}

void LinkedList::append(std::string data) {
    Node *tmp = new Node(data); // creates new node

    if (head == nullptr) { // check if list is empty
        head = tmp; // if it is, set head to new node
    } else {
        tail->next = tmp; // set tail's next to the new node
    }

    tail = tmp; // move tail to the new node
}

void LinkedList::prepend(std::string data) {
    Node *tmp = new Node(data); // create new node
 
    if (head == nullptr) { // check if list is empty
        tail = tmp; // if empty, set tail to new node
    }

    tmp->next = head; // set tmp's next to current head

    head = tmp; // set head to new node
}

bool LinkedList::search(std::string data) {
    Node *tmp = head;   // set tmp node to head

    while(tmp != nullptr) { 
        if (tmp->data == data) { //if data being searched is in current node
        return true;    // return found
        }

        tmp = tmp->next;    // move tmp to the next node
    }

    return false; // if loop ends without success, return failure
}

bool LinkedList::remove(std::string data) {
    Node* tmp = head;
    Node* prv = nullptr;

    while(tmp != nullptr) {

        if (tmp->data == data) {
            prv->next = tmp->next;

            delete tmp;
            return true;
        }

        prv = tmp;
        tmp = tmp->next;
    }

    return false; 
}

void LinkedList::display(std::ostream &os) {
    Node* tmp = head;

    while (tmp != nullptr){
        os << tmp->data << " ";
        tmp = tmp->next;
    }

    os << std::endl;
}

std::ostream &operator<<(std::ostream& os, LinkedList& LL) {
    LL.display(os);
    return(os);
}









