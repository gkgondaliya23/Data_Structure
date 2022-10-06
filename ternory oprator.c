// ternory oprator && unary oprator
#include <stdio.h>
int main()
{
    int a = 10, b = 200, c = 30;
    // a>b ? printf("Larger number: %d",a) : printf("Larger number: %d",b);
    //printf("Larger number: %d", a > b ? a : b);
    //printf("Larger number: %d", a > b && a > c ? a : b > c ? b : c);

   // printf("%d %d %d",a,a++,a++);
 // printf("%d %d %d",a,a++,++a);
// printf("%d %d %d",a,++a,++a);
//printf("%d %d %d %d",a,++a,++a,++a);
    // printf("%d %d %d %d",a++,++a,a++,++a);
    printf("%d %d %d %d %d",a,a++,++a,a++,++a);
}