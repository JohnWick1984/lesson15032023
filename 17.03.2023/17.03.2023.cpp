// 17.03.2023.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<Windows.h>
#include<cstdio>
#include<fstream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;



int main()
{
    setlocale(0, "");

    ofstream out;
     out.open("C:\\Users\\ST\\Documents\\Шумаков\\lesson15032023\\17.03.2023\\123.txt");

     if (out.is_open())
     {
         out << "Hello world!" << "\n";

     } 

     cout << "End of program" << "\n";
     return 0;

}

