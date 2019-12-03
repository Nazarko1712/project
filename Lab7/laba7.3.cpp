#include<iostream>
#include<cmath>
#include<ctime>

using namespace std;
int main()
{
	system("chcp 1251&&cls");
	srand(time(NULL));
	const int n = 7;
	int arr[n];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10 - 1;
		cout << "arr" << "[" << i + 1 << "] -> " << arr[i] << endl;
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i]<0)
		{
			break;
		}
		else 
		{
			sum += arr[i];
		}
	}
	cout << "сума цих елементів = " <<sum;
}