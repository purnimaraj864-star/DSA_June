#include <iostream>
using namespace std;

class Queue
{
    int arr[1000];
    int front;
    int rear;

public:
    Queue()
    {
        front = 0;
        rear = -1;
    }

    void enqueue(int x)
    {
        if (rear == 999)
        {
            cout << "Queue Overflow\n";
            return;
        }

        arr[++rear] = x;
    }

    void dequeue()
    {
        if (empty())
        {
            cout << "Queue Underflow\n";
            return;
        }

        front++;
    }

    int Front()
    {
        if (empty())
        {
            cout << "Queue is Empty\n";
            return -1;
        }

        return arr[front];
    }

    bool empty()
    {
        return front > rear;
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.Front() << endl;

    q.dequeue();

    cout << "Front element after dequeue: " << q.Front() << endl;

    return 0;
}