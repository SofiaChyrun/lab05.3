// ChyrunSofialab5.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_05_3.cpp
// < Чирун Софія >
// Лабораторна робота № 5.3
// Функції, що містять розгалуження та цикли з рекурентними співвідношеннями  
// Варіант 18

#include <iostream>
#include <cmath>

using namespace std;

double f(const double x);

int main()
{
	double tp, tk, z;
	int n;

	cout << "tp = "; cin >> tp;
	cout << "tk = "; cin >> tk;
	cout << "n = "; cin >> n;

	double dt = (tk - tp) / n;

	double t = tp;

	while (t <= tk)
	{
		z = f(1 + 2*t) + pow(f(f(1) + 2*f(2*t)),2);
		cout << t << " " << z << endl;
		t += dt;
	}
	return 0;
}
double f(const double x)
{
	if (abs(x) >= 1)
		return (pow(sin(x),2) + sin(pow(x,2))) / (1 + pow(cos(x),2));
	else
	{
		double S = x, a;
		int n = 0;
		a = 1 / (1 + pow(x, 2));
		do
		{
			n++;
			double R = (pow(x,4*n+1)) / ((4 * n + 1) * (4 * n ) * (4 * n - 1)*(4 * n - 2));
			S += R;
		} while (n < 7);
		S = a* S;
		return S;
	}
}
