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
	Type average();
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
inline Type DynamicArray<Type>::average()
{
	Type sum = 0;
	for (size_t pos = 0; pos < size; ++pos) {
		sum += data[pos];
	}
	return (sum / size);
}

template<>
inline char DynamicArray<char>::average()
{
	int sum = 0;
	for (size_t pos = 0; pos < size; ++pos) 
	{
		sum += data[pos];
	}
	return (char)(sum / size);
}

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
