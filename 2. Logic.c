#include<stdio.h>
int main()
{
    int h,t;
    float c;
    printf("Enter Hardness, Carbon content,Tensile strength",h,c,t);
    scanf("%d %f %d",&h,&t,&c);
    if ((h>60)&& (c<0.7 && t>5000))
    printf("Grade is 10");
   else
    printf("not 10");
}
