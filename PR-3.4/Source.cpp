// Lab_03_4.cpp
// < ����� ����� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 12
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // ������� �������� 
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R; 

	// ������������ � ����� ����
	if ((y <= -sqrt(pow(R, 2) - pow((x + R), 2)) + pow(R, 2) && y >= 0) ||
		(y <= 0 && y >= -x && y >= sqrt(pow(R, 2) - pow((x - R), 2)) - R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}