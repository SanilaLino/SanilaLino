#include<stdio.h>

int i,j;

int main(void)
{
    int SizN,SizM;
    scanf(" %d %d",&SizN,&SizM);
    int Arr[SizN][SizM];
    for(i=0;i<SizN;i++)
        for(j=0;j<SizM;j++)
            scanf(" %d",&Arr[i][j]);
    for(j=0;j<SizM;j++)
    {
        for(i=0;i<SizN;i++)
            printf("%d ",Arr[i][j]);
        printf("\n");
    }
    return 0;
}
