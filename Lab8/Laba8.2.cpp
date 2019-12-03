#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;
int main()
{
	system("chcp 1251&&cls");
	const int m = 5, n = 7;
	double sum = 0;
    int x[m][n];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			x[i][j] = rand() % 10;
			cout << x[i][j] << "\t";
		}
		cout<< endl;
	}
	double cr;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum += x[j][i];
			cr = sum / m;
		}
		cout <<endl<<"summa = " << sum << "\t";
		cout <<"середнє арифметичне =" << cr<< "\t";
		sum = 0;
	}
}