#include <iostream>
#include "List.h"
#include <time.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(0));

    try
    {
        cout << "������� ������� ������ � ������������� ������ ���������" << endl;
        List list1(-5);
        cout << "������� �������" << endl << list1 << endl;
    }
    catch (...)
    {
        cout << "������� �� �������" << endl;
    }

    List list2(10);

    try
    {
        cout << "������� �������� ������� � ������������� ��������" << endl;
        cout << list2[-6] << endl;
        cout << "������� �������" << endl;
    }
    catch (...)
    {
        cout << "������� �� �������" << endl;
    }

    try
    {
        cout << "������� ������� ������� � ����������� ��������" << endl;
        list2.Erase(15);
        cout << "������� �������" << endl;
    }
    catch (...)
    {
        cout << "������� �� �������" << endl;
    }

    List list3; // ������ ������

    try
    {
        cout << "������� ������� ������� �� ������� ������" << endl;
        list3.Erase(5);
        cout << "������� �������" << endl;
    }
    catch (...)
    {
        cout << "������� �� �������" << endl;
    }
}