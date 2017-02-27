/*
A sequence is given with increasing first and then decreasing order.
Find the point k where the squence starts decreasing
*/

#include <iostream>

using namespace std;


int getK(int* seq,int min,int max)
{
	int index = -1;
	int mid = (min+max)/2;

	if (seq[mid-1] < seq[mid] && seq[mid+1] < seq[mid])
		return mid;

	if(seq[mid-1] < seq[mid] && seq[mid+1] > seq[mid])
		index = getK(seq,mid+1,max);
	if (seq[mid-1] > seq[mid] && seq[mid+1] < seq[mid])
		index = getK(seq,min,mid-1);

	return index;
}



int main()
{
	int s[] = {1,2,3,4,5,6,7,8,9,10,7,6,4,3,2,1};
	cout << getK(s,0,15)<< endl;
	return 0;
}