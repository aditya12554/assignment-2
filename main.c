#include <stdio.h>
#include "header.h"

int main()
{
    int (*ptr_count)(int);
    int (*ptr_factorial)(int);
    int (*ptr_evenodd)(int);

    

    ptr_evenodd = evenodd;
    ptr_factorial = factorial;
    ptr_count = prime;

    int n, a,b, l;





    
    printf("Enter number to check even hai ya odd :-\n");
    scanf("%d", &l);
    if (ptr_evenodd(l) == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }


    printf("Enter number check factorial :- ");
    scanf("%d", &n);
    printf("%d\n", ptr_factorial(n));



    printf("Enter number to check count- ");
    scanf("%d", &a);
    if (ptr_count(b) ==1 )
    {
       printf("%d",b);
    }

    
    
    return 0;
}
