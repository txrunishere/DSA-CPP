#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *prev;

  Node()
  {
    this->data = 0;
    this->next = this->prev = NULL;
  }

  Node(int val)
  {
    this->data = val;
    this->next = this->prev = NULL;
  }
};

class Doubly_List
{
  Node *HEAD;

public:
  Doubly_List()
  {
    this->HEAD = NULL;
  }

  void push_front(int val)
  {
    Node *new_node = new Node(val);

    if (this->HEAD == NULL)
    {
      this->HEAD = new_node;
      return;
    }

    new_node->next = this->HEAD;
    this->HEAD->prev = new_node;
    this->HEAD = new_node;
  }

  void print_list()
  {
    if (this->HEAD == NULL)
    {
      cout << "List is empty!" << endl;
      return;
    }

    Node *temp = this->HEAD;

    while (temp != NULL)
    {
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout << endl;
  }
};

int main()
{
  Doubly_List dll;
  dll.push_front(20);
  dll.push_front(10);
  dll.push_front(5);
  dll.print_list();

  return 0;
}
