#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node *left;
Node *right;

	Node(int data)
	{
		this->data = data;
		this->left = this->right = nullptr;
	}
};

void postorder(Node* root){
    if (root==NULL)
        return;
postorder(root->left);
postorder(root->right);
cout<<root->data;
}

int main()
{

	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->right->left = new Node(5);
	root->right->right = new Node(6);
	root->right->left->left = new Node(7);
	root->right->left->right = new Node(8);

	postorder(root);
    return 0;
}
