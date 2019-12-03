#include<iostream>
#include<cmath>

using namespace std;
//int main()
//{
//	const int n = 5;
//	double D[n] = { 3.2,-6.3,-8.3,0.0,1.2 };
//	double t;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = i + 1; j < 5; j++)
//		{
//			if (D[i] < D[j])
//			{
//				t = D[i];
//				D[i] = D[j];
//				D[j] = t;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << "D[" << i+1 << "] = " << D[i] << endl;
//	}
//}



int main()
{
	double arr[8]{ 1.1,2.3,-6.2,3.6,5.6,-3.3,-2.1,5.5 };
	for (int i = 0; i < 8; i++)
	{
		if (i % 2 != 0)
		{
			cout << i << "    " << arr[i] << endl;
		}
		else
		{
			cout << i << "    " << arr[i] << endl;
		}
		

	}