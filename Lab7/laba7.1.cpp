#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	double c[8] = {-6.3,-1.0,10.3,-8.8,6.3,-1.1,0.0,0.1 };
	for (int i = 1; i <= 8; i+=2)
	{
		if (c[i]>0)
		{
			cout << c[i] << endl;
		}
	}
}