#include "Stack.h"
#include "Queue.h"
#include <iostream>
void stack() 
{
	Stack<int> s;
	s.push(10);
	s.push(20);
	std::cout << s.pop() << std::endl;
	std::cout << s.pop() << std::endl;
}
void main() 
{
	Queue<int> q;
	q.enqueue(5);
	q.enqueue(6);
	q.enqueue(7);
	std::cout << q.dequeue() << std::endl;
	system("pause");
}
