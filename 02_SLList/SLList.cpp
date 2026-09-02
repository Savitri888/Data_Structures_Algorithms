#include "SLList.hpp"
#include <iostream>
#include <stdexcept>


SLList::SLList() 
: head(nullptr), tail(nullptr), list_size(0){   
}

// ------------------------------------------------------------------------------------------------

SLList::~SLList(){
    clear();
}

// ------------------------------------------------------------------------------------------------

SLList::SLList(const SLList& other) 
: head(nullptr), tail(nullptr), list_size(0) {
   
    SLLNode* cur = other.head;
    
    while (cur != nullptr) {
        push_back(cur->data); 
        cur = cur->next;  
    }
}

// ------------------------------------------------------------------------------------------------

SLList& SLList::operator=(const SLList& other){

    if (this != &other){
        clear();

        SLLNode* cur = other.head;
        while (cur != nullptr) {
            push_back(cur->data); 
            cur = cur->next;
        }

    }
    
    return *this;
}

// ------------------------------------------------------------------------------------------------


unsigned SLList::size() const{
    return list_size;
}

// ------------------------------------------------------------------------------------------------

bool SLList::empty() const{
    return (size() == 0);
}

// ------------------------------------------------------------------------------------------------

void SLList::push_front(int val){

    // SLLNode* new_node = new SLLNode(val);
    // new_node-> = head;
    // head = new_node;


    // Alternate way
    head = new SLLNode(val, head);

    list_size++;

    if(size() == 1){
        tail = head;
    }

}

// ------------------------------------------------------------------------------------------------

void SLList::print() const{
    std::cout << "{ ";

    SLLNode* cur = head;

    while (cur){
        std::cout << cur->data;

        if(cur->next){
            std::cout << " -> ";
        }

        cur = cur->next;
    }

    std::cout << " }\n";

}

// ------------------------------------------------------------------------------------------------

void SLList::push_back(int val){

//     SLLNode* new_node = new SLLNode(val);
    
//    if(tail == nullptr){
//     tail = new_node;
//     }

//     else{
//         SLLNode* cur = head;
//         while (cur->next != nullptr) {
//             cur = cur->next;
//         }
//         cur->next = new_node;
//     }

    if(empty()){
        push_front(val);
        return;
    }

    tail->next = new SLLNode(val); // Add the new node at the end
    tail = tail->next; // Update the tail


    list_size++;
}

// ------------------------------------------------------------------------------------------------

void SLList::pop_front(void){

    if(!empty()){
        SLLNode* old_head = head;
        head = head->next;

        delete old_head;

        list_size--;

        if(empty()){        // If the last node was deleted
            tail = head;    // Update the tail
        }
    }

}

// ------------------------------------------------------------------------------------------------

void SLList::clear(void){

    while(!empty()){
        
        pop_front();
    }

}

// ------------------------------------------------------------------------------------------------

void SLList::pop_back(void){

    if(empty())
        return;

    if (head == tail) { 
        pop_front();
        return;
    }

    if(!empty()){
        SLLNode* cur = head;

        while (cur->next != tail) { 
            cur = cur->next;
        }
        
        delete tail;      
        tail = cur;    
        tail->next = nullptr;
    }
    list_size--;

    return;

}


// ------------------------------------------------------------------------------------------------

 int& SLList::at(unsigned index){

    if(index >= size()){
        throw std::logic_error("at: incorrect index");
    }

    SLLNode* cur = head;

    for(unsigned i = 0; i < index; i++){
        cur = cur->next;
    }

    return cur->data;

 }