#include<stdio.h>
int main()
{
	int a[10],i,j,odd=0,even=0,ele;
	ele=sizeof(a)/sizeof(a[0]);

	printf("eneter the elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	printf("the array is\n");
	printf("\n---------------------------------------------\n");
	for(i=0;i<ele;i++)
		printf("%d  ",a[i]);

	printf("\n");

	for(i=0;i<ele;i++)
	{
		if(a[i]%2==0)
			even++;
		else
			odd++;


	}
	printf("number of even elements=%d\n number of odd elements=%d\n",even,odd);
	


}
