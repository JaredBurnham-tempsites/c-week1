#include <stdio.h>


FILE *fptr; //working with files require pointers FILE is a data type

int main(){
	char files[25] = "secretsoftheuniverse.txt";
	fptr = fopen(files, "r");
	if(fptr == NULL){printf("not able to open file");}
	else{
		char content[100];
		while(fgets(content, 100, fptr)){
			printf("%s",content);
		}
		fclose(fptr);
	}

	fptr = fopen(files, "w");
	fprintf(fptr,"dark energy is just dah blood flow XD dark matter is just gray matter just remember up and down down and up in and out out and in");
	fclose(fptr);
	fptr = fopen(files, "a");
	fprintf(fptr, "\n hey we just added instead of overwritting yay");
	fclose(fptr);
}


