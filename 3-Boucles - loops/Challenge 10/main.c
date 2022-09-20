#include <stdio.h>
#include <stdlib.h>

int ft_fibonachi(int n)
{
	int result;
	if (n == 0 || n == 1)
		result = n;
	else
		result = ft_fibonachi(n - 1) + ft_fibonachi(n - 2);
}

int main() {
	int a = 0;
	int b = 1;
	int n, result;
	int i = 0;
	printf("Enter the number: \n");
	scanf("%d", &n);
	result = ft_fibonachi(n);
	printf("Fibonachi is %d" ,result);
	return 0;
}
