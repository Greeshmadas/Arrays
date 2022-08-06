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
	printf("the number of occurance f %d in the given array is %d\n",num,count);





}
