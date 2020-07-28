// @author Thad Shinno
#include <iostream>
#include "node.h"
#include "stack.h"
using std::cout;
using std::endl;

// initialize the stack with size 0 and nothing else.
Stack::Stack() {
  _size = 0;
}

// remove the top of the stack and return it 
int Stack::pop() {
  // you can't pop an empty stack
  if (_size == 0) {
    throw "Stack is Empty!";
  }
  
  int val = _top->getVal(); // save the top
  _top = _top->getNext();   // the top is now the next one
  _size--;                  // decrease size
  return val;
}

// push a value to the top of the stack
void Stack::push(int val) {
  Node *n = new Node(val);
  
  // if the stack is empty, make it the top
  if (_size == 0) {
    _top = n;
  }
  // set the top to be n next and make n the top
  else {
    n->setNext(_top);
    _top = n;
  }
  _size++; // increase size
}

// return but don't remove the top of the stack
int Stack::peek() {
  // can't peek at an empty stack
  if (_size == 0) {
    throw "Stack is Empty!";
  }
  
  return _top->getVal();
}

int Stack::size() {
  return _size;
}

// print the whole thing
void Stack::print() {
  // since the whole stack is backwards, make a temp array
  int printarr[_size];
  // fill the array with the stack backwards
  Node *curr = _top;
  for(int i = _size - 1; i >= 0; i--) {
    printarr[i] = curr->getVal();
    curr = curr->getNext();
  }
  
  // print the array
  cout << "Stack: ";
  for (int i = 0; i < _size; i++) {
    cout << printarr[i] << " ";
  }
  cout << endl;
}
