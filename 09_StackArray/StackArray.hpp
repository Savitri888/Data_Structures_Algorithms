#ifndef STACK_ARRAY_HPP
#define STACK_ARRAY_HPP

template <typename T, int capacity = 100>

class StackArray{

public:

    Stack();

    void push(const T& val);
    T pop();

    bool full() const;
    bool empty() const;

    const T& top() const; // Returns the refrence to the top element

    void print() const; // TODO

private:

    T data[capacity]; // Array of elements
};


#endif
