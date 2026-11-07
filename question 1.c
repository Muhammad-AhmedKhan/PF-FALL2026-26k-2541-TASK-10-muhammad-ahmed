#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[100];
	char copy[100];
	
	printf("enter your name: ");
	fgets(name, sizeof(name), stdin);
	name[strcspn(name, "\n")] = '\0';
	int len = strlen(name);
	printf("Length of name is %d\n", len);
	
	strcpy(copy, name);
	printf("copied name %s\n", copy);
	
	printf("Length of name is %d\n", len);
	printf("size of name is %d\n", sizeof(name));
	
	return 0;
}
