#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	system("chcp 1251&&cls");
	float x, y, y1, eps;
	int n;
	cout << "������ �������� x -> ";
	cin >> x;
	cout << "������ ������� eps -> ";
	cin >> eps;
	cout << "������ ������ n -> ";
	cin >> n;
	y1 = x;
	do 
	{
		y = y1;
		y1 = (1.0 / n) * (x / pow(y, n - 1) + (n - 1) * y);
	} 
	while (fabs(y1 - y) > eps);
	  cout << "�������� ������ ������� " << y1;
}