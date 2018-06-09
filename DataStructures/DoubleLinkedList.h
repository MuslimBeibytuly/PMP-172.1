#pragma once
#include "ExtraElement.h"
template <class T>
class DoubleLinkedList
{
public:
	ExtraElement<T> *head, *tail;
	void addToTail(const T &);
	void addToHead(const T &);
	T & deleteFromHead();
	T & deleteFromTail();
	DoubleLinkedList();
	~DoubleLinkedList();
};

template<class T>
inline void DoubleLinkedList<T>::addToTail(const T & t)
{
	if (head == nullptr)
	{
		head = tail = new ExtraElement<T>(t);
		tail->prev = head;
		head->next = tail;
	}
	else
	{
		ExtraElement<T> *temp = new ExtraElement<T>(t);
		tail->next = temp;
		temp->prev = tail;
		tail = tail->next;
	}
}

template<class T>
inline void DoubleLinkedList<T>::addToHead(const T & t)
{
	ExtraElement<T> *temp = new ExtraElement<T>(t);
	temp->next = head;
	head->prev = temp;
	head = head->prev;
}

template<class T>
inline T & DoubleLinkedList<T>::deleteFromHead()
{
	T temp = head->value;
	head = head->next;
	head->prev->next = nullptr;
	delete head->prev;
	head->prev = nullptr;
	return temp;
}

template<class T>
inline T & DoubleLinkedList<T>::deleteFromTail()
{
	T temp = tail->value;
	tail = tail->prev;
	tail->next->prev = nullptr;
	delete tail->next;
	tail->next = nullptr;
	return temp;
}

template<class T>
inline DoubleLinkedList<T>::DoubleLinkedList()
{
	head = tail = nullptr;
}

template<class T>
inline DoubleLinkedList<T>::~DoubleLinkedList()
{
	if (head != nullptr)
	{
		delete head;
	}
	if (tail != nullptr)
	{
		delete tail;
	}
}
