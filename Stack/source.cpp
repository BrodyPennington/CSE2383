#include <iostream>
#include "Stack.h"

int main() {
    Stack S;
    int result;

    S.push(10);
    S.push(11);
    S.push(1);
    S.push(6);
    S.pop();
    S.pop();
    S.push(8);
    S.peek(result);

    std::cout << "Peek: " << result << std::endl;
    std::cout << "Final Stack: " << std::endl;
    S.display(std::cout);

    return 0;

}