#include <stdio.h>
 
int primeno(int, int);
 
int main()
{
    int n, p;
    printf("Enter a number: ");
    scanf("%d", &n);
    p = prime(n, n / 2);
    if (p == 1)
    {
        printf("%d is a prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }
    return 0;
}
 
int prime(int n, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (n % i == 0)
       {
         return 0;
       }
       else
       {
         return prime(n, i - 1);
       }       
    }
}
