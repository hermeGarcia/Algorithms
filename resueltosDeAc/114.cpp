#include <iostream>
using namespace std;

int main()
{

	long long int number;
	long long int size;
	long long int result;

	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> number;
		if (number > 9) cout << 0 << "\n";

		else
		{
			result = 1;
			while (number > 0)
			{
				result = result * number;
				number--;

			}
			cout << result % 10 << "\n"; 

		}

	}
	return 0;
}