#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    float p,r,t,si;
    system("cls");
    printf("Enter the Principal, Rate and Time :");
    scanf("%f %f %f",&p,&r,&t);
    si = (p*r*t)/100;
    printf("Simple Interest : %f",si);
    getch();
 }