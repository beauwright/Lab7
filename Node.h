//
// Created by Beau Wright on 11/4/21.
//

#ifndef LAB7_NODE_H
#define LAB7_NODE_H
#include "NodeInterface.h"

using namespace std;

class Node: public NodeInterface {
public:
    Node(int data);
    ~Node();
    int getData() const;
    NodeInterface * getLeftChild() const;
    NodeInterface * getRightChild() const;
    Node *&getLeft();
    Node *&getRight();

    void setData(int data);

protected:
    int data;
    Node* leftChild = nullptr;
    Node* rightChild = nullptr;
};


#endif //LAB7_NODE_H
