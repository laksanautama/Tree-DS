#include<iostream>
using namespace std;

typedef struct Node{
    int value;
    Node* left;
    Node* right;
} Node;

Node* createNode(int value){
    Node* newnode = new Node;
    newnode->value = value;
    newnode->left = nullptr;
    newnode->right = nullptr;
    return newnode;

}

Node* insertNode(Node* root, int value){
    if(root == nullptr){
        root = createNode(value);
    }else if(value < root->value){
        root->left = insertNode(root->left, value);
    }else if(value > root->value){
        root->right = insertNode(root->right, value);
    }
    return root;
}

void printTree(Node* root){
    if(root != nullptr){
        printTree(root->left);
        cout<<root->value<<" ";
        printTree(root->right);
    }
}

int main(){

    Node* root = nullptr;
    root =  insertNode(root, 5);
    insertNode(root, 3);
    insertNode(root, 7);
    insertNode(root, 2);
    insertNode(root, 4);
    insertNode(root, 6);
    insertNode(root, 8);

    cout<<"Struktur Tree: "<<endl;
    printTree(root);

    return 0;

}
