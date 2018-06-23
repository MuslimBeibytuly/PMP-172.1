#pragma once
template <class T>
class Stack
{
	T *data;
	size_t size, capacity = 3;
public:
	void push(const T &);
	T & pop();
	Stack();
	~Stack();
};

template<class T>
void Stack<T>::push(const T & t)
{
	try 
	{
		if (3 <= size) 
		{
			throw std::exception("StackOverflowException");
		}
		++size;
		if (data == nullptr)
		{
			data = (T *)malloc(size * sizeof(T));
		}
		else
		{
			data = (T *)realloc(data, size * sizeof(T));
		}
		data[size - 1] = t;
	}
	catch (const std::bad_alloc & e) {
		std::cout << "can not allocate more memory" << std::endl;
	}
}

template<class T>
T & Stack<T>::pop()
{
	if (size <= 0) 
	{
		throw std::underflow_error("stack is empty");
	}
	T temp = data[size - 1];
	data = (T *)realloc(data, --size * sizeof(T));
	return temp;
}

template<class T>
Stack<T>::Stack()
{
	size = 0;
	data = nullptr;
}

template<class T>
Stack<T>::~Stack()
{
	delete[] data;
}
