#include<stdio.h>

void main()
{
	int testcase,n;
	int i,k,j;
	int rep,miss,total,match;
	scanf("%d",&testcase);
	for (i=0;i<testcase;i++)
	{
		scanf("%d",&n);
		int arr[n];
		total = 0;
		match = 0;
		for(j=0;j<n;j++){
			scanf("%d",&arr[j]);
			total = total + arr[j];
		}
		for(j=0;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(arr[j]==arr[k])
				{
					rep = arr[j];
					match++;
					break;
				}
			}
			if (match >0)
					break;
		}
		miss = (n*(n+1)/2)-total + rep;
		printf("%d %d %d \n",rep,miss);
	}
}