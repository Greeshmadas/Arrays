#include<stdio.h>
int main()
{
	int a[10],i,j,ele,count=0;
	ele=sizeof(a)/sizeof(a[0]);
	
			printf("enter the numbers\n");
			for(i=0;i<ele;i++)
				scanf("%d",&a[i]);
			printf("\nArray is\n");
			for(i=0;i<ele;i++)
				printf("%d  ",a[i]);
			printf("\n");

			printf("\n----------------------------------------------\n");
			
			for(i=0;i<ele;i++)
			{
				for(j=2;j<a[i];j++)
				{
					if(a[i]%j==0)
						break;			
				}
				if(a[i]==j)
					count++;


			}
			printf("count=%d\n",count);


return 0;
}
