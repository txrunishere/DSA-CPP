#include <iostream>
using namespace std;

class Queue
{
  int front;
  int rear;
  int arr[5];

public:
  Queue()
  {
    this->front = this->rear = -1;
  }

  bool empty()
  {
    return this->rear == -1;
  }

  bool full()
  {
    return this->rear == sizeof(this->arr) / sizeof(this->arr[0]);
  }

  void enqueue(int val)
  {
    if (this->full())
    {
      cout << "Queue is full!" << endl;
      return;
    }

    if (this->rear == -1)
    {
      this->front = this->rear = 0;
      this->arr[rear] = val;
    }
    else
    {
      this->rear++;
      this->arr[rear] = val;
    }
  }

  void dequeue()
  {
    if (this->empty())
    {
      cout << "Queue is empty!" << endl;
      return;
    }

    int temp = this->arr[this->front];

    if (this->front == this->rear)
    {
      this->front = this->rear = -1;
    }
    else
    {
      this->front++;
    }
  }

  int front_peek()
  {
    return this->arr[this->front];
  }

  int rear_peek()
  {
    return this->arr[this->rear];
  }
};

int main()
{
  Queue q;
  q.enqueue(10);
  q.enqueue(20);
  cout << q.front_peek() << endl;
  cout << q.rear_peek() << endl;
  cout << q.empty() << endl;

  return 0;
}