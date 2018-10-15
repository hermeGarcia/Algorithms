#include <iostream>
using namespace std;

int contarDigitos(int n,int & c);
long long int calcdigs(int a ,int b,int next,int digs);
int calcres(int a,long long int res,int next,int digs,int m,int b);

int main()
{
    int a;
    int b;
    long long int cont = 0;
    int diga = 0;
    int n;
    
    cin >> a;
    cin >> b;
    while((a != 0)|| (b != 0))
    {
        n = contarDigitos(a,diga);
        cont = calcdigs(a,b,n,diga)/2;
        cout << calcres(a,cont,n,diga,(a+b)/2,b) << '\n';

        cont = 0;
        diga = 0;
        cin >> a;
        cin >> b;
    }
    return 0;
}


int contarDigitos(int n,int & c)
{
    int p = 1;
    while( n != 0)
    {
        p = p*10;
        c = c+1;
        n = n/10;
    
    }
    return p;
}


long long int calcdigs(int a ,int b,int next,int digs)
{
    if(next > b) return (next-a)*digs -(next-b-1)*digs;
    else
    {
        return (next-a)*digs + calcdigs(next,b,next*10,digs+1);
    }


}

int calcres(int a,long long int res,int next,int digs,int m,int b)
{
    if(m >b) return b;
    else
    {
        int n = (m+b)/2;
        long long int aux = calcdigs(a,n,next,digs);
        if(aux == res) return n;
        else if(aux < res) return calcres(a,res,next,digs,n+1,b);
        else return calcres(a,res,next,digs,a,n-1);
    }

}