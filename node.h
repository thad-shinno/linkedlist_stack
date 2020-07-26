#ifndef NODE_H
#define NODE_H

class Node {
  private:
    int _val;
    Node *_next;

  public:
    Node(int);
    void setNext(Node*);
    Node* getNext();
    int getVal();
};

#endif
