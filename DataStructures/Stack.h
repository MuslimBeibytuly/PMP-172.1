#pragma once
template <class T>
class Stack
{
	T *data;
	size_t size;
public:
	void push(const T &);
	T & pop();
	Stack();
	~Stack();
};

template<class T>
void Stack<T>::push(const T & t)
{
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

template<class T>
T & Stack<T>::pop()
{
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
