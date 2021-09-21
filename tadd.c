#include <stdio.h>
int tadd(int x , int y)
{
    int sum = x + y;
    printf("%d",sum);
    int neg_over = x<0&&y<0&&sum>=0;
    int pos_over = x>=0 && y>=0 && sum <0;
    int k = !neg_over && !pos_over;
    printf("\n%d\t%d\t%d\n\n",neg_over,pos_over, k);
}

int main ()
{
    int x ,y;
    x=-2147483648;
    y=-1;
    return tadd(x, -y);
    
}


