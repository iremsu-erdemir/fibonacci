// fibonacci serisi (yineleme ile)  
#include <stdio.h> 
int fib(int n) 
{ 
	if (n <= 1) 
		return n; 
	return fib(n - 1) + fib(n - 2); 
} 

int main() 
{ 
	int n = 9; 

    for (int i = 1; i<=n; i++)
	printf("fib(%d) = %d\n",i , fib(i)); 

	return 0; 
} 

