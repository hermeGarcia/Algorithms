#include <iostream>
using namespace std;

//int calc(long long int n,bool & poli);
void escribir(int n,int & res);

int main()
{
    
    int n;
    int res = 0;
    cin >> n;
    while(n >= 0)
    {
        escribir(n,res);
        cout << " = " << res << '\n';
        res = 0;
        cin >> n;
    }

   
    return 0;
}



void escribir(int n,int & res)
{
    if(n/10 == 0) 
    {
        res = res + n;
        cout << n ;
    }
    
    else
    {
        res = res + n%10;
        
        escribir(n/10,res);
        cout << " + " << n%10 ;
    }
}