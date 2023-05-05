//
// Created by DARKOLARASLOWED on 25/04/2023.
//

#ifndef PROGRAMA2_TREENODE_H
#define PROGRAMA2_TREENODE_H

#include <bits/stdc++.h>
#include <iostream>


using namespace std;

class TreeNode {
public:
    char val;
    TreeNode* left;
    TreeNode* right;
    explicit TreeNode(char x) : val(x), left(nullptr), right(nullptr) {}
};

int isoperator(char);

void preOrderTraversal(TreeNode*);

void inOrderTraversal(TreeNode*);

void postOrderTraversal(TreeNode*);

void breadthFirstTraversal(TreeNode*);

#endif //PROGRAMA2_TREENODE_H
