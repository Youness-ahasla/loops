#include <stdio.h>

int main(){
    
    int num, i;
    int holder;
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    for(i = 2; i < num; i++){
    	if(num % i == 0){
    		holder = 1;
		}else{
			holder = 2;
		}
	}
	
	if(holder == 1){
		printf("Num is not prime.");
	}else{
		printf("Num is prime.");
	}
	
}
