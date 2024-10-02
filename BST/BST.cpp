#include "BST.h"
#include <iostream>      

void BST::destroy(Node *&node) {

}// ~BST
void BST::dup(Node *node) {

} // BST(const BST &bst)

bool BST::insert(Node *&node, int val) {
    // if node == nullptr, node = new node, return true.
    if(node == nullptr) {
        node = new Node(val);
        return true;
    }
    // if val < node, return insert(left, val);
    if (val < node->data) {
        return insert(node->left, val);
    }
    // if val > node, return insert(right, val);
    if (val > node->data) {
        return insert(node->right, val);
    }

    return false;
}

bool BST::remove(Node *&node, int val) {
    return true;
}

bool BST::search(Node *node, int val) {
    return true;
}

void BST::inorder(Node *node, std::ostream &os) {
    if (node == nullptr) {
        return;
    }

    inorder(node->left, os);
    os << node->data << " ";
    inorder(node->right, os);
}

void BST::preorder(Node *node, std::ostream &os) {

}

void BST::postorder(Node *node, std::ostream &os) {
    if (node == nullptr) {
        return;
    }

    postorder(node->left, os);  // L
    postorder(node->right, os); // R
    os << node->data << " ";    // N
}