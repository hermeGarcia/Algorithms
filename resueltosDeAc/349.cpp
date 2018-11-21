#include <iostream>

using namespace std;


int result();
int calc(int op1,int op2,char oper);

int main()
{
    
    int casos;
    int i = 0;
    
    cin >> casos;
    while(i < casos)
    {
        cout << result() << '\n';
        i++;
    }
    return 0;
}


int result()
{
    char aux;
    int op1;
    int op2;
    cin >> aux;
    
    if((aux >= '0') && (aux <= '9')) return aux -48;
    else
    {
        op1 = result();
        op2 = result();
        return calc(op1,op2,aux);
    }


}

int calc(int op1,int op2,char oper)
{
    if(oper == '+') return op1+op2;
    else if(oper == '-') return op1-op2;
    else if(oper == '*') return op1*op2;
    else return op1/op2;

}