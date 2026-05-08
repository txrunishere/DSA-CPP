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

  void push_back_without_tail(int val)
  {
    Node *new_node = new Node(val);

    if (head == NULL)
    {
      this->head = new_node;
      return;
    }

    Node *last = head;

    while (last->next != NULL)
    {
      last = last->next;
    }

    last->next = new_node;
  }

  void delete_front()
  {
    if (head == NULL)
    {
      cout << "List is empty!" << endl;
      return;
    }

    Node *temp = head;
    this->head = this->head->next;

    if (head == NULL)
    {
      this->tail = NULL;
    }

    delete temp; // to clear the deleted node from memory
  }

  void delete_back()
  {
    if (head == NULL)
    {
      cout << "List is empty!" << endl;
      return;
    }

    if (head == tail)
    {
      delete head;
      head = tail = NULL;
      return;
    }

    Node *temp = head;

    while (temp->next != tail)
    {
      tail = tail->next;
    }

    delete tail;
    tail = temp;
    temp->next = NULL;
  }

  void print_list()
  {
    Node *temp = head;

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
  l.push_front(5);
  l.push_back_without_tail(20);
  l.delete_front();
  l.print_list();

  return 0;
}
