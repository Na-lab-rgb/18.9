#include <iostream>
#include "List.h"
using namespace std;

List::List(int size)
{
	if (size < 0) throw "Incorrect size";
	_size = size;
	_arr = new int[_size];
	for (int i = 0; i < _size; i++)
		_arr[i] = rand() % 100;
	_begin._pointer = _size > 0 ? &_arr[0] : nullptr;
	_current._pointer = _begin._pointer;
	_end._pointer = _size > 0 ? &_arr[_size] : nullptr;
}

List::List(const List& list)
{
	if (_arr != nullptr) delete _arr;
	_size = list._size;
	_arr = list._arr;
	_begin = list._begin;
	_current = list._current;
	_end = list._end;
}

List::~List()
{
	//if (_arr != nullptr) delete _arr;
}

Iterator List::Begin()
{
	return _begin;
}

Iterator List::End()
{
	return _end;
}

int List::Size()
{
	return _size;
}

void List::Insert(int& element, int position)
{
	int* oldArr = _arr;
	if (_arr != nullptr) delete _arr;
	_arr = new int[_size + 1];

	// copy first part
	for (int i = 0; i < position; i++)
		_arr[i] = oldArr[i];
	// insert element
	_arr[position] = element;
	_size++;
	// copy second part
	for (int i = position + 1; i < _size; i++)
		_arr[i] = oldArr[i - 1];
}

void List::Erase(int position)
{
	if (_size == 0 || _arr == nullptr) throw "List is empty";
	if (position < 0 || position >= _size) throw "Index out of range";

	int* oldArr = _arr;
	delete _arr;
	_arr = new int[_size - 1];

	// copy first part
	for (int i = 0; i < position; i++)
		_arr[i] = oldArr[i];
	// skip element and copy second part
	_size--;
	for (int i = position; i < _size; i++)
		_arr[i] = oldArr[i + 1];
}

int List::operator[](int ind)
{
	if (ind < 0 || ind >= _size) throw "Index out of range";

	return _arr[ind];
}

List List::operator*(List& secondOperand)
{
	int min = _size < secondOperand._size ? _size : secondOperand._size;
	List res(min);

	for (int i = 0; i < min; i++)
	{
		res._arr[i] = _arr[i] * secondOperand._arr[i];
	}

	return res;
}

ostream& operator<<(ostream& stream, List& list)
{
	for (int i = 0; i < list._size; i++)
	{
		stream << list._arr[i] << " ";
	}
	return stream;
}