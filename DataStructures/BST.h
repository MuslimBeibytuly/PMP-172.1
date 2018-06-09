#pragma once
#include "Node.h"
#include <iostream>
template <class T>
class BST
{
private:
	void addToExistingTree(const T &, Node<T> *);
	void printExistingTree(Node<T> *);
	size_t searchInExistingTree(const T &, Node<T> *, size_t);
	void removeFromExistingTree(const T &, Node<T> *);
public:
	Node<T> *root;
	void add(const T &);
	size_t search(const T &);
	void print();
	void remove(const T &);
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
inline void BST<T>::addToExistingTree(const T & value, Node<T> *root)
{
	if (root->value < value)
	{
		if (root->right == nullptr)
		{
			root->right = new Node<T>(value);
			root->right->parent = root;
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
			root->left->parent = root;
		}
		else
		{
			addToExistingTree(value, root->left);
		}
	}
}

template<class T>
inline size_t BST<T>::search(const T & value)
{
	if (root != nullptr) 
	{
		return searchInExistingTree(value, root, 0);
	}
}

template<class T>
inline size_t BST<T>::searchInExistingTree(const T & value, Node<T>* root, size_t cnt)
{
	++cnt;
	if (root->value == value)
	{
		return cnt;
	}
	else
	{
		if (root->value > value) {
			if (root->left != nullptr)
			{
				return searchInExistingTree(value, root->left, cnt);
			}
		}
		else
		{
			if (root->right != nullptr)
			{
				return searchInExistingTree(value, root->right, cnt);
			}
		}
		return 0;
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
inline void BST<T>::remove(const T & value)
{
	if (root != nullptr) 
	{
		removeFromExistingTree(value, root);
	}
}

template<class T>
inline void BST<T>::removeFromExistingTree(const T & value, Node<T>* root)
{
	if (root->value == value)
	{
		root->parent->right = root->right;
		Node<T> *temp = root;
		while (temp->left != nullptr) 
		{
			temp = temp->left;
		}
		temp->left = root->left;
	}
	else 
	{
		if (root->value < value) 
		{
			if (root->right != nullptr) 
			{
				removeFromExistingTree(value, root->right);
			}
		}
		else 
		{
			if (root->left != nullptr)
			{
				removeFromExistingTree(value, root->left);
			}
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
