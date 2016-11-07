#include <stdio.h>

void main()
{
	int testcase,n;
	int i,j;
	int total,pt,max;
	scanf("%d",&testcase);
	for (i=0;i<testcase;i++)
	{
		scanf("%d",&n);
		int arr[n];
		total = 0;
		max = -100;
		pt = -100;

		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[j]);
			if(arr[j] <0)
			{
				max = (max > arr[j]? max : arr[j]);
				total = 0;
				pt = -100;
				continue;
			}
			total = total + arr[j];
			if( total < pt)
			{
				total = 0;
				pt = -100;
				continue;
			}
			max = (max > total ? max : total);
			pt = total;
			printf(" %d ",max);
		}
		//printf("%d\n",max );

	}
} 