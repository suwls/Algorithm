#ifndef SUJIN_STACK_H
#define SUJIN_STACK_H

class sujin_stack
{
  public:
    sujin_stack();


    void push(int x);

    int pop();

    int size();

    int empty();

    int top();


  private:
    int index;
    int stack[10000];

};

#endif
