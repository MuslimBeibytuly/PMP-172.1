#pragma once
#include "Element.h"
#include <ostream>
template <class T>
class LinkedList
{
public:
	Element<T> *head, *tail;
	LinkedList();
	~LinkedList();
	void addToTail(const T &);
	void addToHead(const T &);
	T & deleteFromHead();
	T & deleteFromTail();
	friend std::ostream & operator<<(std::ostream &, LinkedList<int> &);
};

template<class T>
inline LinkedList<T>::LinkedList()
{
	head = tail = nullptr;
}

template<class T>
inline LinkedList<T>::~LinkedList()
{
	if (head != nullptr)
	{
		delete head;
	}
}

template<class T>
inline void LinkedList<T>::addToTail(const T & t)
{
	if (tail == nullptr)
	{
		head = tail = new Element<T>(t);
	}
	else
	{
		tail->next = new Element<T>(t);
		tail = tail->next;
	}
}

template<class T>
inline void LinkedList<T>::addToHead(const T & t)
{
	Element<T> *temp = new Element<T>(t);
	temp->next = head;
	head = temp;
}

template<class T>
inline T & LinkedList<T>::deleteFromHead()
{
	T value = head->value;
	if (head != nullptr)
	{
		head = head->next;
	}
	return value;
}

template<class T>
inline T & LinkedList<T>::deleteFromTail()
{
	T temp = tail->value;
	Element<T> *it = head;
	for (; it->next != tail; it = it->next)
	{
	}
	delete it->next;
	it->next = nullptr;
	tail = it;
	return temp;
}
