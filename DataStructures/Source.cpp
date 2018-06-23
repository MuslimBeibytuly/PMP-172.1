#include "Stack.h"
//#include "Queue.h"
//#include "LinkedList.h"
//#include "DoubleLinkedList.h"
#include "BST.h"
#include "SomeStructure.h"
#include <set>
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
//void bst() 
//{
//	BST<int> t;
//	t.add(4);
//	t.add(5);
//	t.add(3);
//	t.add(6);
//	t.print();
//	std::cout << t.search(6) << std::endl;
//	assert(t.search(6) == 3);
//	assert(t.search(0) == 0);
//	t.remove(5);
//	t.print();
//}
void stack()
{
	Stack<int> s;
	try 
	{
		s.pop();
	}
	catch (const std::underflow_error & e) 
	{
		assert(std::string(e.what()) == std::string("stack is empty"));
	}
	try 
	{
		s.push(1);
		s.push(1);
		s.push(1);
		s.push(1);
		s.push(1);
	}
	catch (const std::exception & e)
	{
		assert(std::string(e.what()) == std::string("StackOverflowException"));
	}
}
void main()
{
	stack();
	std::cout << std::endl;
	system("pause");
}
