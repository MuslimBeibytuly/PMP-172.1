#pragma once
template <class T>
class Node
{
public:
	T value;
	Node<T> *left, *right;
	Node();
	Node(const T &);
	~Node();
};

template<class T>
inline Node<T>::Node()
{
	left = right = nullptr;
}

template<class T>
inline Node<T>::Node(const T & value) : value(value)
{
	left = right = nullptr;
}

template<class T>
inline Node<T>::~Node()
{
}
