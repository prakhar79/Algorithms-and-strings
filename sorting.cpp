/**
 *This program contains implimentation of different sorting alogrythms.
 */

#include <iostream>
#include <stdio.h>

using namespace std;

class doSort
{
    public:
        void mergeSort(int arr[],int len);
};

/*void doSort :: mergeSort(int arr[],int ref =0)
{
    int len = len(arr)/len(arr[0]);
    int mid;
    int left[mid],right[len-mid];
    int i,j=0,k;
    for (i=0;i<min;i++)
    {
        left[i] = arr[j];
        j++;
    }
    for (i=0;i<len-min;i++)
    {
        left[i] = arr[j];
        j++;
    }
    mergeSort(left,0);
    mergeSort(right, ref + mid);

    left = len/2;
    right = len-left;

    mergeSort(left);
    mergeSort(right);

    i=0;
    j=0;
    k=

} */

void doSort :: mergeSort(int *arr,int len)
{
    int mid = len / 2;
    left = *arr;
    right = *arr + mid;
    mergeSort(left, mid);
    mergeSort(right, len - mid);
}

int main()
{
    doSort sort;
    int a[]={1,24,2,4};
    sort.mergeSort(a,4);
}