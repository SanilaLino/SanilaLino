#include<stdio.h>
#include<string.h>

int main(void)
{
    char Str[100];
    gets(Str);
    printf("There are %d characters",strlen(Str));
    return 0;
}
