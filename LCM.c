#include<stdio.h>

int LCM(int, int); 

int main()
{
    int a, b, lcm;
    printf("Input first number: ");
    scanf("%d", &a);
    printf("Input second number: ");
    scanf("%d", &b); 
    lcm = LCM(a,b);    
    printf("\nLCM of %d and %d = %d\n\n", a, b, lcm);
    return 0;
}

int LCM(int a, int b) 
{
    static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        LCM(a,b);
        return temp;
    }
}
