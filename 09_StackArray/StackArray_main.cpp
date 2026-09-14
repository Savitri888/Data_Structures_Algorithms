#include "StackArray.hpp"
#include <iostream>


int main(void){

    StackArray<int, 5> test1;

    test1.push(0);
    test1.push(1);
    test1.push(2);
    test1.push(3);
    test1.push(4);

    test1.print();

    std::cout << "------------------------------" << std::endl;

    std::cout << "Empty: " << test1.empty() << std::endl;
    std::cout << "Full: " << test1.full() << std::endl;
    std::cout << "Top: " << test1.top() << std::endl;

    std::cout << "------------------------------" << std::endl;

    test1.pop();
    test1.pop();
    test1.pop();
    test1.pop();
    test1.pop();

    test1.print();

    std::cout << "------------------------------" << std::endl;

    std::cout << "Empty: " << test1.empty() << std::endl;
    std::cout << "Full: " << test1.full() << std::endl;
    // std::cout << "Top: " << test1.top() << std::endl;  // will cause crash


    return 0;
}