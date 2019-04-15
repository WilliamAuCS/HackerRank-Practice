#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Complete the program
	int size1, size2;		//initializing variables
	string s1, s2;

	cin >> s1;
	cin >> s2;

	size1 = s1.size();		//storing size of s1
	size2 = s2.size();		//storing size of s2

	cout << s1.size() << " " << s2.size() << endl;		//outputting string sizes
	cout << s1 + s2 << endl;		//outputting combination of both strings

	char holder;		//holding first element in s1 so it is not lost
	holder = s1[0];
	s1[0] = s2[0];		//swapping first elements
	s2[0] = holder;

	cout << s1 << " " << s2 << endl;		//outputting modified strings

	return 0;
}

