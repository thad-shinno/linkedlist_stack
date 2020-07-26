#include "node.h"

// single link node has a value and a next node

Node::Node(int val) {
  _val = val;
}

void Node::setNext(Node *next) {
  _next = next;
}

Node* Node::getNext() {
  return _next;
}

int Node::getVal() {
  return _val;
}

