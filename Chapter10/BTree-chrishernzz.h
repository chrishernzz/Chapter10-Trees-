#pragma once
#include<iostream>
using namespace std;

//input (1) header files inputs validation
char inputChar(string prompt, string lookup);
int inputInteger(string prompt);

//precondition: going to create a template that can have an int
//postcondition: going to then have 4 privates and they are left and right child, the root, and the data and then have member functions in the public
template<typename T >
class BTree {
private:
	//the type of nodes are going to be integers using a template containers
	T data;
	//will keep track of the left child
	BTree* left;
	//will keep track of the right child 
	BTree* right;
	//will keep track of the nodes
	BTree* root;
public:
	//default constructor
	BTree();
	//constructor to be able to input the values (nodes)
	BTree(int newData);

	//check if there are root or nodes
	bool empty() const;

	//member functions to insert, count, search, preorder, inorder, and postorder traversal, and delete 
	void insert(BTree*& node, T value);
	void count(BTree* node, T& count);
	bool search(BTree* node, T value);
	void preorderTraversal(const BTree* node);
	void inorderTraversal(const BTree* node);
	void postorderTraversal(const BTree* node);
	void deleteEntireTree(BTree* node);

	//member function main menu
	void mainInformation();
};