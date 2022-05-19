#include<stdio.h>
#include<stdlib.h>

int a[10],top=-1,max=10,pushchoice,popchoice,pushvalue,popvalue,i;

void push();
void pop();
void print();

int main()
{
	push();
	print();
	pop();
	print();
}
		
void push()
{
	printf("\nHow many items do you want to push?\n");
	scanf("%d",&pushchoice);
	printf("Enter values to be pushed\n");
	if(pushchoice>max)
	{
		printf("\nStack Overflowed");
		return;
	}
	for(i=0;i<pushchoice;i++)
	{
		top++;
		scanf("%d",&pushvalue);
		a[top]=pushvalue;
	}
}

void pop()
{
	printf("\nHow many times do you want to Pop?\n");
	scanf("%d",&popchoice);
	if((max-popchoice)<0)
	{
		printf("\nStack Underflowed");
		exit(1);
	}
	while(popchoice)
	{
		top--;
		popchoice--;
	}
}

void print()
{
	printf("\nYour stack is \n");
	for(i=top;i>=0;i--)
		printf("  \n%d\n",a[i]);
}
