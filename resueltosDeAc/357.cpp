#include <iostream>
using namespace std;
int min(long long int num);
int main()
{

	long long int num;

	cin >> num;
	while (!cin.fail())
	{
            cout << min(num) << '\n';
            cin >> num;
	}


	return 0;
}

int min(long long int num)
{
    if(num == 1) return 1;
    else return 1 + min(num/2);

}