#include <iostream>

using namespace std;

class sujin_queue{
public:
  sujin_queue();
  void push(int x);

  int pop();

  int size();

  int empty();

  int front();

  int back();

private:
  int queue[10000];
  int head;
  int tail;
};

sujin_queue::sujin_queue()
:head(0),tail(-1)
{}

void sujin_queue::push(int x)
{
  tail++;
  queue[tail] = x;
}

int sujin_queue::pop()
{
  if(head>tail)
  {
    return -1;
  }
  else
  {
    return queue[head++];
  }
}

int sujin_queue::size()
{
  return tail+1-head;
}

int sujin_queue::empty()
{
  return head>tail;
}

int sujin_queue::front()
{
  if(head>tail)
  {
    return -1;
  }
  else
  {
    return queue[head];
  }
}

int sujin_queue::back()
{
  if(head>tail)
  {
    return -1;
  }
  else
  {
    return queue[tail];
  }
}


int main()
{
  int numTest;
  cin >> numTest;

  int data;

  sujin_queue qu;

  while(numTest--)
  {
    string input;
    cin >> input;

    if(input == "push")
    {
      cin>>data;
      qu.push(data);
    }
    else if(input == "pop")
    {
      cout << qu.pop()<<endl;
    }
    else if(input == "size")
    {
      cout<<qu.size()<<endl;
    }
    else if(input == "empty")
    {
      cout <<qu.empty()<<endl;
    }
    else if(input =="front")
    {
      cout<<qu.front()<<endl;
    }
    else
    {
      cout<<qu.back()<<endl;
    }
  }
}
