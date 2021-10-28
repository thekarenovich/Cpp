#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i < 13; i++)
	{
		if (i < 6)
			for (int k = 0; k < 8; k++)
				cout << "*";
		else
			for (int k = 7; k < 15; k++)
				cout << "=";
		for (int k = 7; k < 16; k++)
			cout << "===";
		cout << endl;
	}
}
