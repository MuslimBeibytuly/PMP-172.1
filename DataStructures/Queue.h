#pragma once
#include "Element.h"
template <class T>
class Queue
{
	Element<T> *head, *tail;
public:
	void enqueue(const T &);
	T & dequeue();
	Queue();
	~Queue();
};

template<class T>
inline void Queue<T>::enqueue(const T & t)
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
inline T & Queue<T>::dequeue()
{
	T value = head->value;
	if (head != nullptr)
	{
		head = head->next;
	}
	return value;
}

template<class T>
inline Queue<T>::Queue()
{
	head = tail = nullptr;
}

template<class T>
inline Queue<T>::~Queue()
{
	if (head != nullptr) 
	{
		delete head;
	}
}