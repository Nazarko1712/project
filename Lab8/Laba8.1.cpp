#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	system("chcp 1251&&cls");
	const int r = 2, c = 4;
	double x, g,xw;
	float sum=0, sum1=0;
	float X[r][c]
	{
		{1.4, 1.2, 1.1, 1.5},
		{1.7, 1.5, 1.3, 1.6}
	};
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			sum += X[i][j];
			cout << X[i][j] << " |" <<"\t";
		}
		cout << endl << "----------------------------" << endl;
	}
	xw = sum / (r * c);
	g = sqrt((sum / (r * c - 1)) * pow(sum - xw, 2));
	cout << "Середнє арифметичне = " << xw << endl;
	cout << "Середнє квадратичне відхилення = " << g;
}
