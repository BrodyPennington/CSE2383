//
// Created by brody on 9/7/2024.
//


#include <iostream>

int main() {
    int *ptr = new int;
    *ptr = 0;

    for(int i = 0; i < 5; i++) {
      *ptr += i;
      std::cout << *ptr << std::endl;
    }
}