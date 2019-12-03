#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	const int n = 5;
	int Z[n];
	int min;
	int g=0;
	system("chcp 1251&&cls");
	for (int j=1 , i = 0; j < n, i < n; j++, i++)
	{
		cout << "Ведіть зарплату працівника " << j << " -> ";
		cin >> Z[i];
	}
	min = Z[0];
	for (int i = 1; i < n; i++)
	{
		if (Z[i]<min)
		{
			min = Z[i];
			g = i;
		}
	}
	cout << "Найменша запрлата у працівника №" << g + 1 <<
		" розміром -> "<< min;
}