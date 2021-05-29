#pragma once
using namespace std;
class Iterator
{
	friend class List;

private:
	int* _pointer;

public:
	Iterator(int* pointer = nullptr);

	Iterator(Iterator& iterator);

	bool operator==(Iterator& secondOperand);

	bool operator!=(Iterator& secondOperand);

	void operator++();

	void operator+(int n);

	void operator--();

	void operator-(int n);

	int& operator*();
};
