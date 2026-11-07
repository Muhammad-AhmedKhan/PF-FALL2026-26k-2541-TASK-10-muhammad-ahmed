#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char names[5][100];
	char temp[100];
	
	for (int i = 0; i < 5; i++) {
		printf("Enter student name %d: ", i + 1);
		scanf("%s", names[i]);
	}	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (strcmp(names[j], names[j + 1]) > 0) {
				strcpy(temp, names[j]);
				strcpy(names[j], names[j + 1]);
				strcpy(names[j + 1], temp);}}
	}
	
	printf("\n Sorted Student Names\n");
	for (int i = 0; i < 5; i++) {
		printf("%s\n", names[i]);
	}
	
	return 0;}
