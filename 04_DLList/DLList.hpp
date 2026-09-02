#ifndef DLLIST_HPP
#define DLLIST_HPP

#include "DLLNode.hpp"


template <typename T>
class DLList{

public:

    // No-arg Constructor
    DLList();

    // // Destructor
    // ~DLList();

    // // Copy Constructor
    // DLList(const DLList& other); 

    // // Assignment Operator (=)
    // DLList& operator=(const DLList& other); 

// ------------------------------------------------------------------------------------------------

    // unsigned size() const;      // Return the size of the list

    // bool empty() const;         // Return true if list is empty

    void push_front(const T& val);   // Insert the node at the beginning

    void print() const;              // Print the list  // To-do

    // void push_back(int val);    // Insert at the end

    // void pop_front(void);       // Remove the first node from the list

    // void pop_back(void);        // Remove the last node from the list  

    // void clear(void);           // Remove all the nodes

    // int& at(unsigned index);    // Return the value of the node at index

// ------------------------------------------------------------------------------------------------

private:

    DLLNode<T>* head;              // First node in the linked list
    DLLNode<T>* tail;              // Last node in the linked list
    unsigned list_size;            // The number of node in the linked list

    
};


#endif