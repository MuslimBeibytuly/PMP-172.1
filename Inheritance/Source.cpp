#include <iostream>
#include "Newspaper.h"
#include "Reader.h"
int main()
{
	Observable * observable = new Newspaper();
	Observer * observer1 = new Reader();
	Observer * observer2 = new Reader();
	observable->addObserver(observer1);
	observable->addObserver(observer2);
	observable->notifyObservers();

	observable->removeObserver(observer1);
	observable->notifyObservers();

	delete observable;
	delete observer1;
	delete observer2;
	system("pause");
	return 0;
}
