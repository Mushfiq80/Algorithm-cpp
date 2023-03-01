#include<stdio.h>
main ()
{
    int x,i=0;
    printf("Enter number of letter 'o' for Wow: ");
    scanf("%d",&x);
    if((0<x)&&(x<50))
    {
        printf("W");
        {
            for(i=0;i<x;i++)
                printf("o",i);
        }
        printf("w");
    }

        return 0;
}
