#include<stdio.h>
#include<stdlib.h>

int i;

int QCmp (void* a,void* b)
{
   return *(int*)a-*(int*)b;
}

int main(void)
{
    int NumCon;
    scanf(" %d",&NumCon);
    int* Arr;
    Arr=malloc(NumCon*sizeof(int));
    for(i=0;i<NumCon;i++)
        scanf(" %d",Arr+i);
    qsort(Arr,NumCon,sizeof(int),QCmp);
    for(i=0;i<NumCon;i++)
        printf("%d ",*(Arr+i));
    free(Arr);
    return 0;
}
