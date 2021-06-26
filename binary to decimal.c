// Binary --> Decimal

#include<stdio.h>
void main()
{
	int binary_n=0,remainder,decimal_n=0,i=0;
	printf("\n Enter the binary number: ");
	scanf("%d",&binary_n);
	
	while(binary_n != 0)
	{
		remainder = binary_n % 10;
		decimal_n += remainder * pow(2,i);
		binary_n /= 10;
		i++;
	}
	
	printf("\n The decimal equivalent = %d ",decimal_n);
	
}
