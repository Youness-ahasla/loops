#include <stdio.h>

void main(){
	
	int som, max, a;
	som = 0;
	max = 0;
	a = 1;
	
	printf("Enter a series of numbers and enter 0 to close the program:\n");
	
	while(a!=0)
	{
		do{
			scanf("%d", &a);
			if(a>100) printf("Please enter a number below 100.");
		}while (a>100);
		som+=a;
		if(a>max) max = a;
	}
	
	printf("The sum is: %d\n", som);
	printf("The max is: %d\n", max);
	return 0;
}
