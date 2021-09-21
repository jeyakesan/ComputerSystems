#include <stdio.h>
#include<stdbool.h>
int main ()
{
    int x , y;
    x =-2147483648;
    y =2;
    int sub = x - y;
    printf("%d",sub);
    int overflow = (x<0&&y>0&&sub>0) || (x>=0 && y<0 && sub<0);
    int j = !overflow;
    
    printf("\n%d\t%d\n", overflow, j);
    
}