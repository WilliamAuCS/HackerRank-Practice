#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	for (size_t i = 1; i < 11; i++)
	{
		cout << n << " x " << i << " = " << n * i << endl;		//calculating output
	}

	return 0;
}
