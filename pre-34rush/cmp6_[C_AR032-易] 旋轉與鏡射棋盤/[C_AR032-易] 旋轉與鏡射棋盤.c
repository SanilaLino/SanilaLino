#include<stdio.h>

int i,j;

int main(void)
{
    int Siz;
    scanf(" %d",&Siz);
    for(i=0;i<Siz;i++)//1st
    {
        for(j=0;j<Siz;j++)
            printf("%c%d ",'A'+i,1+j);
        printf("\n");
    }
    printf("\n");
    for(i=0;i<Siz;i++)//2nd
    {
        for(j=0;j<Siz;j++)
            printf("%c%d ",'A'+Siz-j-1,1+i);
        printf("\n");
    }
    printf("\n");
    for(i=0;i<Siz;i++)//3rd
    {
        for(j=0;j<Siz;j++)
            printf("%c%d ",'A'+Siz-i-1,1+Siz-1-j);
        printf("\n");
    }
    printf("\n");
    for(i=0;i<Siz;i++)//4th
    {
        for(j=0;j<Siz;j++)
            printf("%c%d ",'A'+j,1+Siz-1-i);
        printf("\n");
    }
    printf("\n");
    for(i=0;i<Siz;i++)//5th
    {
        for(j=0;j<Siz;j++)
            printf("%c%d ",'A'+i,1+Siz-1-j);
        printf("\n");
    }
    printf("\n");
    for(i=0;i<Siz;i++)//6th
    {
        for(j=0;j<Siz;j++)
            printf("%c%d ",'A'+Siz-1-j,1+Siz-1-i);
        printf("\n");
    }
    printf("\n");
    for(i=0;i<Siz;i++)//7th
    {
        for(j=0;j<Siz;j++)
            printf("%c%d ",'A'+Siz-1-i,1+j);
        printf("\n");
    }
    printf("\n");
    for(i=0;i<Siz;i++)//8th
    {
        for(j=0;j<Siz;j++)
            printf("%c%d ",'A'+j,1+i);
        printf("\n");
    }
    return 0;
}
