#include <iostream>
using namespace std;

long long int elevar(long long int a,long long int b);


int main()
{
    
  long long int a;
  long long int b;
  
  cin >> a;
  cin >> b;
  
  while((b!= 0)||(a!= 0))
  {
      cout << elevar(a,b) << '\n';
      cin >> a;
      cin >> b;
  
  }
    return 0;
}



long long int elevar(long long int a,long long int b)
{
    
    if(b == 0) return 1;
    
    long long int aux;
    aux = elevar(a,b/2)%31543;
    aux = (aux*aux)%31543;
    
    if((b%2) == 0) return aux;
    else return (aux*a)%31543;

}