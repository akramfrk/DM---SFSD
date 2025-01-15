#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* findSibling(Node* root, Node* target) {
    if (root == NULL || target == NULL) {
        return NULL;
    }
    
    if (root->left == target) {
        return root->right;
    }
    if (root->right == target) {
        return root->left;
    }
    
    Node* leftResult = findSibling(root->left, target);
    if (leftResult != NULL) {
        return leftResult;
    }
    return findSibling(root->right, target);
}
