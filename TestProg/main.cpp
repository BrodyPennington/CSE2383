//
// Created by brody on 8/30/2024.
//

#include <iostream>

int main() {
    std::string input;

    std::cout << "what is your name?" << std::endl;
    std::getline(std::cin, input);

    if (input.length() > 0) {
        std::cout << "Hi, " << input << ", I hope you have a great day!" << std::endl;
    } else if (input.length() <= 0) {
        std::cout << "I dont know what your name is, but I hope you have a bad day!" << std::endl;

        return main();
    }

    return 0;
}
