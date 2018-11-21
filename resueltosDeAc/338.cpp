#include <iostream>
using namespace std;


void resultado(int a[],int v[],int n,int p,int & cop,int & copdec,int max);
int main()
{
    
    int p;
    int n;
    int v[1000000];
    int a[100000];
    bool copias[100000];

    
    int cop = 0;
    int copdec = 0;
    int max = 0;
    
    for(int i = 1;i <= 100000;i++)copias[i] = false;
    cin >> n;
    while(!cin.fail())
    {
        cin >> p;
        
        for(int i = 0;i < n;i++) 
        {
            cin >> v[i];
            if(v[i] > max) max = v[i];
            if(copias[v[i]]) cop++;
            else copias[v[i]] = true;
        }

            resultado(a,v,n,p,cop,copdec,max);
        
        cout << cop << " " << copdec << '\n';
        cop = 0;
        copdec = 0;
        max = 0;
        for(int i = 1;i <= 100000;i++)copias[i] = false;
        
        cin >> n;
    }
    return 0;
}


void resultado(int a[],int v[],int n,int p,int & cop,int & copdec,int max)
{
 
    int aux[max];
    
    for(int i =1 ; i <= max;i++) aux[i] = 0;
    int i;
    
    i = 0;
    
    while((i < p) && (i < n))
    {
        if(aux[v[i]] != 0)
            copdec++;
            
        
        aux[v[i]]++;
        a[i%p] = v[i];
        i++;
    }
    
    while(i < n)
    {
        if(aux[v[i]] == 0)
        {
            aux[a[i%p]]--;
            a[i%p] = v[i];
            aux[a[i%p]]++;
        }
        
        else
        {
                copdec++;
                aux[a[i%p]]--;
                a[i%p] = v[i];
                aux[a[i%p]]++;

        
        }
        i++;
    
    }

}