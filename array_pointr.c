#include<stdio.h>
int main()
{
	int a[5]={3,1,5,7,8};
	int i,*p;
	p=a;
	printf("p=%u\n,a=%u\n",p,a);
	for(i=0;i<5;i++)
	{	printf("%d  ",*p++);

	//	printf("%d  ",p[i]);
	}
	printf("\n");
}
