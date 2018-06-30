#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/date_time/local_time_adjustor.hpp>
#include <boost/date_time/c_local_time_adjustor.hpp>
#include <ctime>

namespace my {
	namespace space {
		double pow(double a, double b)
		{
			double res = 1;
			for (size_t i = 0; i < b; i++)
			{
				res *= a;
			}
			return a;
		}
	}
}

class A 
{
	virtual void X() = 0;
	virtual ~A() {}
};

int main() 
{
	using std::cout;
	using boost::posix_time::ptime;
	using boost::gregorian::day_clock;
	using boost::posix_time::second_clock;
	using boost::posix_time::to_simple_string;
	ptime todayUtc(
		day_clock::universal_day(), 
		second_clock::local_time().time_of_day()
	);
	cout << to_simple_string(todayUtc) << std::endl;
	system("pause");
	my::space::pow(1, 2);
	return 0;
}
