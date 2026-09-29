# include<stdio.h>
int main()
{
	int a, b;
	printf("=====SWAP USING BITWISE XOR=====\n");
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("\nBefore Swapping:\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\nAfter Swapping:\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	return 0;
}
	
