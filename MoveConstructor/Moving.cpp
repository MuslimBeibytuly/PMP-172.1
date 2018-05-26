#include "Moving.h"



Moving::Moving(Moving & m)
{
	s = std::move(m.s);
}

Moving::Moving()
{
}


Moving::~Moving()
{
}
