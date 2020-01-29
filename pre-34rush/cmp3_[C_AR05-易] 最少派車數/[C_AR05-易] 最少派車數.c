#include<stdio.h>

int i,j;

int main(void)
{
    int Arr[24]={0};
    int ListCon;
    int St,Ed;
    int Max=0;
    scanf(" %d",&ListCon);
    for(i=0;i<ListCon;i++)
    {
        scanf(" %d %d",&St,&Ed);
        for(j=St;j<Ed;j++)
            Arr[j-1]++;
    }
    for(i=0;i<24;i++)
        if(Max<Arr[i])
            Max=Arr[i];
    printf("%d",Max);
    return 0;
}
