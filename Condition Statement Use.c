#include<stdio.h>
#include<conio.h>
int main()
{
	int age;
	printf("enter your age");
	scanf("%d",&age);
	
	if (age<18)
	{
		printf("you are not eligible to vote");
	}
	if (age>=18)
	{
		printf("you are eligible to vote");
	}
	if (age%2==0)
	{
		printf("\n even");
	}
	if (age%2!=0)
	{
		printf("\n odd");
	}
	return 0;
}
