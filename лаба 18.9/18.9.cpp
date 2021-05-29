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
        cout << "Попытка создать список с отрицательным колвом элементов" << endl;
        List list1(-5);
        cout << "Попытка удалась" << endl << list1 << endl;
    }
    catch (...)
    {
        cout << "Попытка не удалась" << endl;
    }

    List list2(10);

    try
    {
        cout << "Попытка получить элемент с отрицательным индексом" << endl;
        cout << list2[-6] << endl;
        cout << "Попытка удалась" << endl;
    }
    catch (...)
    {
        cout << "Попытка не удалась" << endl;
    }

    try
    {
        cout << "Попытка удалить элемент с неправилным индексом" << endl;
        list2.Erase(15);
        cout << "Попытка удалась" << endl;
    }
    catch (...)
    {
        cout << "Попытка не удалась" << endl;
    }

    List list3; // пустой список

    try
    {
        cout << "Попытка удалить элемент из пустого списка" << endl;
        list3.Erase(5);
        cout << "Попытка удалась" << endl;
    }
    catch (...)
    {
        cout << "Попытка не удалась" << endl;
    }
}