#include<stdio.h>
#include<string.h>

int i;

int main(void)
{
    char Str[100];
    int Dif;
    gets(Str);
    scanf(" %d",&Dif);
    for(i=0;i<strlen(Str);i++)
        printf("%c",Str[i]+Dif);
    return 0;
}
