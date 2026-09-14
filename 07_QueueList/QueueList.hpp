#ifndef QUEUE_LIST_HPP
#define QUEUE_LIST_HPP
#include "../04_DLList/DLList.hpp"

template <typename T, int size = 100>
class QueueList {

public:

    QueueList();


    void enqueue(const T& val); 
    const T& dequeue();
    const T& front();   // Return the first element in the queue
    void clear();   // Remove all the elements from the queue
    int size();     // Return the size of the queue
    
    bool empty() const;
    bool full() const;
    void print() const;
    

private:

    DLList<T> list;

};

#include "QueueList.tpp"

#endif