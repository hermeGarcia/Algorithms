#include <iostream>
using namespace std;


void resultado(int v[],int n,int & ini,int & fin);

int main()
{
    
    int n;
    int casos;
    int ini = 0;
    int fin = 0;
    int v[100000];
    cin >> casos;
    
    for(int i = 0; i < casos;i++)
    {
        cin >> n;
        for(int j = 0; j < n;j++) cin >> v[j];
        resultado(v,n,ini,fin);
        cout << ini << " " << fin <<'\n';
        
        ini = 0;
        fin = 0;
    
    }

   
    return 0;
}


void resultado(int v[],int n,int & ini,int & fin)
{
    int sumaTotal;
    int sumaAux;
    int inicio = 0;
    int ultimo = 0;
    
    sumaTotal = 0;
    sumaAux = 0;
    
    while(ultimo < n)
    {
        
        sumaAux = sumaAux + v[ultimo];
        while(sumaAux < 0)
        {
            sumaAux = sumaAux - v[inicio];
            inicio++;
        }
        if(sumaAux == 0) inicio = ultimo + 1;
        else
        {
            if(sumaAux > sumaTotal) 
            {
                sumaTotal = sumaAux;
                ini = inicio;
                fin = ultimo;    
            } 
        
            if((sumaAux == sumaTotal) && ((fin-ini)>(ultimo-inicio)))
            {
                ini = inicio;
                fin = ultimo;    
            }
        }
        ultimo++;

    }
    
    
    ini++;
    fin++;

}