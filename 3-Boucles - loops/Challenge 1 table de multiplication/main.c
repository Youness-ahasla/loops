#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i, num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for(i = 1; i <= 10; i++){
		printf("%d * %d = %d \n",num, i, num*i);
	}
		
	return 0;
}
