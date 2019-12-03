#include <iostream>
#include "ctime"
using namespace std;
int main() {
	system("chcp 1251 && cls");
	int k = 0, p = 0;
	int lineMax, lineMin;
	const int i = 6;
	const int j = 8;
	int A[i][j];
	for (int m = 0; m < i; m++)
	{
		for (int n = 0; n < j; n++)
		{
			A[m][n] = rand() % 100;
			cout << A[m][n] <<"  | " <<"\t";
		}
		cout << endl;
		cout << "----------------------------------------------------------" << endl;
	}
	int max, min;
	max = A[k][p];
	min = A[k][p];
	for (int m = 0; m < i; m++)
	{
		for (int n = 0; n < j; n++)
		{
			if (max < A[m][n])
			{
				max = A[m][n];
				lineMax = n;
			}
			if (min > A[m][n])
			{
				min = A[m][n];
				lineMin = n;
			}
		}
	}
	cout << "Max = " << max << "\nMin = " << min << endl;
	for (int n = 0; n < i; n++) 
	{
		int tmp = A[n][lineMin];
		A[n][lineMin] = A[n][lineMax];
		A[n][lineMax] = tmp;
	}
	for (int m = 0; m < i; m++)
	{
		for (int n = 0; n < j; n++)
		{
			cout << A[m][n] << "  | " << "\t";
		}
		cout << endl;
		cout << "----------------------------------------------------------" << endl;
	}            
}
















