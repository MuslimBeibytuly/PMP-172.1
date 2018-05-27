#pragma once
template <class T>
class Queue
{
	T *data;
	size_t size;
public:
	void enqueue(const T &);
	T & dequeue();
	Queue();
	~Queue();
};

template<class T>
inline void Queue<T>::enqueue(const T & t)
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
inline T & Queue<T>::dequeue()
{
	T temp = data[0];
	++data, --size;
	return temp;
}

template<class T>
inline Queue<T>::Queue()
{
	size = 0;
	data = nullptr;
}

template<class T>
inline Queue<T>::~Queue()
{
	delete[] data;
}
