#include "Iterator.h"
using namespace std;

Iterator::Iterator(int* pointer)
{
	_pointer = pointer;
}

Iterator::Iterator(Iterator& iterator)
{
	_pointer = iterator._pointer;
}

bool Iterator::operator==(Iterator& secondOperand)
{
	return _pointer == secondOperand._pointer;
}

bool Iterator::operator!=(Iterator& secondOperand)
{
	return _pointer != secondOperand._pointer;
}

void Iterator::operator++()
{
	_pointer++;
}

void Iterator::operator+(int n)
{
	for (int i = 0; i < n; i++)
		_pointer++;
}

void Iterator::operator--()
{
	_pointer--;
}

void Iterator::operator-(int n)
{
	for (int i = 0; i < n; i++)
		_pointer--;
}

int& Iterator::operator*()
{
	return *_pointer;
}