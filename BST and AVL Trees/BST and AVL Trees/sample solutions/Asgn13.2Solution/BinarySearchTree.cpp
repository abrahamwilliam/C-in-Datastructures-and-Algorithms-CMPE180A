#include <iostream>
#include <string>
#include "BinarySearchTree.h"

using namespace std;

BinarySearchTree::BinarySearchTree()
    : probe_count(0), compare_count(0), root(nullptr)
{
}

BinarySearchTree::~BinarySearchTree()
{
    clear();
}

BinaryNode *BinarySearchTree::getRoot() const { return root; }

long BinarySearchTree::get_probe_count() const { return probe_count; }
void BinarySearchTree::reset_probe_count() { probe_count = 0; }
long BinarySearchTree::get_compare_count() const { return compare_count; }
void BinarySearchTree::reset_compare_count() { compare_count = 0; }

int BinarySearchTree::height() { return height(root); }

int BinarySearchTree::height(const BinaryNode *ptr)
{
    if (ptr != nullptr)
    {
        probe_count += 2;
        return 1 + max(height(ptr->left), height(ptr->right));
    }
    else
    {
        return -1;
    }
}

long BinarySearchTree::findMin() throw(string)
{
    if (isEmpty()) throw(string("Empty tree"));
    probe_count++;
    return findMin(root)->data;
}

BinaryNode *BinarySearchTree::findMin(BinaryNode *ptr)
{
    if (ptr != nullptr)
    {
        while(ptr->left != nullptr)
        {
            probe_count += 2;
            ptr = ptr->left;
        }
        probe_count++;
    }

    return ptr;
}

long BinarySearchTree::findMax() throw(string)
{
    if (isEmpty()) throw(string("Empty tree"));
    probe_count++;
    return findMax(root)->data;
}

BinaryNode *BinarySearchTree::findMax(BinaryNode *ptr)
{
    if (ptr != nullptr)
    {
        while(ptr->right != nullptr)
        {
            probe_count += 2;
            ptr = ptr->right;
        }
        probe_count++;
    }

    return ptr;
}

void BinarySearchTree::clear()
{
    clear(root);
}

void BinarySearchTree::clear(BinaryNode* &ptr)
{
    if (ptr != nullptr)
    {
        probe_count += 2;

        clear(ptr->left);
        clear(ptr->right);
        delete ptr;
        ptr = nullptr;
    }
}

bool BinarySearchTree::isEmpty() const
{
    return root == nullptr;
}

bool BinarySearchTree::contains(const long data)
{
    return contains(data, root);
}

bool BinarySearchTree::contains(const long data, BinaryNode *ptr)
{
    while (ptr != nullptr)
    {
        if (data < ptr->data)
        {
            probe_count += 2;
            compare_count++;

            ptr = ptr->left;
        }
        else if (data > ptr->data)
        {
            probe_count += 2;
            compare_count++;

            ptr = ptr->right;
        }
        else
        {
            probe_count += 2;
            compare_count += 2;
            return true;  // found
        }
    }

    return false;         // not found
}

void BinarySearchTree::insert(const long data)
{
    insert(data, root);
}

void BinarySearchTree::insert(const long data, BinaryNode* &ptr)
{
    if (ptr == nullptr)
    {
        ptr = new BinaryNode(data);
    }
    else if (data < ptr->data)
    {
        probe_count += 2;
        compare_count++;

        insert(data, ptr->left);
    }
    else if (data > ptr->data)
    {
        probe_count += 2;
        compare_count++;

        insert(data, ptr->right);
    }
    else
    {
        probe_count += 2;
        compare_count += 2;
    }
}

void BinarySearchTree::remove(const long data)
{
    remove(data, root);
}

void BinarySearchTree::remove(const long data, BinaryNode* &ptr)
{
    if (ptr == nullptr) return;   // not found, so do nothing

    // First search for the target node to remove.
    if (data < ptr->data)
    {
        probe_count += 2;
        compare_count++;

        remove(data, ptr->left);
    }
    else if (data > ptr->data)
    {
        probe_count += 2;
        compare_count++;

        remove(data, ptr->right);
    }

    // Remove a target node with two children.
    else if (   (ptr->left  != nullptr)
             && (ptr->right != nullptr))
    {
        probe_count += 8;
        compare_count += 2;

        // Replace the target node's data with the successor node's data.
        ptr->data = findMin(ptr->right)->data;

        // Search for and remove the successor node.
        remove(ptr->data, ptr->right);
    }

    // Remove a target node with one or no children.
    else
    {
        probe_count += 6;
        compare_count += 2;

        BinaryNode *oldNode = ptr;
        ptr = (ptr->left != nullptr) ? ptr->left
                                     : ptr->right;
        delete oldNode;
    }
}
