#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n, u0 = 1, u1= 1, i,un;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	
	
	for(i = 2; i <= n; i++){
		un = u0 + u1;
		u0 = u1;
		u1= un;
		
	}
	printf("U(%d) = %d", n, un);
	return 0;
}
