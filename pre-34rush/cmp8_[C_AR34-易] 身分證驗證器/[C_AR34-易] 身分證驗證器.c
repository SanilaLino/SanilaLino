#include<stdio.h>
#include<string.h>

int i;

int Decode(char Code)
{
    int Res;
    switch(Code)
    {
        case 'A':
            Res=1;
            break;
        case 'B':
            Res=10;
            break;
        case 'C':
            Res=19;
            break;
        case 'D':
            Res=28;
            break;
        case 'E':
            Res=37;
            break;
        case 'F':
            Res=46;
            break;
        case 'G':
            Res=55;
            break;
        case 'H':
            Res=64;
            break;
        case 'I':
            Res=39;
            break;
        case 'J':
            Res=73;
            break;
        case 'K':
            Res=82;
            break;
        case 'L':
            Res=2;
            break;
        case 'M':
            Res=11;
            break;
        case 'N':
            Res=20;
            break;
        case 'O':
            Res=48;
            break;
        case 'P':
            Res=29;
            break;
        case 'Q':
            Res=38;
            break;
        case 'R':
            Res=47;
            break;
        case 'S':
            Res=56;
            break;
        case 'T':
            Res=65;
            break;
        case 'U':
            Res=74;
            break;
        case 'V':
            Res=83;
            break;
        case 'W':
            Res=3;
            break;
        case 'X':
            Res=12;
            break;
        case 'Y':
            Res=21;
            break;
        case 'Z':
            Res=30;
            break;
    }
    return Res;
}

int main(void)
{
    char Str[11];
    int Cek;
    scanf("%s",Str);
    Cek=Decode(Str[0])+8*(Str[1]-'0')+7*(Str[2]-'0')+6*(Str[3]-'0')+5*(Str[4]-'0')+4*(Str[5]-'0')+3*(Str[6]-'0')+2*(Str[7]-'0')+(Str[8]-'0')+(Str[9]-'0');
    if(Cek%10==0)
        printf("CORRECT!!!");
    else
        printf("WRONG!!!");
    return 0;
}
