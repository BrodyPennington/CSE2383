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
    tmp->prev = tail; // set tmp's previous to the current tail

    if (head == nullptr) { // check if list is empty
        head = tmp; // if it is, set head to new node
    } else {
        tail->next = tmp; // set tail's next to the new node
    }

    tail = tmp; // move tail to the new node
}

void LinkedList::prepend(std::string data) {
    Node *tmp = new Node(data); // create new node
    tmp->next = head; // set tmp's next to current head

    if (head == nullptr) { // check if list is empty
        tail = tmp; // if empty, set tail to new node
    } else {
        head->prev = tmp; // set head's next to the new node
    }

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

    while (tmp != nullptr) {
        if (tmp->data == data) {
            // Adjust the next pointer of the previous node (if exists)
            if (tmp->prev != nullptr) {
                tmp->prev->next = tmp->next;
            } else {
                // If the node to be removed is the head, move head forward
                head = tmp->next;
            }

            // Adjust the prev pointer of the next node (if exists)
            if (tmp->next != nullptr) {
                tmp->next->prev = tmp->prev;
            } else {
                // If the node to be removed is the tail, move tail backward
                tail = tmp->prev;
            }

            delete tmp;  // free the memory for the removed node
            return true;  // return success
        }
        tmp = tmp->next;  // move to the next node
    }

    return false;  // data not found 
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

bool LinkedList::tailRemove(std::string data) {
    Node* tmp = tail;

    while(tmp != nullptr) {

        if (tmp->data == data) { // if data is stored in the current node, delete

            if (tmp->prev != nullptr) {
                tmp->prev->next = tmp->next;
            } else {
                head = tmp->next;
            }
            
            if (tmp->next != nullptr) { // check to see if next pointer exists
                tmp->next->prev = tmp->prev;
            } else {
                tail = tmp->prev;
            }

            delete tmp;
            return true;
            
        }
        tmp = tmp->prev;
    }
    return false; 
}

void LinkedList::tailDisplay(std::ostream &os) {
    Node *tmp = tail;

    while (tmp != nullptr) {
        os << tmp->data << " ";
        tmp = tmp->prev;
    }

    os << std::endl;
}









