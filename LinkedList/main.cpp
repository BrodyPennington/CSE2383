#include <iostream>
#include "LinkedList.h"

int test(LinkedList m) {
    m.append(15);
    std::cout << m << std::endl;
}


int main() {
    LinkedList ll;

    ll.append(20);
    ll.append(50);
    ll.append(10);
    ll.prepend(35);
    ll.prepend(223);
    ll.prepend(1);
    ll.remove(223);

    std::cout << ll << std::endl;
}
