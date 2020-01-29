#include<stdio.h>
#include<stdlib.h>

int i;

void display(int* Arr,int Siz)
{
    for(i=0;i<Siz;i++)
        printf("%d ",*(Arr+i));
    printf("\n");
    return;
}

void reverse(int* Arr,int Siz)
{
    int Che;
    for(i=0;i<Siz/2;i++)
    {
        Che=*(Arr+i);
        *(Arr+i)=*(Arr-i-1+Siz);
        *(Arr-i-1+Siz)=Che;
    }
    return;
}

int main(void)
{
    int* Arr;
    Arr=malloc(10*sizeof(int));
    for(i=0;i<10;i++)
        scanf(" %d",Arr+i);
    reverse(Arr,10);
    display(Arr,10);
    free(Arr);
    return 0;
}
