//#include "Stack.h"
//#include "Queue.h"
//#include "LinkedList.h"
//#include "DoubleLinkedList.h"
#include "BST.h"
#include <iostream>
#include <cassert>
//void stack()
//{
//	Stack<int> s;
//	s.push(10);
//	s.push(20);
//	std::cout << s.pop() << std::endl;
//	std::cout << s.pop() << std::endl;
//}
//void queue()
//{
//	Queue<int> q;
//	q.enqueue(5);
//	q.enqueue(6);
//	q.enqueue(7);
//	std::cout << q.dequeue() << std::endl;
//}
//void linkedlist()
//{
//	LinkedList<int> l;
//	l.addToTail(1);
//	assert(l.tail->value == 1);
//	l.addToHead(4);
//	assert(l.head->value == 4);
//	l.deleteFromHead();
//	assert(l.head->value == 1);
//	l.deleteFromTail();
//	assert(l.tail == nullptr);
//}
//void doublelinkedlist() 
//{
//	DoubleLinkedList<int> d;
//	d.addToTail(5);
//	d.addToTail(6);
//	d.addToHead(4);
//	assert(d.deleteFromHead() == 4);
//}
void main()
{
	BST<int> t;
	t.add(4);
	t.add(5);
	t.add(3);
	t.add(6);
	t.print();
	system("pause");
}
