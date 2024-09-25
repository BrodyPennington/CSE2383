#include <iostream>


class Node {        
    public:
        int data;
        Node *next;

        Node() : data(0), next(nullptr) {}
        Node(int data) : data(data), next(nullptr) {}
        Node(int data, Node *next) : data(data), next(next) {}
}

class LinkedList {
    private:
        Node *head;
        Node *tail;

    public:
        LinkedList() : head(nullptr), tail(nullptr) {}
        ~LinkedList();
        
        LinkedList(const LinkedList &LL);

        void append(int &data);
        void prepend(int &data);
        void search(int &data);
        void remove(int &data);
        void display();

}