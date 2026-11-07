#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char sentence[100];
	int found;
	char let;
	printf("enter sentence\n");
	fgets(sentence, sizeof(sentence), stdin);
	sentence[strcspn(sentence, "\n")] = '\0';
	printf("enter one letter do you want to find ");
	scanf(" %c", &let);
	
	char *chr = strchr(sentence,let);
	if(chr != NULL){
		found = chr - sentence;
		printf("first %c found at %d\n",let,found);	
	}
	else {
		printf("character not found\n");
	}
	
	char *word = strstr(sentence, "good");
	if(word != NULL){
		printf("word 'good' is found \n");
	}
	else{
		printf("word good is not found");
	}
	return 0;
}
