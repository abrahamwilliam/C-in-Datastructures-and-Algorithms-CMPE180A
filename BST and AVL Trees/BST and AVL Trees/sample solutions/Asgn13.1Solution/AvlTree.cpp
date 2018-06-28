#include <iostream>
#include "AvlTree.h"

using namespace std;

AvlTree::AvlTree()
    : BinarySearchTree()
{
}

AvlTree::~AvlTree()
{
}

int AvlTree::height(const BinaryNode *ptr) const
{
    return ptr == nullptr ? -1 : ptr->height;
}

void AvlTree::insert(const long data, BinaryNode* &ptr)
{
    BinarySearchTree::insert(data, ptr);
    rebalance(ptr);
}

void AvlTree::remove(const long data, BinaryNode* &ptr)
{
    BinarySearchTree::remove(data, ptr);
    rebalance(ptr);
}

BinaryNode *AvlTree::rebalance(BinaryNode* &ptr)
{
    if (ptr == nullptr) return ptr;
  
    if (height(ptr->left) - height(ptr->right) > 1)
    {
        if (height(ptr->left->left) >= height(ptr->left->right))
        {
            ptr = singleRightRotation(ptr);
            cout << "    --- Single right rotation at node "
                 << ptr->data << endl;
        }
        else
        {
            ptr = doubleLeftRightRotation(ptr);
            cout << "    --- Double left-right rotation at node "
                 << ptr->data << endl;
        }
    }

    // Right side too high.
    else if (height(ptr->right) - height(ptr->left) > 1)
    {
        if (height(ptr->right->right) >= height(ptr->right->left))
        {
            ptr = singleLeftRotation(ptr);
            cout << "    --- Single left rotation at node "
                 << ptr->data << endl;
        }
        else
        {
            ptr = doubleRightLeftRotation(ptr);
            cout << "    --- Double right-left rotation at node "
                 << ptr->data << endl;
        }
    }

    // Recompute the node's height.
    ptr->height = (max(height(ptr->left),
                       height(ptr->right)) + 1);

    if (checkBalance(ptr) < 0)
    {
        cout << endl << "***** Tree unbalanced!" << endl;
    }

    return ptr;
}

BinaryNode *AvlTree::singleRightRotation(BinaryNode *k2)
{
    BinaryNode *k = k2->left;

    k2->left = k->right;
    k->right = k2;

    k2->height = (max(height(k2->left), height(k2->right)) + 1);
    k->height = (max(height(k->left), k2->height) + 1);

    return k1;
}

BinaryNode *AvlTree::doubleLeftRightRotation(BinaryNode *k3)
{
    k3->left = singleLeftRotation(k3->left);
    return singleRightRotation(k3);
}

BinaryNode *AvlTree::doubleRightLeftRotation(BinaryNode *k1)
{
    k1->right = singleRightRotation(k1->right);
    return singleLeftRotation(k1);
}

https://stackoverflow.com/questions/4083702/posting-a-file-and-associated-data-to-a-restful-webservice-preferably-as-json

BinaryNode *AvlTree::singleLeftRotation(BinaryNode *k1)
{
    BinaryNode *k2 = k1->right;

    // Rotate.
    k1->right = k2->left;
    k2->left  = k1;

    // Recompute node heights.
    k1->height = (max(height(k1->left), height(k1->right)) + 1);
    k2->height = (max(height(k2->right), k1->height) + 1);

    return k2;
}

int AvlTree::checkBalance(BinaryNode *ptr)
{
    if (ptr == nullptr) return -1;

    int leftHeight  = checkBalance(ptr->left);
    int rightHeight = checkBalance(ptr->right);

    if ((abs(height(ptr->left) - height(ptr->right)) > 1)
        || (height(ptr->left)  != leftHeight)
        || (height(ptr->right) != rightHeight))
    {
        return -2;       // unbalanced
    }

    return height(ptr);  // balanced
}
