#include "QueueArray.hpp"

int main(void){

    QueueArray<int, 20> q;  // 20 elements; array of int

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    q.print();

    while(!q.empty()){

        std::cout << q.dequeue() << std::endl;
    }


    return 0;
}