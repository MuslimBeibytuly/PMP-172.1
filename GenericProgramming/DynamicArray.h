#pragma once
#include <utility>
#include <ostream>
template <typename Type>
class DynamicArray
{
public:
	Type *data;
	size_t size;
	void operator +=(const Type &);
	Type average(size_t position = 0, Type sum = 0);
	/*char average(size_t position = 0, int sum = 0);*/
	DynamicArray();
	~DynamicArray();
	friend std::ostream & operator<<(std::ostream & stream, const DynamicArray<Type> & dynamicArray)
	{
		for (size_t i = 0; i < dynamicArray.size; ++i)
		{
			stream << dynamicArray.data[i] << ' ';
		}
		return stream;
	}
};

template<typename Type>
inline void DynamicArray<Type>::operator+=(const Type & value)
{
	++size;
	if (data == nullptr) 
	{
		data = new Type[size];
	}
	else 
	{
		data = (Type *)realloc(data, size * sizeof(Type));
	}
	data[size - 1] = value;
}

template<typename Type>
inline Type DynamicArray<Type>::average(size_t position = 0, Type sum = 0)
{
	if (position < size) 
	{
		return average(position + 1, sum + data[position]);
	}
	return (sum / size);
}

//template<typename Type>
//inline char DynamicArray<Type>::average(size_t position = 0, int sum = 0)
//{
//	if (position < size)
//	{
//		return average(position + 1, sum + data[position]);
//	}
//	return (char)(sum / size);
//}

template<typename Type>
inline DynamicArray<Type>::DynamicArray()
{
	data = nullptr;
	size = 0;
}

template<typename Type>
inline DynamicArray<Type>::~DynamicArray()
{
	delete[] data;
}
