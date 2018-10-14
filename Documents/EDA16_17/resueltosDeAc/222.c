#include <iostream>
using namespace std;

long int calc(long int x,long int p);

int main()
{

    long int x;
    long int p;
    long int res;

    cin >> x;    
    while(!cin.fail())
    {
        cin >> p;
        res = calc(x,p);
        cout << res << '\n';
        cin >> x;
    }
    return 0;
}

long int calc(long int x,long int p)
{
    long int j;
    long int ret;
    long int pot;
    long int const N = 1000007;
    
    x = x%N;
    //A0
    j = 0;
    ret = 1;
    
    pot = 1;
    
    //I = {(0 <= j <= n) && (ret = SUMi:0 <= i <= j: x^i) && (pot = x^j)
    while(j < p)//B
    {
    //A1
        pot = (pot*x)%N;
            
        ret = (ret + pot)%N;
        //A2
        j++;
    }
    return ret ;
}