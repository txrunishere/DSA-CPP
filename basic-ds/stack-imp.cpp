#include <iostream>
#include <vector>
using namespace std;

// stack using vector
class Stack
{
  vector<int> v;

public:
  int get_top()
  {
    return v[v.size() - 1];
  }

  void push(int val)
  {
    v.push_back(val);
  }

  void pop()
  {
    v.pop_back();
  }

  bool empty()
  {
    return v.size() == 0;
  }

  void print()
  {
    while (!this->empty())
    {
      cout << this->get_top() << " ";
      this->pop();
    }
    cout << endl;
  }
};

int main()
{
  Stack s;
  s.push(10);
  s.push(20);
  s.push(30);
  cout << s.get_top() << endl;
  s.print();

  return 0;
}
