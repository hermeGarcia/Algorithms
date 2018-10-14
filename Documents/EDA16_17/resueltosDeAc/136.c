
#include <iostream>

using namespace std;

int resultado(int f,int n);

int main()
{
    int fuerza;
    int eslabones;

    cin >> fuerza;
    while(fuerza != 0)
    {
        cin >> eslabones;

        if(eslabones <= fuerza*2) cout << 0 << '\n';
        else
            cout << resultado(fuerza,eslabones) << '\n';

        cin >> fuerza;
    }
    return 0;
}

int resultado(int f,int n)
{
    if(n <= 2*f) return 0;
    return 1 + resultado(f,n/3) + resultado(f,n-(n/3));
}
