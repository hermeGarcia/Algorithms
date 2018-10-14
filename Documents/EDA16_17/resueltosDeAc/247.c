#include <iostream>
#include <string>
using namespace std;

//pre = {0 < ocup && ocup <= long(muestras)}
bool creciente(long int const muestras[],int const ocup) /* return b:bool*/;
//post = {b = paratodo i :0 <= i && i < n-1: v[i] < v[i+1]}
int main()
{
    int const N = 100;
    long int muestras[N];
    int ocup;
    
    ocup = 0;
    
    cin >> ocup;
    while(ocup != 0)
    {
        for(int i = 0; i < ocup;i++) cin >> muestras[i];
        if(creciente(muestras,ocup)) cout << "SI" << '\n';
        else cout << "NO" << '\n';
        cin >> ocup;
    }
    
    return 0;
}

bool creciente(long int const muestras[],int const ocup)
{
    int i;
    i = 0;
    while((i < ocup-1) && (muestras[i] < muestras[i+1])) i++;
    return i == ocup-1;
}