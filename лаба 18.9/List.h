#pragma once
#include "Iterator.h"
#include <ostream>
using namespace std;

class List
{
	friend class Iterator;
	friend ostream& operator<<(ostream& stream, List& list);

private:
	Iterator _begin, _current, _end;
	int* _arr;
	int _size;

public:
	List(int size = 0);

	List(const List& list);

	~List();

	Iterator Begin();

	Iterator End();

	int Size();

	void Insert(int& element, int position);

	void Erase(int position);

	int operator[](int ind);

	List operator*(List& secondOperand);
};