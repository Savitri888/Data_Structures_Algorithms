#include "SLList.hpp"
#include <iostream>


SLList::SLList() : head(nullptr), tail(nullptr), list_size(0){   
}

// ------------------------------------------------------------------------------------------------

SLList::~SLList(){
    clear();
}

// ------------------------------------------------------------------------------------------------

SLList::SLList(const SLList& other){

    head = nullptr;
    tail = nullptr;
    list_size = other.list_size;

    if(other.head == nullptr)
        return;

    head = new SLLNode(other.head->data);
    SLLNode* cur_new = head;
    SLLNode* cur_other = other.head->next;

    while(cur_other != nullptr){

        cur_new->next = new SLLNode(cur_other->data);
        cur_new = cur_new->next;
        cur_other = cur_other->next;
    }

    tail = cur_new;
    
}

// ------------------------------------------------------------------------------------------------

SLList& SLList::operator=(const SLList& other){


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
        delete head;
        head = nullptr;
        tail = nullptr;
        list_size = 0;
        return;
    }

    if(!empty()){
        SLLNode* temp = head;

        while(temp->next != tail){
            temp = temp->next;
        }
        
        delete tail;

        tail = temp;
        tail->next = nullptr;

        list_size--;

        if(empty()){        
            head = tail;   
        }
    }

}

// ------------------------------------------------------------------------------------------------
