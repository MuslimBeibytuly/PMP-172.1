#include "LinkedList.h"

std::ostream & operator<<(std::ostream & os, LinkedList<int>& list)
{
	for (Element<int> *it = list.head; it != nullptr; it = it->next)
	{
		os << it->value << ' ';
	}
	return os;
}
