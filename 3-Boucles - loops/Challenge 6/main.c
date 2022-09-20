#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int num, i , j, z;
	
	printf("Enter a number : \n");
	scanf("%d", &num);
	
	
	for (i = 2; i <= num; i++){
		z = 1; 
		for(j = 2; j <= i; j++)
		{
			if(j % i != 0)
			{
				z = 0;
			}
		}
		
		if(z == 1){
		printf("%d is prime.\n", i);
		}
	
	}
	
	
	return 0;
}
