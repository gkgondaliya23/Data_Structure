/*
             1
         3   2
     6   5   4
 7   8   9   10
*/
#include <stdio.h>
int main()
{
    int i, j, sp = 5, n = 0, a, b;
    for (i = 1; i <= 4; i++)
    {
        n += i;
        for (j = 1; j <= sp; j++)
            printf("\t");
        a = n;
        for (j = 1; j <= i; j++)
        {
            if (i == 4)
                printf("\t%d", b++);
            else
                printf("\t%d", a--);
        }
        b = n + 1;
        sp--;
        printf("\n");
    }
}

/*
#include<stdio.h>
int main()
{
    int i, j, n = 1,k=5,x;
    for (i = 1; i <= 4;++i)
    {
        for (j = 1; j <= k; j++)
        printf(" ");
        for (j = 1; j <=i; j++)
        {
            printf("%d",x = n--);

        }
        k--;
        n = x-1+i+j;
        printf("\n");
    }
}
/*
output:-
                1
            3   2
        6   5   4
    10  9   8   7
*/