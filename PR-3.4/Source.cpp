// Lab_03_4.cpp
// < Кашук Андрій >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 12
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр 
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R; 

	// розгалуження в повній формі
	if ((y <= -sqrt(pow(R, 2) - pow((x + R), 2)) + pow(R, 2) && y >= 0) ||
		(y <= 0 && y >= -x && y >= sqrt(pow(R, 2) - pow((x - R), 2)) - R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}