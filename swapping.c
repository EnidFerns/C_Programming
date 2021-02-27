// C program to swap two variables 
#include <stdio.h> 

int main() 
{ 
	int v1,v2,temp; 
	printf("Enter the first number: "); 
	scanf("%d", &v1); //input 1
	printf("\nEnter the second number: "); 
	scanf("%d", &v2); //input 2
	printf("\n\NBefore Swapping:\nFirst Number: %d\nSecond Number: %d", v1, v2); 
	temp = v1; 
	v1 = v2; 
	v2 = temp; 
	printf("\n\NAfter Swapping:\nFirst Number: %d\nSecond Number: %d", v1, v2); 
	return 0; 
} 
