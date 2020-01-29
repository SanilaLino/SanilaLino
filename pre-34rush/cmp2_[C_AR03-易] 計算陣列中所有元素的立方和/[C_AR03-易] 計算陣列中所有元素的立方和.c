#include<stdio.h>

int i;

int main(void)
{
    int Arr[6];
    int Sum=0;
    for(i=0;i<6;i++)
    {
        scanf(" %d",&Arr[i]);
        Sum=Sum+Arr[i]*Arr[i]*Arr[i];
    }
    printf("%d",Sum);
    return 0;
}
