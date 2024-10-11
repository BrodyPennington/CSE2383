#include "BST.h"
#include <iostream>

int main() {
    BST b;

    b.insert(50);
    b.insert(20);
    b.insert(60);
    b.insert(80);
    b.insert(70);
    b.insert(90);
    b.insert(5);
    b.insert(22);
    b.insert(40);

    b.inorder(std::cout);
    std::cout << std::endl;

    b.postorder(std::cout);
    std::cout << std::endl;

    b.preorder(std::cout);
    std::cout << std::endl;

    b.remove(5);
    b.postorder(std::cout);
    std::cout << std::endl;
}   