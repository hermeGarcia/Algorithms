#include <iostream>
using namespace std;

long int calc(long int v[],int const n);

int main()
{
    long int datos[100000];
    int n;
    
    cin >> n;
    while(n != 0)
    {
        for(int i = 0;i < n;i++) cin >> datos[i];
        cout << calc(datos,n) << '\n';
        cin >> n;
    }
    return 0;
}


long int calc(long int v[],int const n)
{
    long int ret;
    int j;
    long int max;
    ret  = 1;
    max = v[n-1];
    j = n-1;
    
    while(j > 0)
    {
        if(max < v[j-1])
        {
            max = v[j-1];
            ret++;
        }
        j--;
    }
    
    return ret;
}