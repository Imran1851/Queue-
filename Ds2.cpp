
#include <iostream>

using namespace std;

 

class Queue {

private:

    int queue[5];

    int frontIndex, rearIndex, s;

    int maxSize = 5;

 

public:

    Queue() {

        frontIndex = 0;

        rearIndex = -1;

        s = 0;

    }

 

    void enqueue(int value) {

        if (s == maxSize) {

 

            cout << queue[frontIndex] << " replaced by " << value << endl;

            queue[frontIndex] = value;

            frontIndex ++;

            rearIndex ++;

        } else {

 

rearIndex = (rearIndex + 1) % maxSize;

            queue[rearIndex] = value;

            s++;

 

        }

    }

 

    void dequeue() {

        if (isEmpty()) {

            cout << "Queue underflow! Cannot dequeue from an empty queue." << endl;

        } else {

            cout << queue[frontIndex] << " dequeued" << endl;

 

            frontIndex ++;

            s--;

 

        }

    }

 

    int front() {

        if (isEmpty()) {

            cout << "Queue is empty, no front element." << endl;

            return -1;

        }

        cout << queue[frontIndex] << " is at the front" << endl;

        return queue[frontIndex];

    }

 

    int rear() {

        if (isEmpty()) {

            cout << "Queue is empty, no rear element." << endl;

            return 0;

        }

        cout << queue[rearIndex] << " is at the rear" << endl;

        return queue[rearIndex];

    }

 

    bool isEmpty() {

        return s == 0;

    }

};

 

int main() {

    Queue que;

 

    que.enqueue(10);

    que.enqueue(20);

    que.enqueue(30);

    que.enqueue(40);

    que.enqueue(50);

    que.enqueue(60);

    que.dequeue();

    que.front();

    que.enqueue(70);

    cout<<"70 enqueued"<<endl;

    que.rear();

 

 

    return 0;

}



