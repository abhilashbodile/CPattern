#include<stdio.h>
int main()
{
    volatile int a = 9;
    printf("%u",&a);
    printf("\n%d",a);
    a = a+10;
    printf("\n%u",&a);
    printf("\n%d",a);
    
    return 0;
}
