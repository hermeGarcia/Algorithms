#include <iostream>

using namespace std;


typedef struct
{
long long int n[2][2];
}tMatriz;

tMatriz vacia();
tMatriz identidad();
tMatriz prod(tMatriz m1, tMatriz m2);
tMatriz eleva(tMatriz i, long long int n);



int main()
{
tMatriz matriz;
matriz.n[0][0] = 0;
matriz.n[0][1] = 1;
matriz.n[1][0] = 1;
matriz.n[1][1] = 1;

long long int n;

cin >> n;
while (n != 0)
{
matriz = eleva(matriz, n - 1);
cout << matriz.n[1][1] << '\n';

matriz.n[0][0] = 0;
matriz.n[0][1] = 1;
matriz.n[1][0] = 1;
matriz.n[1][1] = 1;
cin >> n;
}

return 0;
}


tMatriz eleva(tMatriz i,long long int n)
{

if (n == 0) return identidad();
else
{
tMatriz aux;
aux = eleva(i,n / 2);
aux = prod(aux, aux);
if (n % 2 == 0) return aux;
else
{
 return prod(aux,i);
}
}
}


tMatriz vacia()
{
tMatriz vacia;
vacia.n[0][0] = 0;
vacia.n[0][1] = 0;
vacia.n[1][0] = 0;
vacia.n[1][1] = 0;
return vacia;
}

tMatriz identidad()
{
tMatriz identidad;
identidad.n[0][0] = 1;
identidad.n[0][1] = 0;
identidad.n[1][0] = 0;
identidad.n[1][1] = 1;

return identidad;
}


tMatriz prod(tMatriz m1, tMatriz m2)
{
tMatriz res = vacia();

for(int i = 0; i < 2; i++)
{
    for(int c = 0; c < 2; c++)
    {
        for(int j = 0; j < 2; j++)
            res.n[i][c] = (res.n[i][c] + (m1.n[i][j]*m2.n[j][c])%46337)%46337;
    }

}

return res;

}