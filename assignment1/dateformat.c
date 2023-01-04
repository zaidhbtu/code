#include<stdio.h>
int main()
// {
//     int D,M,Y;
//     printf("Enter DD/MM/YYYY\n");
//     scanf("%d/%d/%d",&D,&M,&Y);
//     printf("Day-%d, Month-%d, Year-%d",D,M,Y);
//     return 0;
// }
//time-formate:
{
    int hour,min;
    printf("Enter time in HH:MM format\n");
    scanf("%d:%d",&hour,&min);
    printf("%d hour and %d Minute",hour,min);
    return 0;
}