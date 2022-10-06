/* Binary Oprator 
 1. Arithmatic Oprator   + - * / %
 2. Logical Oprator && || !
 3. Relational Oprator < <= > >= == !=
 4. Bitwise Oprator
 5. Assignment Oprator += -= *= /=
 Unary Oprator -> increment decrement
 Ternory Oprator -> conditional Oprator ?:
    expression ? true : false
 */

#include<stdio.h>
int main()
{
    int a=1,b=2,c=3,d;
//    d = a && ++b;
//     printf("\na: %d\nb: %d\nd: %d",a,b,d);
    // d = --a && ++b ;
    // printf("\na: %d\nb: %d\nd: %d",a,b,d);
    // d = --a && b ;
    // printf("\na: %d\nb: %d\nd: %d",a,b,d);
    // d = a || ++b ;
    // printf("\na: %d\nb: %d\nd: %d",a,b,d);
    d = --a || ++b ;
    printf("\na: %d\nb: %d\nd: %d",a,b,d);
    // d = --a || ++b && --c ;
    // printf("\na: %d\nb: %d\nc: %d\nd: %d",a,b,c,d);
    //d = --a && ++b && --c ;
    // d = a  + b - (c * 20) ;
    // printf("\na: %d\nb: %d\nc: %d\nd: %d",a,b,c,d);
    // d = a || ++b || --c ;
    // printf("\na: %d\nb: %d\nc: %d\nd: %d",a,b,c,d);
}

/*

And -> first digit 0 than no check after all.... 
OR -> first digit 1 than no check after all.... 
*/