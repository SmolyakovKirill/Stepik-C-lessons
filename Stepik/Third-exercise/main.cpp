#include<iostream>
#include"solution.h"

using namespace std;

void main() {
	int a, b, c = 0;
	cout << "Enter values:" << endl;
	cin >> a >> b >> c;
 	std::pair<double, double> mrvs = square_ratios(a, b, c);
	cout << "Answer: " << "x1 = " << mrvs.first << " x2 = " << mrvs.second << endl;
}