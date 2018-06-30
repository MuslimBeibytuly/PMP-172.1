#include <iostream>

namespace type {
	class A
	{
	public:
		A() {}
		virtual ~A() {}
	};
	class B : public A
	{

	};
}

template <typename T>
int operate(const int & a, const int & b, T operation) {
	return operation(a, b);
}

int main()
{
	type::A *a;
	type::B *b;
	auto sum = [](int a, int b) { return a + b; };
	std::cout << operate(1, 2, sum) << std::endl;
	std::cout << typeid(sum).name() << std::endl;
	std::cout << typeid(b).before(typeid(a)) << std::endl;
	std::cout << typeid(a).before(typeid(b)) << std::endl;
	int x = 5;
	type::B * c = static_cast<type::B *>(a);
	type::B * c = dynamic_cast<type::B *>(a);
	a = reinterpret_cast<type::A *>(x);
	const int n = 5;
	const int *m = &n;
	int g = 6;
	m = const_cast<int *>(&g);

	system("pause");
	return 0;
}