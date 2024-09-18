#include <iostream>
#include "Queue.h"

void view(Queue z) {
    int data;

    while (z.peek(data)) {
        std::cout << data << ", ";
        z.pop();
    }

    std::cout << std::endl;
}

int main() {
    Queue q;

    q.push(5);
    q.push(10);
    q.push(8);
    q.push(11);
    q.push(22);
    
    view(q);
    q.pop();
    view(q);

    return 0;
}