#pragma once
template <class T>
class ExtraElement
{
public:
	T value;
	ExtraElement<T> *next, *prev;
	ExtraElement();
	ExtraElement(const T &);
	~ExtraElement();
};

template<class T>
inline ExtraElement<T>::ExtraElement()
{
	next = prev = nullptr;
}

template<class T>
inline ExtraElement<T>::ExtraElement(const T & value): value(value)
{
	next = prev = nullptr;
}

template<class T>
inline ExtraElement<T>::~ExtraElement()
{
	if (next != nullptr) 
	{
		delete next;
	}
	if (prev != nullptr) 
	{
		delete prev;
	}
}
