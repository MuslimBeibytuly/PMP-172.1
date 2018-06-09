#pragma once
template <class T>
class Node
{
public:
	T value;
	Node<T> *left, *right, *parent;
	Node();
	Node(const T &);
	~Node();
};

template<class T>
inline Node<T>::Node()
{
	left = right = parent = nullptr;
}

template<class T>
inline Node<T>::Node(const T & value) : value(value)
{
	left = right = parent = nullptr;
}

template<class T>
inline Node<T>::~Node()
{
}
