#include <iostream>
#include <string>
using namespace std;

int main()
{

	string nombre;
	long long int size;

	
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> nombre;
		cin >> nombre;
		cout << "Hola, " << nombre << "." << '\n';
	}
	return 0;
}