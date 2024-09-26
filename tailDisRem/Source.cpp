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
    // structures can efficiently manage large amounts of data 
    LL.display( std::cout ); 
    LL.remove("can");

    // structures efficiently manage large amounts of data
    LL.display( std::cout ); 
    LL.prepend("data");

    // data structures efficiently manage large amounts of data
    LL.display( std::cout );  
    LL.remove("systems");
    // data structures efficiently manage large amounts of data
    LL.display( std::cout );
    // data of amounts large manage efficiently structures data
    LL.tailDisplay(std::cout);
    LL.tailRemove("data");
    // data structures efficiently manage large amounts of
    LL.display( std::cout );
    LL.tailRemove("manage");
    // data structures efficiently large amounts of
    LL.display(std::cout);
}
