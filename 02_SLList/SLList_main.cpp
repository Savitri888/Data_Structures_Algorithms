#include "SLList.hpp"
#include <iostream>

int main(void){

    SLList list; 
    list.push_front(1);
    list.push_front(2);
    list.push_front(3);
    list.push_front(4);
    list.push_front(5);

    list.print();

    std::cout << "List Size: " << list.size() << "\n" << std::endl;

// --------------------------------------------------------------------------------------

    list.push_back(6);
    list.push_back(7);
    list.push_back(8);
    list.push_back(9);
    list.push_back(0);

    list.print();

    std::cout << "List Size: " << list.size() << "\n" << std::endl;

// --------------------------------------------------------------------------------------

    list.pop_front();

    list.print();

    std::cout << "List Size: " << list.size() << "\n" << std::endl;

// --------------------------------------------------------------------------------------

    list.clear();

    list.print();

    std::cout << "List Size: " << list.size() << "\n" << std::endl;

// --------------------------------------------------------------------------------------

    for (int i = 0; i < 100; i++) {
      
        if (i % 4 == 0) {
            list.push_front(i * 2);
            list.push_back(i * 2);
        }

        if (i % 5 == 2 || i % 5 == 3) {
            list.pop_back();
        }
    }

    std::cout << (char) (list.at(0) - 127);
    std::cout << (char) (list.at(1) - 108);
    std::cout << (char) (list.at(2) - 95);
    std::cout << (char) (list.at(3) - 101);
    std::cout << (char) (list.at(4) - 83) << std::endl;


    return 0;

}