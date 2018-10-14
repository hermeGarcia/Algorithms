#include <iostream>

using namespace std;

string combs(int c,int v,string comb);

int main()
{
    
    int casos;
    string comb = "";
    int c;
    int v;
    int i = 0;
    
    cin >> casos;
    while(i < casos)
    {
        cin >> c;
        cin >> v;
        cout << combs(c,v,comb);
        cout << '\n';
        i++;
        comb = "";
    }
    return 0;
}



string combs(int c,int v,string comb)
{
    string sol = "";
    if((c > 0) && (v > 0))
    {
        sol = sol + combs(c-1,v,comb+'C');
        sol = sol +  " ";
        sol = sol + combs(c,v-1,comb+'V');
    }
    else
    {
        if(c > 0) sol = sol + combs(c-1,v,comb + 'C');
        if(v > 0) sol = sol + combs(c,v-1,comb + 'V');
        if((c == 0) && (v == 0))
        {
            return comb;
        }
    }
    
    return sol;
    
}