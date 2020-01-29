#include<stdio.h>
#include<string.h>

int i;

int main(void)
{
    char Str[100];
    scanf(" %s",Str);
    for(i=0;i<strlen(Str)/2;i++)
        if(Str[i]!=Str[strlen(Str)-1-i])
        {
            printf("NO");
            goto End;
        }
    printf("YES");
    End:
    return 0;
}
