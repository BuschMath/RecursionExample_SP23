#include <iostream>

using namespace std;

int example(int n);

int main()
{
	cout << example(100);

	return 0;
}

int example(int n)
{
	cout << "\t" << n << endl;
	if (n < 2)
		return 1;

	return example(n - 1) + example(n - 2);
}