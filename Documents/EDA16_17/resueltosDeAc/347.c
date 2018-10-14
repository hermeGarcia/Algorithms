#include <iostream>
using namespace std;


int numPajaritas(long long int a ,long long int b);


int main()
{

    long long int a;
    long long int b;
    
    cin >> a;
    cin >> b;
    
    while ((a!= 0) || (b != 0))
    {
        cout << numPajaritas(a,b) << '\n';
        
        cin >> a;
        cin >> b;
    }


	return 0;
}




int numPajaritas(long long int a ,long long int b)
{
    long long int aux;
    if(a <= b)
    {
        aux = b/a;
        if(a < 10) return 0;
        else if(b%a == 0) return aux;
        else
            return aux + numPajaritas(b-(aux*a),a); 
    }
    else
    {
        aux = a/b;
        if(b < 10) return 0;
        else if(a%b == 0) return aux;
        else
            return aux + numPajaritas(a-(aux*b),b); 
    }
        
} 