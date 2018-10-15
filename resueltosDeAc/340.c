#include <iostream>
using namespace std;


int main()
{
    long int * soluciones;
    long int casos;
    long int n;
    long int m;
    
    cin >> casos;
    soluciones = new long int[casos];
    
    for(int i = 0; i < casos;i++)
    {
        cin >> n;   
        cin >> m;
        soluciones[i] = (4 + 3*(n-1)) + (m-1)*(3 + 2*(n-1));
    }
    
    for(int i = 0;i < casos;i++) cout << soluciones[i] << '\n';
    delete[]soluciones;
    return 0;
}