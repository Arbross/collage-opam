#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	try
	{
		while (true)
		{
			int choose = 0;

			cout << "1 - task one" << endl;
			cout << "4 - exit" << endl;
			cin >> choose;

			switch (choose)
			{
			case 1: {
				// Task 1

				int value = 0;
				cout << "Please enter parameter : " << endl; cin >> value;
				cout << "Your answer is : " << pow(value, 4) << endl;
			} break;
			case 4: {
				return 0;
			} break;
			default: cout << "Oupss.. Entered value is wrong." << endl; break;
			}
		}
	}
	catch (const exception& ex)
	{
		cout << ex.what() << endl;
	}

	return 0;
}
