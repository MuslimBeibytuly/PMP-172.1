#include <iostream>
#include <string>
bool isUnique(const std::string & text)
{
	bool ascii[256];
	for (int i = 0; i < 256; ++i)
	{
		ascii[i] = false;
	}
	for (auto & symbol : text)
	{
		if (!ascii[symbol])
		{
			ascii[symbol] = true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

std::string reverse(const std::string & text)
{
	if (text.length() > 1)
		return text[text.length() - 1] + reverse(text.substr(0, text.length() - 1));
	else
		return text;
}

int main()
{
	std::cout << reverse("abcde");
	system("pause");
}