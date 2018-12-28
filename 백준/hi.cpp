#include <iostream>
#include <fstream>

using namespace std;


class sujin_stack{
public:
  sujin_stack();
  void push(int x);

  void pop();

  void size();

  void empty();

  void top();

  int index;
  int stack[10000];

//private:


};


sujin_stack::sujin_stack()
:index(-1)
{
}

void sujin_stack::push(int x)
{
  this -> index += 1;
  this->stack[this->index] = x;
}

void sujin_stack::pop()
{
  if(this->index == -1)
  {
    cout << -1<<endl;
  }
  else
  {
    cout << this -> stack[this->index]<<endl;
    this->index -= 1;
  }
}

void sujin_stack::size()
{
  cout << (this->index)+1<<endl;
}

void sujin_stack::empty()
{
  if(this->index == -1)
    cout << 1 <<endl;
  else
    cout << 0 <<endl;
}

void sujin_stack::top()
{
  if(this->index == -1)
    cout << -1 <<endl;
  else
    cout << this->stack[this->index]<<endl;
}



int main(void)
{
  int numInst;

  cin >> numInst;
  while(numInst--)
  {
    sujin_stack st;
    string input;
    cin >> input;

    if(input == "push")
    {
      int data;
      cin >> data;
      st.push(data);
    }
    else if(input == "pop")
    {
      st.pop();
    }
    else if(input == "size")
    {
      st.size();
    }
    else if(input == "empty")
    {
      st.empty();
    }
    else if(input == "top")
    {
      st.top();
    }
  }
}
