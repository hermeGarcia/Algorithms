
#include <iostream>
using namespace std;


int main()
{
    int N = 100;
    int size;
    long int * countries;
    long long int total;
    long long  int resultado;
    int c;
    

    cin >> size;
    c = 0;
    while(size != 0)
    {
        
        total = 0;
        countries = new long int[size];
    
        for(int i = 0; i < size; i++)
        {
            cin >> countries[i];
            total = total + countries[i];
        }
    
    
        resultado = 0;
        for(int i = 0; i < (size - 1); i++)
        {
            total = total - countries[i];
            resultado = resultado + (countries[i] * total);
        }    
        cout << resultado << '\n';
        c++;
        
        delete [] countries;
        cin >> size;
    }
    return 0;
}
