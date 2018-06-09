#pragma once
template <class T>
class Element
{
public:
	T value;
	Element<T> *next;
	Element();
	Element(const T &);
	~Element();
};

template<class T>
inline Element<T>::Element()
{
	next = nullptr;
}

template<class T>
inline Element<T>::Element(const T & value) : value(value)
{
	next = nullptr;
}

template<class T>
inline Element<T>::~Element()
{
	if (next != nullptr) 
	{
		delete next;
	}
}
