#include <iostream>
using namespace std;

int calc(int v[],int const n,int p);

int main()
{
    int datos[200000];
    int n;
    int p;
    
    cin >> n;
    cin >> p;
    while((n != 0) && (p !=  0))
    {
        for(int i = 0;i < n;i++) cin >> datos[i];
        cout << calc(datos,n,p) << '\n';
        cin >> n;
        cin >> p; 
    }
    return 0;
}


int calc(int v[],int const n,int p)
{
    int ret;
    int sumaAux;
    int posPr;
    int aux;
    int i;
    int j;
    
    ret = 0;
    sumaAux = 0;
    posPr = 0;
    i = 0;
    j = v[posPr] + p-1;
    while((ret < n) && (i < n))
    {
        if(v[i] <= j)
        {
            sumaAux++;
            i++;
        }   
        else
        {
            if(sumaAux > ret)
                ret = sumaAux;
            
           
            sumaAux--;
            posPr++;
            while(v[posPr -1] == v[posPr])
            {
                posPr++;
                sumaAux--;
            } 
            j = v[posPr] + p -1;
        } 
       
    }
    if(sumaAux > ret)
             ret = sumaAux;

    return ret;
}