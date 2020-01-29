#include<stdio.h>

int main(void)
{
    int Mon,Day;
    scanf(" %d %d",&Mon,&Day);
    switch(Mon*30+Day)
    {
        case 31 ... 50:
            printf("Capricorn");
            break;
        case 51 ... 78:
            printf("Aquarius");
            break;
        case 79 ... 110:
            printf("Pisces");
            break;
        case 111 ... 140:
            printf("Aries");
            break;
        case 141 ... 171:
            printf("Taurus");
            break;
        case 172 ... 201:
            printf("Gemini");
            break;
        case 202 ... 232:
            printf("Cancer");
            break;
        case 233 ... 263:
            printf("Leo");
            break;
        case 264 ... 293:
            printf("Virgo");
            break;
        case 294 ... 323:
            printf("Libra");
            break;
        case 324 ... 352:
            printf("Scorpio");
            break;
        case 353 ... 381:
            printf("Sagittarius");
            break;
        case 382 ... 391:
            printf("Capricorn");
            break;
    }
    return 0;
}
