#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char cities[5][100];
	
	for (int i = 0; i < 5; i++) {
		printf("Enter city name %d: ", i + 1);
		fgets(cities[i], sizeof(cities[i]), stdin);
		cities[i][strcspn(cities[i], "\n")] = '\0';
	}

	printf("\nEntered Cities\n");
	for (int i = 0; i < 5; i++) {
		printf("%s\n", cities[i]);
	}
	
	int longest= 0;
	int max = strlen(cities[0]);
	
	for (int i = 1; i < 5; i++) {
		int current = strlen(cities[i]);
		if (current > max) {
			max = current;
			longest = i;
		}
	}
	
	printf("\nLongest city name: %s\n", cities[longest]);
	printf("Length: %d\n", max);
	
	return 0;
}
