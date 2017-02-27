/*
Find the max j-i from an array where a[j] > a[i].
*/


#include <iostream>

using namespace std;

int findMaxDiffIndex(int* array,int len)
{
	int leftMin[len];
	int rightMax[len];
	int i,j;

	leftMin[0]=array[0];

	for(i=1;i<len;i++)
		leftMin[i]=(array[i] < leftMin[i-1] ? array[i] : leftMin[i-1]);

	rightMax[len-1] = array[len-1];

	for(j=len-2;j>=0;j--)
		rightMax[j]=(array[j] > rightMax[j+1] ? array[j] : rightMax[j+1]);

	i=j=0;
	int maxdiff = -1;

	while(i<len && j<len)
	{
		if(leftMin[i] <rightMax[j])
		{
			maxdiff = (maxdiff > j-i ? maxdiff : j-i);
			j++;
		}
		else 
			i++;
	}

	return maxdiff;
}


int main ()
{
	int a[] = {34,8,10,3,2,80,30,33,1};
	cout << findMaxDiffIndex(a,(sizeof(a)/sizeof(a[0]))); 

	return 0;
}
