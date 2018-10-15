


int sizeOfCicle(int ini, int v[],bool black[])
{
    int r = 1;
    black[ini] = true;
    int act = v[ini];
    while (act != ini)
    {
        black[act] = true;
        act = v[act];
        r++;
    }
    return r;
}

int numOfSteps(int v[],int n)
{
    bool black[INT_MAX];
    for(int i = 0; i < n; i++)black[i] = false;
    int ret = 1;

    int j = 0;
    while(j < n)
    {
        int curr = sizeOfCicle(j,v,black);
        if(ret%curr != 0 && curr%ret != 0) ret *= curr;
        else if (ret < curr) ret = curr;
        while(black[j] && j < n) j++;
    }
    return ret;
}
