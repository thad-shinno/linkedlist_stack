// @author Thad Shinno
#ifndef STACK_H
#define STACK_H
#include "node.h"

class Stack {
  private:
    Node *_top;
    int _size;

  public:
    Stack();
    int pop();
    void push(int);
    int peek();
    int size();
    void print();
};

#endif
