class A 
{
public:
	class B 
	{
	public:
		class C 
		{
		};
	};
};
void sample() 
{
	A a;
	A::B b;
	A::B::C c;
}

void main() 
{
}