#include<stdio.h>

int i;

void Exch(int* a,int* b)
{
    int che;
    che=*a;
    *a=*b;
    *b=che;
    return;
}

int main(void)
{
    int Arr[4];
    for(i=0;i<4;i++)
    {
        Arr[i]=getchar();
        Arr[i]=Arr[i]-(int)'0';
    }
    for(i=0;i<4;i++)
        Arr[i]=(Arr[i]+7)%10;
    Exch(Arr,Arr+2);
    Exch(Arr+1,Arr+3);
    for(i=0;i<4;i++)
        printf("%d",Arr[i]);
    return 0;
}
