#include <iostream>
#include <string>
#include <thread>
#include <climits>

class DivisionByZeroException
	: public std::exception
{
public:
	char const* what() const override final
	{
		return "Division by zero";
	}
};

int divide(const int & i, const int & j) {
	if (j == 0)
	{
		throw DivisionByZeroException();
	}
	return i / j;
}
int parseInt(std::string number)
{
	int res = 0, radix = 1;
	std::reverse(number.begin(), number.end());
	for (auto & c : number)
	{
		if (47 >= (int)c || 58 <= (int)c) {
			throw std::exception("TypeError");
		}
		res += (int)(c - 48) * radix;
		radix *= 10;
	}
	return res;
}
void hello()
{
	for (int i = 0; i < 10000; ++i)
	{
		std::cout << "hello" << std::endl;
	}
}
void world()
{
	for (int i = 0; i < 10000; ++i)
	{
		std::cout << "world" << std::endl;
	}
}

template <typename T1, typename T2>
bool compare(T1 a, T2 b) 
{

}

void main()
{
	auto func1 = std::thread(hello);
	func1.detach();
	auto func2 = std::thread(world);
	func2.detach();
	/*try
	{
		std::cout << parseInt("hello");
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}*/
	system("pause");
}

//"123567342"