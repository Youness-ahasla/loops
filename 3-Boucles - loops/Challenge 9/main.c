#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int a, b, i, result;
		
	printf("Enter number A: ");
	scanf("%d", &a);
	
	printf("Enter number B: ");
	scanf("%d", &b);
	
	
	if(a > 0 && b >= 0){
		while(i<b){
			//result=a*a;
			result*=a;
			i++;
		}
		printf("result: %d", result);
	}
	

	return 0;
}
