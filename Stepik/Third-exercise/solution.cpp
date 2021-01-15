#include<iostream>
#include<cmath>

using namespace std;

pair<double, double> square_ratios(int a, int b, int c) {
	double d, x1, x2 = 0;
	d = (b * b) - (4 * a * c);
	if (d < 0)
	{
		cout << "No real roots" << endl;
	}
	else
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		return {x1, x2};
	}
}