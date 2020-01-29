#include<stdio.h>
#include<math.h>

int i;

float Avg(int ArrSize,int Arr[ArrSize])
{
    float Res=0;
    for(i=0;i<ArrSize;i++)
        Res=Res+(float)Arr[i];
    Res=Res/ArrSize;
    return Res;
}

int main(void)
{
    int ListCon;
    scanf(" %d",&ListCon);
    int Grade_1[ListCon];
    int Grade_2[ListCon];
    int Grade_3[ListCon];
    for(i=0;i<ListCon;i++)
        scanf(" %d %d %d",&Grade_1[i],&Grade_2[i],&Grade_3[i]);
    float EAvg[3]={Avg(ListCon,Grade_1),Avg(ListCon,Grade_2),Avg(ListCon,Grade_3)};
    float AllAvg=(EAvg[0]+EAvg[1]+EAvg[2])/3;
    EAvg[0]=roundf(10*EAvg[0])/10;
    EAvg[1]=roundf(10*EAvg[1])/10;
    EAvg[2]=roundf(10*EAvg[2])/10;
    AllAvg=roundf(10*AllAvg)/10;
    printf("%.1f %.1f %.1f %.1f",AllAvg,EAvg[0],EAvg[1],EAvg[2]);
    return 0;
}
