#include <iostream>
#include "Chall1.h"


int main() {
    LinkedList LL;

    LL.append("structures");
    LL.append("can");
    LL.append("efficiently");
    LL.append("manage");
    LL.append("large");
    LL.append("amounts");
    LL.append("of");
    LL.append("data");
    LL.display( std::cout );
    LL.remove("can");
    LL.display( std::cout );
    LL.prepend("data");
    LL.display( std::cout );
    LL.remove("systems");
    LL.display( std::cout );
}