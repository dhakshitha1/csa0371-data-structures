#include<stdio.h>
 
int Fibonacci(int);
 
int main()
{
   int n, i = 0, c;
 
   scanf("%d",&n);
 
   printf("Fibonacci series\n");
 
   for ( c = 1 ; c <= n ; c++ )
   {
     //function is called recursively using for loop
      printf("%d\n", Fibonacci(i));
      i++; 
   }
 
   return 0;
}
 //fibonacci series function
int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 
Output
Enter number of terms required in Fibonacci Series: 8
Fibonacci series
0 1 1 2 3 5 8 13 
