#include<stdio.h>
int main()
{
	int arr[10],i,j,temp,ele;
	ele=sizeof(arr)/sizeof(arr[0]);

	printf("enter the elements to the array\n");
	for(i=0;i<ele;i++)
		scanf("%d",&arr[i]);
	printf("The array before sort\n");
	printf("--------------------------------------\n");
	for(i=0;i<ele;i++)
		printf("%d  ",arr[i]);
	printf("\n");

	for(i=0;i<ele-1;i++)
	{

		for(j=0;j<ele-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;

			}
	}

	}

	printf("The array after sort\n");
	printf("--------------------------------------\n");
	for(i=0;i<ele;i++)
		printf("%d  ",arr[i]);
	printf("\n");
}
