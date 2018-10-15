#include <iostream>
using namespace std;

int calc(int n);

int main()
{
    
    int n;
    
    cin >> n;
    while(!cin.fail())
    {
        cout << calc(n) << "\n";
        cin >> n;
    }

   
    return 0;
}


int calc(int n)
{
    if(n == 1) return 4;
    else return 4*n + 4*calc(n/2);
}