#pragma once
#include "Node.h"
#include <iostream>
template <class T>
class BST
{
private:
	void addToExistingTree(const T &, Node<T> *);
	void printExistingTree(Node<T> *);
public:
	Node<T> *root;
	void add(const T &);
	void print();
	BST();
	~BST();
};

template<class T>
inline void BST<T>::add(const T & value)
{
	if (root == nullptr)
	{
		root = new Node<T>(value);
	}
	else 
	{
		addToExistingTree(value, root);
	}
}

template<class T>
inline void BST<T>::print()
{
	printExistingTree(root);
}

template<class T>
inline void BST<T>::printExistingTree(Node<T> *root)
{
	if (root != nullptr)
	{
		std::cout << root->value << std::endl;
		if (root->left != nullptr)
		{
			printExistingTree(root->left);
		}
		if (root->right != nullptr)
		{
			printExistingTree(root->right);
		}
	}
}

template<class T>
inline void BST<T>::addToExistingTree(const T & value, Node<T> *root)
{
	if (root->value < value)
	{
		if (root->right == nullptr)
		{
			root->right = new Node<T>(value);
		}
		else
		{
			addToExistingTree(value, root->right);
		}
	}
	else 
	{
		if (root->left == nullptr)
		{
			root->left = new Node<T>(value);
		}
		else
		{
			addToExistingTree(value, root->left);
		}
	}
}

template<class T>
inline BST<T>::BST()
{
	root = nullptr;
}

template<class T>
inline BST<T>::~BST()
{
}
