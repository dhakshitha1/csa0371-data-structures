#include<stdio.h>
int main(){
       int a=1,numbr;
       long int fact=1;

       printf("Enter a number: ");
       scanf("%d",&numbr);
      for(a=1;a<=numbr;a++)
      fact=fact*a;
      printf("Factorial of %d is: %ld",numbr,fact);
      return 0;
      }
Output
Enter a number:  4

Factorial of  4 is: 24

Enter a number:  6

Factorial of  6 is: 720
