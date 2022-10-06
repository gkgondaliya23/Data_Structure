// continue and conditional statement 
#include<stdio.h>
int main()
{
    int i=1;
    for(int j=1;j<10;j++)
    {
        if(!(i>10))
            printf(" if %d",i++);
        else
            printf(" else %d",i++);
    }
        // if(!(i>10))
        //     printf(" if %d",i++);
        // else
        //     printf(" else %d",i++);
}