#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	This program copy the content of one .txt file to another
	
	You need to specify the file names when calling the program (source and destination)
*/

int main(int argc, char **argv) {
	
	char sourceFile[50], destinationFile[50];
	
	if(!argv[1] || !argv[2]) {
		printf("Required arguments not provided");
		return 0;
	}

	strcpy(sourceFile, argv[1]);
	strcat(sourceFile, ".txt");
	
	strcpy(destinationFile, argv[2]);
	strcat(destinationFile, ".txt");
	
	printf("File names: %s %s\n", sourceFile, destinationFile);
	
	FILE * source = fopen(sourceFile, "r");
	FILE * destination = fopen(destinationFile, "w");
	
	if(source == NULL || destination == NULL) {
		printf("Error when opening files");
		return 0;
	}
	
	char c = fgetc(source);
	
	do {
		if((c <= 'z' && c>= 'a') || (c <= 'Z' && c >= 'A'))
			fputc(c, destination);
			
		c = fgetc(source);
	} while(c != EOF);
	
	return 0;
}

