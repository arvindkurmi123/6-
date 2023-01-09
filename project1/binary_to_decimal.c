#include <stdio.h>
#include<math.h>
void main()
{
    int  p,t;
    int a[8] ;
    printf("enter a number 01001101 ");
    scanf("%d", &p);
    for ( int i = 7; i >= 0; i--)
    {
        t = p % 10;
        a[i] = t;
        p = p / 10;
    }
        for (int i = 0; i < 8; i++)
    {
        printf("%d ", a[i]);
    }
    int n=0;
    for (int i=0; i<8; i++){
        n+= a[i]*pow(2,7-i);
    }
    printf("%d \n",n);
}
// 