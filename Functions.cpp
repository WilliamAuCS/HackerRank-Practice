#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d);

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int ans = max_of_four(a, b, c, d);	//passing to function
	printf("%d", ans);

	return 0;
}
int max_of_four(int a, int b, int c, int d)		//finding largest of the given elements
{
	int max1, max2;
	if (a > b)
		max1 = a;
	else
		max1 = b;
	if (c > d)
		max2 = c;
	else
		max2 = d;
	if (max1 > max2)
		return max1;
	else
		return max2;
}