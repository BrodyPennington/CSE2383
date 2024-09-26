#include <iostream>
#include <string>

class Node {        
    public:
        std::string data;
        Node *next;

        Node() : data(0), next(nullptr) {}
        Node(std::string data) : data(data), next(nullptr) {}
        Node(std::string data, Node *next) : data(data), next(next) {}
};

class LinkedList {
    private:
        Node *head;
        Node *tail;

    public:
        LinkedList() : head(nullptr), tail(nullptr) {}
        ~LinkedList();
        
        LinkedList(const LinkedList &LL);

        void append(std::string data);
        void prepend(std::string data);
        bool search(std::string data);
        bool remove(std::string data);
        void display(std::ostream& os);

        friend std::ostream &operator<<(std::ostream& os, LinkedList& LL);

};