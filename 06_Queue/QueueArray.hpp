#ifndef QUEUE_ARRAY_HPP
#define QUEUE_ARRAY_HPP

template <typename T, int size = 100>
class QueueArray {

public:

    QueueArray();


    void enqueue(const T& val);
    const T& dequeue();
    const T& front();   // Return the first element inthe queue
    void clear();   // Remove all the elements from the queue
    int size();     // Return the size of the queue
    
    bool empty() const;
    bool full() const;
    void print() const;
    

private:

    T data[size];
    int front_idx;
    int back_idx;
    int queue_size;

};

#include "QueueArray.tpp"

#endif