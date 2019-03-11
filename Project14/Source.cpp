#include <iostream>
#include <stdio.h>
#include <time.h>
#include <Windows.h>
#include <locale.h>
#include <stdlib.h>
#include <cstring>
#include <math.h>
using namespace std;
#define Pi 3.14159265 

//1 
//double sqrt(double a) {
//	return sqrt(a);
//}
double pow(double a) {
	return pow(a, 2);
}
double sinus(double a) {
	return sin(a*Pi / 180);
}

bool asc(int a, int b) {
	return a > b;
}
bool desc(int a, int b) {
	return a < b;
}
void bubblesort(int *a, int n, bool(*func)(int, int)) {
	for (int pass = 0; pass < n - 1; pass++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (func(a[i], a[i + 1]) == 1)
				swap(a[i], a[i + 1]);
		}

	}
}
void fillArray(int a[], int n) {
	for (int *p = a; p < a + n; p++)
	{
		*p = 1 + rand() % 10;
	}
}
void printArray(int a[], int n) {
	for (int *p = a; p < a + n; p++)
	{
		cout << *p <<" ";
	}
	cout << endl;
}

double y( double x) {
	return pow(x, 2);
}
double primer(double a ) {
	int y;
	return y = a * 2 + 4;
}

int main()
{
	//1.Реализовать 3 функции каждая из которых принимает вещественное число и возвращает вещественное число. Первая функция вычисляет квадратный корень числа, вторая – куб числа, третья – синус числа. В главной функции создайте массив из 3-х указателей на эти функции. Добавьте меню, в котором пользователь может выбрать желаемую операцию. Напишите программу без использования операторов if и switch. 
/*double(*ukaz[3])(double) = { sqrt, pow, sinus };
int choice = -1;
double ab;
while (choice < 3)
{
 cout << "Enter 0 to sqrt" << endl;
 cout << "Enter 1 to pow" << endl;
cout << "Enter 2 to sin" << endl;
 cin >> choice;
 cout << "Enter a" << endl;
 cin >> ab;
 cout << ukaz[choice](ab) << endl;
 }*/
double(*ukaz[2])(double) = { y, primer };
int choice = -1;
double a;
while (choice < 2)
{
	cout << "Enter 0 to pow" << endl;
	cout << "Enter 1 to y = x*2+4 " << endl;
	cin >> choice;
	cout << "Enter a" << endl;
	cin >> a;
	
	cout << ukaz[choice](a) << endl;
}
  

	
	






	system("pause");
}