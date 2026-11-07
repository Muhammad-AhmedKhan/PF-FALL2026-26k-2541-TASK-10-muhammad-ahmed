#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *file;
	char name[100];
	char buffer[100];
	int count = 0;
	
	file = fopen("students.txt", "w");
	if (file == NULL) {
		printf("Error opening file for writing!\n");
		return 1;
	}
	
	printf("Enter 3 student names:\n");
	for (int i = 0; i < 3; i++) {
		fgets(name, sizeof(name), stdin);
		name[strcspn(name, "\n")] = '\0';
		fprintf(file, "%s\n", name);
	}
	
	fclose(file);
	
	file = fopen("students.txt", "r");
	if (file == NULL) {
		printf("Error opening file for reading!\n");
		return 1;
	}
	
	printf("\nNames read from students.txt:\n");
	while (fgets(buffer, sizeof(buffer), file) != NULL) {
		buffer[strcspn(buffer, "\n")] = '\0';
		count++;
		printf("%d. %s\n", count, buffer);
	}
	
	fclose(file);
	
	printf("Total students in file: %d\n", count);
	
	return 0;
}
