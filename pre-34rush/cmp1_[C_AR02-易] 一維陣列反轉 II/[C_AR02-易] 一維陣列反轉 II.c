#include<stdio.h>

int i;

int main(void)
{
    int Arr[6];
    int Sum=0;
    for(i=0;i<6;i++)
        scanf(" %d",&Arr[i]);
    for(i=5;i>=0;i--)
        printf("%d ",Arr[i]);
    return 0;
}
