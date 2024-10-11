#include <iostream>
#include "s2q.h"


    void Stack::push(int data) {
        front = new Node(data, front);
    }

    bool Stack::pop() {
        if (front == nullptr) {
            return false;
        }

        if (front->next == nullptr) {
            delete front;
            front = nullptr;
            return true;
        }

        Node *current = front;
        while (current->next->next != nullptr) {
            current = current->next;
        }


        Node *tmp = current->next;
        current->next = nullptr;
        delete tmp;
        return true;
    }

    bool Stack::peek(int &data) {
        if (front == nullptr) {
            return false;
        }

        Node *current = front;
        while (current->next != nullptr) {
            current = current->next;
        }

        data = current->data;
        return true;
    }

    void Stack::display(std::ostream &os) {
        Node *tmp = front;
        while (tmp != nullptr) {
            os << tmp->data << " ";
            tmp = tmp->next;
        }
        std::cout << std::endl;
    }