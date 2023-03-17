// lesson15032023.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<Windows.h>
using namespace std;

union Employee
{
	int id;
	double salary;

};

int main()
{
	setlocale(0, "");


	Employee myEmployee;

	myEmployee.id = 15;
	cout << "The first value (id) at ";
	cout << "the allocated memory: ";
	cout << myEmployee.id << "\n";
	myEmployee.salary = 100.35;
	cout << " The next value (salary) stored ";
	cout << "after removint the previouse value: ";
	cout << myEmployee.salary << "\n";


}

