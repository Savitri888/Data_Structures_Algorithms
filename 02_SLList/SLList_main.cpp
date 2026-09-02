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

}