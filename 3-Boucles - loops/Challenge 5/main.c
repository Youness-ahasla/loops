#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char nbr[50];
	int len = 0;
	
	printf("Entrer a number :\n");
	scanf("%s", nbr);
	
	while (nbr[len])
		len++;
	while (len--)
		printf("%c", nbr[len]);
		
	//for(i=len;i<0;i--){
	//	printf("%c", nbr[i]);
	//}	
	
	
	return 0;
}
