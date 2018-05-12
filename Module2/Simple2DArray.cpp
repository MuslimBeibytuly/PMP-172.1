#include "Simple2DArray.h"

Simple2DArray::Simple2DArray(int n, int m)
{
	this->n = n;
	this->m = m;
	a = new int *[n];
	for (int i = 0; i < n; ++i) {
		a[i] = new int[m];
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			a[i][j] =  i + j;
		}
	}
}

Simple2DArray::Simple2DArray(const Simple2DArray & s)
{
	this->n = s.n;
	this->m = s.m;
	this->a = new int *[n];
	for (int i = 0; i < n; ++i) {
		this->a[i] = new int[m];
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			this->a[i][j] = s.a[i][j];
		}
	}
}

Simple2DArray::~Simple2DArray()
{
	for (int i = 0; i < n; ++i) {
		delete[] a[i];
	}
	delete[] a;
}
