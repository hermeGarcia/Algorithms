#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    long int p;
    long int DIM;
    long int result;
    long int i = 0;
    long int n;
    
    cin >> DIM;
    cin >> p;
    while(DIM != 0)
    {
        if(DIM == 1);
        else
        {
            result = ((DIM)*((DIM)-1))/2;
            p = p + result;
            n = p;
            for(long int i = 1; i < DIM;i++)
            {
                p = p + n + i;
            }
       }
        cout << p << '\n';
        cin >> DIM;
        cin >> p;
        i++;
    }
    return 0;
}
