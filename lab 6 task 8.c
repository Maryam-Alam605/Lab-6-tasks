#include<stdio.h>
int main() {
	int n;
	int pow;
	int counter=1;
	int answer;
	printf("Enter a number");
	scanf("%d", &n);
	printf("enter the power");
	scanf("%d", &pow);
	
	for(counter; counter <= pow; counter++){
		answer = answer*n;
	}	
	
	printf("%d", answer);
	
	return 0;
}
