#include <iostream>
using namespace std;
//pre:{ ( 0<=n<=longitud(v) )}
int suma(int v[], int n); // return sum;
//post :{ sum= SUM i: 0<=i<n: v[i]

//pre:{ (0<= n <= long(v) && (suma = SUM i: 0 <= i < n: v[i])}
int cuantas(int v[],int n,int suma); /*return ret*/
// pos :{ret=#i:0<= i <n: iguales(v[],i,n)}
//iguales(v[],i,n) :{SUM j: 0 <= j <= i: v[j] = SUM c:i < c < n: v[c]}


int main() 
{
int n;
int sumaV;
int v[100000];
cin >> n;

while (n != 0)
{
for (int i = 0; i < n; i++) cin >> v[i];
sumaV = suma(v,n);
cout << cuantas(v,n,sumaV) << '\n';
cin >> n;
}

return 0;
}
int suma(int v[], int n){
int sum = 0;
int i = 0;
while (i < n){// {I}: {(0<=j<=n) && ( sum = SUM i: 0<=i<j : v[i]}
sum = sum + v[i];
i++;
}
return sum;
}

int cuantas(int v[], int n, int suma)
{
int ret = 0;
int suma2 = 0;
int j = 0;

if (suma == suma2) ret++;
while (j < n)//I:{(0 <= j <= n) && (ret = #i: 0 <= i < j:iguales(v[],i,n))}
{
suma2 = suma2 + v[j];
suma = suma - v[j];
if (suma2 == suma) ret++;
j++;
}

return ret;
}