#include<stdio.h>
int main()
{
	int a[5],i,j,ele,temp;
	ele=sizeof(a)/sizeof(a[0]);

	printf("eneter the elements\n");

	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("ARRAY BEFORE REVERSING\n");
	printf("\n-----------------------------------------\n");

	for(i=0;i<ele;i++)
		printf("%d  ",a[i]);

	printf("\n");

	j=ele-1;

	for(i=0;i<ele/2;i++)
	{
		temp=a[i];
		a[i]=a[j-i];
		a[j-i]=temp;
	}

	printf("ARRAY AFTER REVERSING\n");
	printf("\n-----------------------------------------\n");


	for(i=0;i<ele;i++)
		printf("%d  ",a[i]);
	printf("\n");

}
