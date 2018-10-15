#include <iostream>
#include <string>
using namespace std;
long int calc(long int datos[],int const c);
void abso(long int & n);

int main()
{
    long int i;
    
    long int c;
    long int* datos;

    i = 0;
    
    cin >> c;
    while(c != 0)
    {
        datos = new long int[c];
        cout << calc(datos,c) << '\n';
        delete [] datos;
        cin >> c;
        i++;
    }
    return 0;
}

long int calc(long int datos[],int const c)
{
    long int suma = 0;
    long int inver;
    long int n;
    long int aux;
    long int p;
    int j = 0;
    p = 0;
    for(long int i = 0; i < c;i++)
    {
        cin >> aux;
        suma = suma + aux;
        datos[i] = aux;
    }
    
    
    if(suma == 0) p = -1;
    else
    {
        inver = 0;
        p = -1;
        aux = suma;
        abso(aux);
        while((j < c)&&(aux != 0))
        {
            inver = inver + datos[j];
            suma = suma - datos[j];
            n = suma -inver;
            abso(n);
            if(n < aux)
            {
                aux = n;
                p = j;
            }
            j++;
        }
     }
    
    return p+1;
}

void abso(long int & n)
{
    if(n < 0) n = n*-1;
}
