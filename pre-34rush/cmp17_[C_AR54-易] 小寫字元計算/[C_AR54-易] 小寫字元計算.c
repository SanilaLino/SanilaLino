#include<stdio.h>

int i;

int main(void)
{
    int Arr[26]={0};
    int CharCon;
    scanf(" %d",&CharCon);
    char Char;
    for(i=0;i<CharCon;i++)
    {
        scanf(" %c",&Char);
        Arr[Char-'a']++;
    }
    for(i=0;i<26;i++)
        if(Arr[i]!=0)
            printf("%c %d\n",i+'a',Arr[i]);
    return 0;
}
