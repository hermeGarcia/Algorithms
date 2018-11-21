#include <iostream>

using namespace std;


int result(int & aux, bool & ok);

int main()
{
    int aux = 0;
    bool ok = true;
    
    result(aux,ok);
    while(aux != -1)
    {
        if(ok) cout << "SI" << '\n';
        else cout << "NO" << '\n';
        ok = true;
        result(aux,ok);
    }
    return 0;
}


int result(int & aux, bool & ok)
{

    int pi;
    int pd;
    int di;
    int dp;
    cin >> pi >>di >> pd >> dp;
    
    if((pi == 0)&&(pd == 0)&&(di == 0) && (dp == 0)) 
    {
        aux = -1;
        return -1;
    }
    
    if(pi == 0)
        pi = result(aux,ok);
    if(pd ==  0)
        pd = result(aux,ok);
    
    ok = ok && ((pi*di) == (pd*dp));
    return pi + pd;

}