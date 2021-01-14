#include <iostream>

using namespace std;

int power(int a, int b) {
	int sum = 0;
	sum = a;
	for (int i = 1; i < b; ++i)
	{
		sum *= a;
	}
	cout << sum;
	return sum;
}

void main() {
	int a = 0;
	int b = 0;
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите число и его степень" << endl; 
	cin >> a >> b;
	power(a, b);
}