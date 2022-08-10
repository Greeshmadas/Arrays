#include<stdio.h>
int main()
{
	int a[5]={22,5,6,12,17};
	int i,j,big;
	big=a[0];

	printf("array is\n");

	for(i=0;i<5;i++)
		printf("%d  ",a[i]);
	printf("\n---------------------------------------\n");
	for(i=1;i<5;i++)
	{
		if(a[i]>big)
			big=a[i];

	}
	printf("biggest in the array=%d\n",big);



}
