#include <bits/stdc++.h>
#include <iostream>
#include "TreeNode.h"

using namespace std;

int main() {
    string expression = "     ( ( (a*b) + (c*d) ) - f)";
    int pos = 0;
    while (expression[pos] != '(') {
        pos++;
    }
    auto* root = new TreeNode(expression[pos]);
    stack<TreeNode*> st;
    auto* nodo_actual = root;
    st.push(nodo_actual);
    for (int i = pos + 1; i < expression.size(); ++i) {
        if (expression[i] == '(') {
            auto* nuevo_nodo = new TreeNode('X');
            if (!nodo_actual->left) {
                nodo_actual->left = nuevo_nodo;
            } else {
                nodo_actual->right = nuevo_nodo;
            }
            nodo_actual = nuevo_nodo;
            st.push(nodo_actual);
        }
        if (isalpha(expression[i])) {
            auto* nuevo_nodo = new TreeNode(expression[i]);
            if(!nodo_actual->left) {
                nodo_actual->left = nuevo_nodo;
            } else {
                nodo_actual->right = nuevo_nodo;
            }
        }
        if (isoperator(expression[i])) {
            nodo_actual = st.top();
            st.pop();
            nodo_actual->val = expression[i];
        }
        if (expression[i] == ' ' || expression[i] == ')') {
            continue;
        }
    }

    cout << "Pre-Order Traversal: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "In-Order Traversal: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Post-Order Traversal: ";
    postOrderTraversal(root);
    cout << endl;

    cout << "Breadth First Traversal: ";
    breadthFirstTraversal(root);
    cout << endl;

    return 0;
}