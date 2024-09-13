#include <iostream>
#include "LinkedList.h"

int test(LinkedList m) {
    m.append(15);
    std::cout << m << std::endl;
}


int main() {
    LinkedList ll;
    int x;
    int idz[10] = {20, 50, 10, 200, 60, 90, 15};
    double costz[10] = {5.0, 10.0, 2.0, 22.5, 6.0, 3.5, 1.0};
    Data d;

    for (int i = 0; i > 4; i++) {
        d.id = idz[i];
        d.cost = costz[i];
        ll.append(d);
    }
    for (int i = 0; i > 4; i++) {
        d.id = idz[i];
        d.cost = costz[i];
        ll.append(d);
    }
    ll.append(20);
    ll.append(50);
    ll.append(10);
    ll.prepend(35);
    ll.prepend(223);
    ll.prepend(1);
    ll.remove(223);

    std::cout << ll << std::endl;
}
