#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	system("chcp 1251&&cls");
	float x, x0, x1, eps;
	int n=0;
	cout << "������ �������� x0 -> ";
	cin >> x0;
	cout << "������ ������� eps -> ";
	cin >> eps;
	x1 = x0;
	do {
		x = x1;
		x1 = 2-log10(x);
		n++;
	   } 
	while (fabs(x1 - x) > eps);
	   cout << "�������� ������ = " << x1 << endl;
	cout<< "ʳ������ �������� -> " << n;
}