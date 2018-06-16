#include "Newspaper.h"



void Newspaper::addObserver(Observer * o)
{
	observers.push_back(o);
}

void Newspaper::removeObserver(Observer * o)
{
	observers.erase(
		std::remove(
			observers.begin(), observers.end(), o
		), 
		observers.end()
	);
}

void Newspaper::notifyObservers()
{
	std::cout << "I've changed" << std::endl;
	for (Observer * observer : observers) 
	{
		observer->handleEvent();
	}
}

Newspaper::Newspaper()
{
}


Newspaper::~Newspaper()
{
}
