#include "QueueList.hpp"

// ----------------------------------------------------------------------------
template <typename T, int size>
bool QueueList<T, size>::empty() const{

    return list.empty();
}

// ----------------------------------------------------------------------------
template <typename T, int size>
void QueueList<T, size>::enqueue(const T& val){

    list.push_back(val);

}

// ----------------------------------------------------------------------------
template <typename T, int size>
const T& QueueList<T, size>::dequeue(){

    return list.pop_front();
    // const T& frontVal = list.at(0); 
    // list.pop_front();
    // return frontVal;
} 

// ----------------------------------------------------------------------------
template <typename T, int size>
const T& QueueList<T, size>::front(){

    return list.at(0);
}


// ----------------------------------------------------------------------------
template <typename T, int size>
void QueueList<T, size>::clear(){

    list.clear();
}

// ----------------------------------------------------------------------------
template <typename T, int size>
int QueueList<T, size>::size(){

    return list.size();
}

// ----------------------------------------------------------------------------
template <typename T, int size>
bool QueueList<T, size>::full() const{

    return list.size() == size;
}


// ----------------------------------------------------------------------------
template <typename T, int size>
void QueueList<T, size>::print() const{

    list.print();
}
