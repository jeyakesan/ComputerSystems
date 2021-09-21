#include<stdio.h>
int main ()
{
    int number, limit;
    printf("Enter the number for multiplication and till the value: ");
    scanf("%d%d", &number , &limit);
    for (int i=1; i<=limit ; i++)
    {
        int prod ;
        prod = i * number;
        printf ("%d x %d = %d\n", i, number ,prod);
    }
}