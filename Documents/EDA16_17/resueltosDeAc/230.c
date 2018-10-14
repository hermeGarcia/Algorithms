#include <iostream>

using namespace std;


void mergerSort(long long int v[],int a, int n,long long int & cont);
void mezcla(long long int v[],int a,int m,int n,long long int & cont);
int const DIM = 100000;

int main()
{
    int ocup;
    long long int a[DIM];
    long long int cont = 0;
    
    cin >> ocup;
    while(ocup != 0)
    {
        for(int i = 0;i < ocup;i++) cin >> a[i];
        mergerSort(a,0,ocup-1,cont);
        cout << cont << '\n';
        cont = 0;
        cin >> ocup;
    }
    return 0;
}

void mezcla(long long int v[],int a,int m,int n,long long int & cont)
{
    int i = a;
    int j = m+1;
    long long int aux[DIM];
    int wp =0;
    
    while((i <= m)&&(j <= n))
    {
        if(v[i] <= v[j])
        {
            aux[wp] = v[i];
            i++;
            cont = cont + j-m-1;
        }
        else
        {
            aux[wp] = v[j];
            j++;
        }
        wp++;
    }
    
    while(i <= m)
    {
        aux[wp] = v[i];
        cont = cont + j-m-1;
        i++;
        wp++;
    }
    while(j <= n)
    {
        aux[wp] = v[j];
        j++;
        wp++;
    }
    for(int c = a; c <= n;c++) v[c] = aux[c-a];

}

void mergerSort(long long int v[],int a, int n,long long int & cont)
{
    
    if(a < n)
    {
        int m = (a+n)/2;
        mergerSort(v,a,m,cont);
        mergerSort(v,m+1,n,cont);
        mezcla(v,a,m,n,cont);
    }

}