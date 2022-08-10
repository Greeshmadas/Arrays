#include<stdio.h>
int main()
{
	int a[10],i,j,num,ele,count=0;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the elements of the array\n");

	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	printf("enter the element to check\n");
	scanf("%d",&num);

	for(i=0;i<ele;i++)
	{
		if(a[i]==num)
			count++;

	}
	if(0 == count)
	{
		printf("%d does not exist in array\n",num);
	}
	else
	{
		printf("Number %d is found in the given array %d time(s)\n",num,count);	
	}
}
