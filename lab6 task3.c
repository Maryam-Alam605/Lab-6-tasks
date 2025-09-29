#include <stdio.h> 

int main() {
	
	int n;
	int mod;
	int reversed = 0;
	printf("enter a number to make it reverse");
	scanf("%d", &n); 
	
	
	int originalNum = n;
	
	while(n != 0) {
		
	 mod = n%10;
	 
	 reversed = reversed * 10 + mod;
	 
	 n = n/10;
	 
		
	}
	
	printf("orginal number %d", originalNum);
	printf("reversed number %d", reversed);
	
	
} 
