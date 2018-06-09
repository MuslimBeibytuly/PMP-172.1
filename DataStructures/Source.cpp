#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"
#include <iostream>
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
void main()
{
	LinkedList<int> l;
	l.addToTail(1);
	l.addToTail(2);
	l.addToTail(3);
	std::cout << l << std::endl;
	l.addToHead(4);
	std::cout << l << std::endl;
	l.deleteFromHead();
	std::cout << l << std::endl;
	l.deleteFromTail();
	std::cout << l << std::endl;
	system("pause");
}
