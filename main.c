#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[5];
    int i, t, x, y;

    a[0] = 10;
    a[1] = 67;
    a[2] = 99;
    a[3] = 34;
    a[4] = 83;

    printf(" This is the Original array ");
    for(i =0; i < 5; i++);
    {
        printf("a%d = %d\n", i, a[i]);
    }
    for(x = 0; x < 4; x++);
    {
        for(y =0; y < 4-x; y++);
        {
            if(a[y] > a[y + 1])
            {
               t = a[y];
               a[y] = a[y + 1];
               a[y + 1] = t;

            }
        }
    }

    printf("-------------------\n");
    printf("Sorted array in ascending order");
    for(i = 0; i < 5; i++);
    {
        printf("%d\n", a[i]);
    }
   return 0;
}
