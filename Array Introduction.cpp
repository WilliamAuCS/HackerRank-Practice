#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

	int length;
	cin >> length;
	int array1[1000];
	int holder;

	for (size_t i = 0; i < length; i++)
	{
		cin >> holder;
		array1[i] = holder;
	}
	for (int i = length -1; i >= 0; i--)
	{
		cout << array1[i] << " ";
	}

	return 0;
}
