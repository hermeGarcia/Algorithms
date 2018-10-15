
/*
 * The algorithm gets a array of integers in wich there is a pattern
 * we need to return the size of that pattern. They ensure as that it will fully appear at least
 * 2 times, the last time the pattern can appear just partially.
 * given 1212121 we should return 2
 * given 1111111 we should return 1
 *
 * */


//P = {0 < n <= length(v)}
int sizeOfThePath(int v[],int n)
{
    int l = 1;
    int j = l;
    while(j < n)
    {
        if(v[j] != v[j%l])l = j;
        j++;
    }
    return l;
}
//Q = {FA i: 0<= i < n: v[i] == v[i%l]}