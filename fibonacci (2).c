#include <stdio.h>
int fib(int n) {
	int fnow = 0, fnext = 1, temp;
	while(--n>0){
		temp = fnow + fnext;
		fnow = fnext;
		fnext = temp;
		}
		return fnext;	
}

int main() 
{ 
	int n = 9; 

    for (int i = 1; i<=n; i++)
	printf("fib(%d) = %d\n",i , fib(i)); 

	return 0; 
} 

