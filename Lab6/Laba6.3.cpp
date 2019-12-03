#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	system("chcp 1251&&cls");
	float xn, x, sum = 1, eps;
	int n=1, fact=1;
	cout << "Введіть поч. значення x: ";
	cin >> x;
	cout << "Введіть точність e: ";
	cin >> eps;
	xn = x;
	while (fabs(xn) >= eps) 
	{
		xn = pow(-1, n) * ((pow(x, n)) / (fact*n));
		sum += xn;
		fact *= n;
		n++;
	}
	cout << "е^" << -x << " = " << sum << endl;
	cout << "К-сть ітерацій: " << n << endl;
}
