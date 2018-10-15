#include <iostream>
using namespace std;




int main()
{
    
    int ini;
    int fin;
    int n;
    int num;
    int p;
    bool encontrado = false;
    bool encontrado2 = false;

    cin >> ini;
    cin >> fin;
    cin >> n;
    while((ini != 0) || (fin != 0) || (n != 0))
    {
        cin >> num;
        
        if((n == ini )||(n == fin)) encontrado = true;
        for(int i = 0; i < num; i++)
        {
            cin >> p;
            if(p == n) 
            {
                if(n == fin) encontrado2 = true;
                else encontrado = true;
            }
            if(p == n+1) encontrado2 = true;
        }
        
        if(encontrado && encontrado2) cout << "LO SABE" << '\n';
        else if(ini == fin) cout << "LO SABE" << '\n';
        else cout << "NO LO SABE" << '\n';
        
        cin >> ini;
        cin >> fin;
        cin >> n;
        encontrado = false;
        encontrado2 = false;
    }
     
    return 0;
}