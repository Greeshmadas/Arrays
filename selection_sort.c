#include<stdio.h>
int main()
{
	int arr[10],i,j,ele,temp;
	ele=sizeof(arr)/sizeof(arr[0]);

	printf("enter the elements of the array\n");
	for(i=0;i<ele;i++)
		scanf("%d",&arr[i]);
	printf("array before sort\n");
	printf("\n-------------------------------------\n");
	for(i=0;i<ele;i++)
		printf("%d  ",arr[i]);
	printf("\n");

	for(i=0;i<ele-1;i++)
	{
		for(j=i+1;j<ele;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	printf("array after sort\n");
	printf("\n-------------------------------------\n");
	for(i=0;i<ele;i++)
		printf("%d  ",arr[i]);
	printf("\n");
}
