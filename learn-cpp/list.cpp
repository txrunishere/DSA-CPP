#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node()
  {
    this->data = 0;
    this->next = NULL;
  }

  Node(int val)
  {
    this->data = val;
    this->next = NULL;
  }
};

class List
{
  Node *head;
  Node *tail;

public:
  List()
  {
    this->head = NULL;
    this->tail = NULL;
  }

  void push_front(int val)
  {
    Node *new_node = new Node(val);

    if (head == NULL)
    {
      this->head = new_node;
      this->tail = new_node;
      return;
    }

    new_node->next = this->head;
    this->head = new_node;
  }

  void push_back(int val)
  {
    Node *new_node = new Node(val);

    if (head == NULL)
    {
      this->head = new_node;
      this->tail = new_node;
      return;
    }

    this->tail->next = new_node;
    this->tail = new_node;
  }

  void print_list()
  {
    Node *temp = head;
    cout << temp << endl;

    if (head == NULL)
    {
      cout << "List is empty!" << endl;
      return;
    }

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
  List l;
  l.push_front(10);
  l.push_back(20);
  l.print_list();

  return 0;
}
