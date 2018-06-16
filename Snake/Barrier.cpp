#include "Barrier.h"

Barrier::Barrier()
{
	sign = '#';
	for (short i = 0; i <= 20; ++i) {
		body.push_back({ i, (short)1 });
		body.push_back({ (short)1, i });
		body.push_back({ i, (short)20 });
		body.push_back({ (short)20, i });
	}
}

Barrier::~Barrier()
{
}