#include <memory>
#include <cassert>
#include <iostream>
#include <vector>
#include <algorithm>

namespace my {
	template <typename T>
	class auto_ptr {
		T *data;
	public:
		auto_ptr(T *data) {
			this->data = data;
		}
		~auto_ptr() {
			delete data;
		}
	};
}
class Comparer
{
public:
	bool operator ()(const int & a, const int & b) {
		return a > b;
	}
};

int main()
{
	//std::unique_ptr<int> a(new int(6));//const pointer without =, & and etc.
	//std::auto_ptr<int> x(new int(5));//move constructor on assignment
	//std::auto_ptr<int> y = x;
	//std::shared_ptr<int> b(new int(7));//counter on use, delete when counter = 0
	//assert(x.get() == nullptr);
	//std::cout << *y;
	std::vector<int> c = { 1, 2, 3, 4, 7, 2, 4, 67 };
	auto compare = [](const int & a, const int & b) {
		return a > b;
	};
	std::sort(c.begin(), c.end(), Comparer());
	int x;
	std::cin >> x;
	std::remove_if(c.begin(), c.end(), [x](int a) {
		return a == x;
	});
	for (auto & i : c) {
		std::cout << i << std::endl;
	}
	system("pause");
	return 0;
}