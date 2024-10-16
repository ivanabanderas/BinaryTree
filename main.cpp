#include <iostream>

#include "BinaryTree.h"

int main()
{

    BinaryTree tree;

    tree.root = tree.insert(tree.root, 50);
    tree.root = tree.insert(tree.root, 30);
    tree.root = tree.insert(tree.root, 70);

    int valueToSearch = 50;
    Node* result = tree.search(tree.root, valueToSearch);
    cout << result->data;

    return 0;
}