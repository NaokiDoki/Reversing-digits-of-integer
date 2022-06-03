#include <stdio.h>

int main()
{
	int x,rem,rev=0;
	printf("Enter a number: ");
	scanf("%d",&x);
	while (x>0){
		rem = x%10;
		rev = rev*10+rem;
		x = x/10;
	}
	printf("\nthe reversed number is %d",rev);
	return 0;
}
