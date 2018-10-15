#include <iostream>
using namespace std;

void polis(long long int num, int dig, int N);
int numDig(long long int num);
int main()
{

	long long int num;
	int N;
	int dig;

	cin >> num;
	while (!cin.fail())
	{
            dig  = numDig(num);
            cin >> N;
            
            cout << num << '\n';
            polis(num*10, dig+1, N);
            cout << "---" << '\n';
            
            cin >> num;
	}


	return 0;
}


void polis(long long int num,int dig,int N)
{
	//int i = num%10;
	int j = 0;
	if (dig <= N)
	{
		while ( j < 10)
		{
			if (num%dig == 0)
			{
				cout << num << '\n';
				polis(num*10, dig+1, N);
			}
			num++;
			j++;
		}
	}
	
}


int numDig(long long int num)
{
	if (num > 9)
	{
		return 1 + numDig(num/10);
	}
	else return 1;
}