//
//  RBNode.h
//  tree
//
//  Created by Nikita Galushko on 24.11.13.
//  Copyright (c) 2013 Nikita Galushko. All rights reserved.
//

#ifndef tree_RBNode_h
#define tree_RBNode_h

//#include "Node.h"

enum colorNode {RED = 5, BLACK = 10};

template<class VALUE>

class RBNode /*: public Node<VALUE>*/ {
    
private:
    colorNode color;
    RBNode<VALUE>* parent;
    int key;
    VALUE data;
    RBNode<VALUE>* leftChild;
    RBNode<VALUE>* rightChild;
public:
    RBNode(int key, VALUE data, RBNode<VALUE>* right = 0, RBNode<VALUE>* left = 0, RBNode<VALUE>* parent = 0, colorNode color = RED);
    colorNode getColor();
    RBNode& getParent();
    virtual int getKey();
    virtual VALUE getData();
    virtual RBNode<VALUE>& getLeft();
    virtual RBNode<VALUE>& getRight();
    virtual void setLeft(RBNode<VALUE>* left);
    virtual void setRight(RBNode<VALUE>* right);
    void setParent(RBNode<VALUE>* perent);
    void setColor(colorNode color);
};


template <class VALUE>
RBNode<VALUE>::RBNode(int key, VALUE data, RBNode<VALUE>* right, RBNode<VALUE>* left, RBNode<VALUE>* parent, colorNode color) {
    this->key = key;
    this->data = data;
    this->leftChild = left;
    this->rightChild = right;
    this->color = color;
}

template <class VALUE>
colorNode RBNode<VALUE>::getColor() {
    return this->color;
}

template <class VALUE>
void RBNode<VALUE>::setColor(colorNode color) {
    this->color = color;
}
template <class VALUE>
RBNode<VALUE>& RBNode<VALUE>::getParent() {
    return *this->parent;
}

template<class VALUE>
int RBNode<VALUE>::getKey() {
    return this->key;
}

template<class VALUE>
VALUE RBNode<VALUE>::getData() {
    return this->data;
}

template<class VALUE>
RBNode<VALUE>& RBNode<VALUE>::getLeft() {
    return *this->leftChild;
}

template<class VALUE>
RBNode<VALUE>& RBNode<VALUE>::getRight() {
    return *this->rightChild;
}

template<class VALUE>
void RBNode<VALUE>::setLeft(RBNode<VALUE>* left) {
    this->leftChild = left;
}

template<class VALUE>
void RBNode<VALUE>::setRight(RBNode<VALUE>* right) {
    this->rightChild = right;
}

template <class VALUE>
void RBNode<VALUE>::setParent(RBNode<VALUE> *perent) {
    this->parent = parent;
}
#endif