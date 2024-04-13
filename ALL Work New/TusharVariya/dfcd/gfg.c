#include <stdio.h>
void main()
{
    int a, b, c, d, e;
    printf("Enter A=");
    scanf("%d", &a);

    printf("Enter b=");
    scanf("%d", &b);

    printf("Enter c=");
    scanf("%d", &c);

    printf("Enter d=");
    scanf("%d", &d);

    printf("Enter e=");
    scanf("%d", &e);
    
   if(a>b)
   {
        if(a>c)
        {
            if(a>d)
            {
                if(a>e)
                {
                    printf("%d is largest", a);
                }
                else
                {
                    printf("%d is largest", e);
                }
            }
            else
            {
                printf("%d is largest", d);
            }
        }
        else
        {
            printf("%d is largest", c);
        }
   }
   else{
        if(b>c)
        {
            if(b>d)
            {
                if(b>e)
                {
                    printf("%d is largest", b);
                }
                else
                {
                    printf("%d is largest", e);
                }
            }
            else
            {
                printf("%d is largest", d);
            }
        }
        else
        {
            printf("%d is largest", c);
        }
   }

    
}