#include <iostream>
using namespace std;

int calc(float v[],int const n);

int main()
{
    
    int n;
    float v[200000];
    
    cin >> n;
    
    while(n != 0)
    {
        for(int i = 0; i < n; i++) cin >> v[i];
        cout << calc(v,n) << '\n';
        cin >> n;
    }
   
    return 0;
}


int calc(float v[],int const n)
{
    int j;
    int ret;
    float nMax;
    float auxMax;
    float nMin;
    
    
    
    nMin = v[0];
    auxMax = v[0];
    nMax = auxMax;
    ret = j +1;
    
    j = 1;
    while(j < n)
    {
        if(v[j] <= nMin)
        {
            nMin = v[j];
            nMax = auxMax;
            ret = j+1;
        }
        else if((v[j] > nMin) && (v[j] <= nMax))
        {
            
            nMax = auxMax;
            ret = j+1;
        }
        else
        {
            if(v[j] > auxMax)
                auxMax = v[j];
        }
        
        j++;
    
    }
    
    return ret;
}