#pragma once
#include <iostream>
#include <algorithm>
#include "Observable.h"
class Newspaper :
	public Observable
{
public:
	std::vector<Observer *> observers;
	void addObserver(Observer *) override final;
	void removeObserver(Observer *) override final;
	void notifyObservers() override;
	Newspaper();
	~Newspaper();
};

