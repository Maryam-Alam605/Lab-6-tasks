#include<stdio.h>

int main() {
	
 	int correctPass = 1234;
 	int pass;
 	
 	printf("Enter Password"); 
 		scanf("%d", &pass);

 	if(correctPass == pass) {
 		printf("correct pass");
	 } else {
	 	do {
	 		printf("your password is incorrect. Try again");
	 		scanf("%d", &pass);
		 } while (correctPass != pass); 
		 
	 }
 	
	 

 

	return 0;
	
} 
