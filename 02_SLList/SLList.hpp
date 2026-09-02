#ifndef SLLIST_HPP
#define SLLIST_HPP

#include "SLLNode.hpp"

class SLList{

public:

    // No-arg Constructor
    SLList();

    // Destructor
    ~SLList();

    // Copy Constructor
    SLList(const SLList& other); // To-do

    // Assignment Operator (=)
    SLList& operator=(const SLList& other); // To-do

// ------------------------------------------------------------------------------------------------

    unsigned size() const;      // Return the size of the list

    bool empty() const;         // Return true if list is empty

    void push_front(int val);   // Insert the node at the beginning

    void print() const;         // Print the list

    void push_back(int val);    // Insert at the end

    void pop_front(void);       // Remove the first node from the list

    void pop_back(void);        // Remove the last node from the list  // To-do

    void clear(void);           // Remove all the nodes

    int& at(unsigned index);    // Return the value of the node at index

// ------------------------------------------------------------------------------------------------

private:

    SLLNode* head; // First node in the linked list
    unsigned list_size; // The number of node in the linked list

    SLLNode* tail; // Last node in the linked list
    
};



#endif