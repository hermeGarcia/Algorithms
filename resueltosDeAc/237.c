#include <iostream>
using namespace std;

int calc(long long int n,bool & poli);

int main()
{
    
    long long int n;
    bool poli = true;
    
    cin >> n;
    while(!cin.fail())
    {
        calc(n,poli);
        if(poli) cout << "POLIDIVISIBLE"<< '\n';
        else cout << "NO POLIDIVISIBLE" << '\n';
        
        poli = true;
        cin >> n;
    }

   
    return 0;
}


int calc(long long int n,bool & poli)
{
    int p = 0;
    if(n/10 == 0) return 1;
    else 
    {
        p = 1 + calc(n/10,poli);
        poli = poli && (n%p == 0);
        return p;
    }
}