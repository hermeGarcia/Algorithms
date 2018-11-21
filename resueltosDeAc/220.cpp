#include <iostream>

using namespace std;

bool jugador1(int num,int digit);
bool jugador2(int num,int digit);

int main()
{
    
    int casos;
    int num;
    int digit;
    int turno;
    
    cin >> casos;
    while(casos > 0)
    {
        turno = 0;
        cin >> num;
        cin >> digit;
        if(jugador1(num,digit)) cout << "GANA" << '\n';
        else cout << "PIERDE" << '\n';
        casos--;
    }

return 0;
}


bool jugador1(int num,int digit)
{
    if(num >= 31) 
        return true;
    else
    {
        bool ganara = true;
        switch (digit)
        {
            case 1:
                if(ganara) ganara = jugador2(num+2,2);
                if(ganara) ganara = jugador2(num+3,3); 
                if(ganara) ganara = jugador2(num+4,4); 
                if(ganara) ganara = jugador2(num+7,7); 
                break;
            case 2:
                if(ganara) ganara = jugador2(num+1,1);
                if(ganara) ganara = jugador2(num+3,3); 
                if(ganara) ganara = jugador2(num+5,5); 
                if(ganara) ganara = jugador2(num+8,8); 
                break;
            case 3:
                if(ganara) ganara = jugador2(num+1,1);
                if(ganara) ganara = jugador2(num+2,2); 
                if(ganara) ganara = jugador2(num+6,6); 
                if(ganara) ganara = jugador2(num+9,9); 
                break;
            case 4:
                if(ganara) ganara = jugador2(num+5,5);
                if(ganara) ganara = jugador2(num+6,6); 
                if(ganara) ganara = jugador2(num+7,7); 
                if(ganara) ganara = jugador2(num+1,1); 
                break;
            case 5:
                if(ganara) ganara = jugador2(num+2,2);
                if(ganara) ganara = jugador2(num+8,8); 
                if(ganara) ganara = jugador2(num+4,4); 
                if(ganara) ganara = jugador2(num+6,6); 
                break;
            case 6:
                if(ganara) ganara = jugador2(num+9,9);
                if(ganara) ganara = jugador2(num+3,3); 
                if(ganara) ganara = jugador2(num+4,4); 
                if(ganara) ganara = jugador2(num+5,5); 
                break;
            case 7:
                if(ganara) ganara = jugador2(num+8,8);
                if(ganara) ganara = jugador2(num+9,9); 
                if(ganara) ganara = jugador2(num+4,4); 
                if(ganara) ganara = jugador2(num+1,1); 
                break;
            case 8:
                if(ganara) ganara = jugador2(num+2,2);
                if(ganara) ganara = jugador2(num+5,5); 
                if(ganara) ganara = jugador2(num+7,7); 
                if(ganara) ganara = jugador2(num+9,9); 
                break;
            case 9:
                if(ganara) ganara = jugador2(num+3,3);
                if(ganara) ganara = jugador2(num+6,6); 
                if(ganara) ganara = jugador2(num+7,7); 
                if(ganara) ganara = jugador2(num+8,8); 
                break;
            default:;
        }
        return !ganara;
    }
}

bool jugador2(int num,int digit)
{
    if(num >= 31) 
        return true;
    else
    {
        bool ganara = true;
        switch (digit)
        {
            case 1:
                if(ganara) ganara = jugador1(num+2,2);
                if(ganara) ganara = jugador1(num+3,3); 
                if(ganara) ganara = jugador1(num+4,4); 
                if(ganara) ganara = jugador1(num+7,7); 
                break;
            case 2:
                if(ganara) ganara = jugador1(num+1,1);
                if(ganara) ganara = jugador1(num+3,3); 
                if(ganara) ganara = jugador1(num+5,5); 
                if(ganara) ganara = jugador1(num+8,8); 
                break;
            case 3:
                if(ganara) ganara = jugador1(num+1,1);
                if(ganara) ganara = jugador1(num+2,2); 
                if(ganara) ganara = jugador1(num+6,6); 
                if(ganara) ganara = jugador1(num+9,9); 
                break;
            case 4:
                if(ganara) ganara = jugador1(num+5,5);
                if(ganara) ganara = jugador1(num+6,6); 
                if(ganara) ganara = jugador1(num+7,7); 
                if(ganara) ganara = jugador1(num+1,1); 
                break;
            case 5:
                if(ganara) ganara = jugador1(num+2,2);
                if(ganara) ganara = jugador1(num+8,8); 
                if(ganara) ganara = jugador1(num+4,4); 
                if(ganara) ganara = jugador1(num+6,6); 
                break;
            case 6:
                if(ganara) ganara = jugador1(num+9,9);
                if(ganara) ganara = jugador1(num+3,3); 
                if(ganara) ganara = jugador1(num+4,4); 
                if(ganara) ganara = jugador1(num+5,5); 
                break;
            case 7:
                if(ganara) ganara = jugador1(num+8,8);
                if(ganara) ganara = jugador1(num+9,9); 
                if(ganara) ganara = jugador1(num+4,4); 
                if(ganara) ganara = jugador1(num+1,1); 
                break;
            case 8:
                if(ganara) ganara = jugador1(num+2,2);
                if(ganara) ganara = jugador1(num+5,5); 
                if(ganara) ganara = jugador1(num+7,7); 
                if(ganara) ganara = jugador1(num+9,9); 
                break;
            case 9:
                if(ganara) ganara = jugador1(num+3,3);
                if(ganara) ganara = jugador1(num+6,6); 
                if(ganara) ganara = jugador1(num+7,7); 
                if(ganara) ganara = jugador1(num+8,8); 
                break;
            default:;
        }
        return !ganara;
    }
}