#include <iostream>
using  namespace std;

//P = {(0<= n <= long(v)) && (d > 0)}
bool crecientePPyDdivertido(int n , int d , int v[]);/*return ret*/
//Q = {ret = crecientePP(v,n) && Ddivertido(d,v,n)}
//crecientePP(v,n) = {ParaTodo i: 0<= i < n-1: v[i] <= v[i+1] && (v[i+1] - v[i] <= 1)}
//Ddivertido(d,v,n) ={ paraTodo k: 0<= k < n: (# j : 0<= j< n: v[k] == v[j]) <= d}

bool crecientePP(int n,int v[]);
bool AuxcrecientePP(int ini,int fin,int v[]);
void TodosLosCrecientesPPyDdivertidos(int n, int e, int d);
void TodosLosCrecientesPPyDdivertidosAux(
        const int n,const int d,
        int v[],int k,int e
);

int main() {

    int d; int n;
    int e;
    cin >> n >> d;

    while(d != 0)
    {
        cin >> e;
        TodosLosCrecientesPPyDdivertidos(n,e,d);
        cin >> n >> d;
    }


    return 0;
}


bool crecientePPyDdivertido(int n , int d , int v[])
{
   //A0
    int maxRep = 1;
    int i = 0;

    //I = {0<= i<= n && crecientePP(v,i) && Ddivertido(d,v,i)}
    while((i < n-1) && (v[i] <= v[i+1]) && (v[i+1] - v[i] <= 1) && (maxRep <= d))
    {
        if(v[i] == v[i+1]) maxRep++;
        else maxRep = 1;
        i++;
    }
    //I = {0<= i<= n && crecientePP(v,i) && Ddivertido(d,v,i)}

    /**
     *  f(i) : n-1-i cuando f(i) = 0 entonces termina.
     *  como i crece en cada iteracion y n se mantiene constante, siempre
     *  llegaremos a un i tal que f(i) = 0
     */
    bool ret = (maxRep <= d);
    i++;
    ret = ret && (i >= n);
    return ret;
}//O(n)

bool crecientePP(int n,int v[])
{
    return AuxcrecientePP(0,n-1,v);
}

bool AuxcrecientePP(int ini,int fin,int v[])
{

    if(ini >= fin) return true;
    if(v[fin] > v[ini] + (fin-ini)) return false;

    int m = (ini + fin) / 2;
    return (v[m] <= v[m+1]) && (v[m+1] - v[m] <= 1) && AuxcrecientePP(ini,m,v)
           && AuxcrecientePP(m+1,fin,v);

}


void TodosLosCrecientesPPyDdivertidos(int n, int e, int d)
{
    int v [1000];
    v[0] = e;
    TodosLosCrecientesPPyDdivertidosAux(n,d,v,1,e);
}
void TodosLosCrecientesPPyDdivertidosAux(
        const int n,const int d,
        int v[],int k,int e
)
{
 if( k == n)
 {
     for(int i = 0; i< n; i++) cout << v[i] <<  " ";
     cout << endl;
     return;
 }

    if( k < d || v[k-d] != e){
        v[k] = e;
       TodosLosCrecientesPPyDdivertidosAux(n,d,v,k+1,e);
    }

    v[k] = e+1;
    TodosLosCrecientesPPyDdivertidosAux(n,d,v,k+1,e+1);
}