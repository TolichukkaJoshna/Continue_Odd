#include<stdio.h>
main()
{
	int i,n;
	printf("enter a number..:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			continue;
		}
		printf("%d\n",i);
	}
}
