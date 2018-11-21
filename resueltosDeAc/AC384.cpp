//
// Created by herme on 21/11/2018.
//

#include <iostream>
using namespace std;


long long int sinPremio(long long int v[],long long int ini,long long int fin,bool iz,bool & ret)
{
    if(ini > fin) return -1;

    long long int mx = -1;
    long long int indMax = -1;
    long long int min = 1000000001;
    long long int i = ini;
    while (i <= fin) {
        if (v[i] > mx) {mx = v[i];indMax = i;}
        if(v[i] < min) {min = v[i];}
        i++;
    }

    long long int m = indMax;
    long long int izq = sinPremio(v,ini,m-1,true,ret);
    long long int der = sinPremio(v,m+1,fin,false,ret);
    if(izq != -1 && der != -1)ret = ret || ((izq < der) && (der < v[m]));

    if(iz)return min;
    return mx;
}

int main() {
    long long int t;
    long long int v[500000];
    while(cin >> t) {
        int i = 0;
        while (i < t) {
            cin >> v[i];
            i++;
        }
        bool ret = false;
        sinPremio(v,0,t-1,false,ret);
        if(ret)
            cout << "ELEGIR OTRA" << endl;
        else
            cout << "SIEMPRE PREMIO" << endl;
    }
    return 0;
}
