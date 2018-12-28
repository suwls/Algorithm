#include "sujin_stack.h"
#include <iostream>
#include <fstream>

using namespace std;

sujin_stack::sujin_stack()
{
  index = -1;
}

void sujin_stack::push(int x)
{
  index += 1;
  stack[index] = x;

}

int sujin_stack::pop()
{
  if(index == -1)
  {
    return -1;
  }
  else
  {
    return stack[index--];
  }

}

int sujin_stack::size()
{
  return index + 1;
}

int sujin_stack::empty()
{
  if(index == -1)
    return 1 ;
  else
    return 0 ;
}

int sujin_stack::top()
{
  if(index == -1)
    return -1;
  else
    return stack[index];
}
