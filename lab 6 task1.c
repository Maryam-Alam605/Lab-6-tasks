#include<stdio.h>

int main() {
	
	int n;
	int f = 1;
	int i=1;
	
	printf("Enter a number to find its factorial");
	scanf("%d", &n);

	if(n <0 ) {
		printf("you cant find factorial of a negative number");
	} else {
		
		  for (i; i<n; i++) {
		  	f = f * i;
		
		}
			printf("factorial is %d", f*i);
	}

	
	
}
