#include <iostream>


class Node {
    public:
        int data;
        Node* next;

        Node() : data(0), next(nullptr) {}
        Node(int data) : data(data), next(nullptr) {}

};


class LinkedList
{
private:
    Node* head;
    Node* tail;
public:
    LinkedList(): head(nullptr), tail(nullptr) {}
    ~LinkedList();

    LinkedList(const LinkedList& ll);

    bool append(int val);
    bool prepend(int val);
    bool search(int val);
    bool remove(int val);
    void display(std::ostream& os);


    friend std::ostream &operator<<(std::ostream& os, LinkedList& ll);
};

LinkedList::LinkedList()
{
}

LinkedList::~LinkedList()
{
}
