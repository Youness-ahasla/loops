#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int lines, i,j,space;
	printf("Enter number of lines: ");
	scanf("%d", &lines);
	
	for(i = 1; i <= lines; i++){
		for(space = lines; space >= i; space-- ){
			printf(" ");
		}
		for(j = 1; j <= i; j++){
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}
