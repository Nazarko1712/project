#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a, eps, x, lim, lim1;
	eps = pow(10, -4);
	int N = 1, M = 1000;

	cout << "Введите eps: ";
	cin >> eps;
	cout << "Введите a: ";
	cin >> a;

	x = a + 1 / (pow(2, N));
	lim1 = sqrt(pow(x, 3) - pow(a, 3)) / sqrt(x - a);

	while (1) {
		N++;
		lim = lim1;
		x = a + 1 / (pow(2, N));
		lim1 = sqrt(pow(x, 3) - pow(a, 3)) / sqrt(x - a);
		if (fabs(lim1 - lim) <= eps) {
			cout << "Ліміт: " << lim1;
			break;
		}
		if (fabs(lim1 - lim) > M) {
			cout << "Функція нескінченна в точці а";
			break;
		}
		if (N > 100) {
			cout << "Неможливо знайти ліміт";
			break;
		}
	}
}