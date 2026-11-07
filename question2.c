#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char first[50];
	char last[50];
	char full[100] = "";
	
	printf("Enter first: ");
	fgets(first, sizeof(first), stdin);
	first[strcspn(first, "\n")] = '\0';
	printf("Enter last name: ");
	fgets(last, sizeof(last), stdin);
	last[strcspn(last, "\n")] = '\0';
	
	
	
	strcpy(full, first);
	strcat(full, " ");
	strcat(full, last);
	printf("Full name: %s\n", full);
	
	return 0;
}
