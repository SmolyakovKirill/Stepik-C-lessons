#include<iostream>
#include"summary.h"

using namespace std;

void main() {
	int m = 0;
	int a = 0;
	int	b = 0;
	cout << "Enter the number of addition:" << endl;
	cin >> m;
	int* p_arr = new int[m];
	for (int i = 0; i < m; ++i)
	{
		cin >> a >> b;
		p_arr[i] = addition(a, b);
	}
	for (int i = 0; i < m; ++i)
	{
		cout << p_arr[i] << endl;
	}
	delete[] p_arr;
}

