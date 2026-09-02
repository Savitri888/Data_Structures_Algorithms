#include <iostream>
#include "SLLNode.hpp"


int main(void) {

    // Create SLLNodes
    SLLNode* n1 = new SLLNode(1);
    SLLNode* n2 = new SLLNode(2);
    SLLNode* n3 = new SLLNode(3);
    SLLNode* n4 = new SLLNode(4);


    // Testing the arrow thing
    SLLNode* n5 = new SLLNode(5);
    SLLNode* n6 = new SLLNode(6);
    SLLNode* n7 = new SLLNode(7);
    SLLNode* n8 = new SLLNode(8);

// -------------------------------------------------------------------------

    // Link the nodes
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;


    // Testing the arrow thing
    n4->next = n5;
    n5->next = n6;
    n6->next = n7;
    n7->next = n8;

// -------------------------------------------------------------------------

    // Print the value of the first node
    std::cout << n1->data << std::endl;


    // Print the value of the second node
    std::cout << n2->data << std::endl;
    //or through n1
    std::cout << n1->next->data << std::endl;

// -------------------------------------------------------------------------

    // Iterate through the nodes
    SLLNode* cur = n1;
    
    while (cur != nullptr){

        if (cur->next != nullptr){
        std::cout << cur->data << "->";
        cur = cur->next;
        }

        else{
        std::cout << cur->data << " ";
        cur = cur->next;
        }
    }

    // add arrows 

    return 0;
}

