/*
Median of two sorted arrays.
*/

#include <iostream>

using namespace std;

float median2sortedArray(int* a,int astart,int astop,int *b,int bstart,int bstop)
{
	
	int mid1 = (astop + astart)/2;
	int mid2 = (bstop + bstart)/2;
	float median = -1;

	if(a[mid1] == b[mid2])
	{
		return a[mid1];
	}
	if(astop - astart + bstop - bstart <= 4)
	{
		median = (max(a[astart],a[astop-1]) + min(b[bstart],b[bstop-1]))/float(2);
		return median;
	}
	else if (a[mid1] < b[mid2])
		median = median2sortedArray(a,mid1,astop,b,bstart,mid2+1);
	else
		median = median2sortedArray(a,astart,mid1+1,b,mid2+1,bstop);

}


int main()
{
	int a[]= {1,2,3,4,5};
	int b[]= {1,2,3,4,5};

	int l = sizeof(a)/sizeof(a[0]);

	cout << median2sortedArray(a,0,l,b,0,l) << endl;

	return 0;
}