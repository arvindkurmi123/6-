#include <stdio.h>
#include <math.h>

void main()
{
    int a[8];
    int binary;
    FILE *ptr;
    ptr = fopen("binary.txt", "r");
    binary = fgetc(ptr);
    // printf("%d",a);
    while (binary != EOF)
    {
        for (int i = 0; i < 8; i++)
        {
            a[i] = binary-48;
            // if (a[i]==1){a[i]=0;} // ---> different type of code as output
            // else {a[i]=1;}
            binary = fgetc(ptr);
        }
    //             for (int i = 0; i < 8; i++)
    // {
    //     printf("%d ", a[i]);
    // }

        int n = 0;
        for (int i = 0; i < 8; i++)
        {
            n += a[i] * pow(2, 7 - i);
        }
        //printf("%d \n", n);
        printf("%c", n);
        
    }
}
