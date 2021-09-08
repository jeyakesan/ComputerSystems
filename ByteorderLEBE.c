#include <stdio.h>
void show_mem_rep(unsigned char *start, int n) 
{
    int i;
    for (i = 0; i < n; i++)
         printf(" %.2x", start[i]);
    printf("\n");
}
int main()
{
   int i = 12;
   char a[]={'9', 2};
   void *x ;
   show_mem_rep((char*)&i, sizeof(i));
   show_mem_rep((char*)&a, sizeof(a));
   show_mem_rep((char*)&x, sizeof(void *));
   return 0;
}