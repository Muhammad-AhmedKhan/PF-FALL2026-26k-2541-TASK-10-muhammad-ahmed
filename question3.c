#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char correct[]= "lab10pass";
	char user[100];
	
	printf("Enter pass\n");
	fgets(user, sizeof(user), stdin);
	user[strcspn(user, "\n")] = '\0';
	
	if(strcmp(user, correct) == 0){
		printf("correct pass\n");
	}
	else{
		printf("try again");
	}
	
	if(strncmp(user, correct, 3) == 0) {
		printf("first three are correct\n");
	}
	else{
		printf("first three dont match\n");
	}
	return 0;
}
