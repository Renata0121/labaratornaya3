﻿// лаба3задание4вп.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	float x, y;  //Объявление переменных
	cout << "Введите значение x";
	cin >> x;  //присваивание значения переменной х
	y = 3 * pow(x,6) - 6 * pow(x,2) - 7;  //расчет
	cout << "y=" << y;  //вывод исходного значения на экран
	return 0;
}