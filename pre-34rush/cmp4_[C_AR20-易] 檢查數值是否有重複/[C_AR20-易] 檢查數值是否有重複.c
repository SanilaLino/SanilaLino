#include<stdio.h>

int i;

int main(void)
{
    int Arr[128]={0};
    int ListCon;
    int Num;
    scanf(" %d",&ListCon);
    for(i=0;i<ListCon;i++)
    {
        scanf(" %d",&Num);
        Arr[Num-1]++;
    }
    for(i=0;i<ListCon;i++)
        if(Arr[i]!=1)
            goto Incomp;
    printf("1");
    goto Comp;
    Incomp:
    printf("0");
    Comp:
    return 0;
}
