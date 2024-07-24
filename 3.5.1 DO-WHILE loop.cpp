#include <iostream>
using namespace std;

int main()
{
	int num;

	do //A do-while loop always executes at least once.
	{
		cout << "Enter a number (100 to stop): ";
		cin >> num;
	} while (num != 100);
}