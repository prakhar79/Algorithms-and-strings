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

    int i,j,temp;
    int mid = len / 2;
    int *left,*right;

    if (len<=0)
        return;

    
    for(i=0;i<len;i++)
    {
        cout<<*(arr+i) << " " ;
    }
    cout << endl;

    left = arr;
    right = (arr + mid);
    mergeSort(left, mid);
    if (len<=1)
        mergeSort(right, 0);
    else
        mergeSort(right, len-mid);
    i=0;
    j=0;
    while (i < mid && j < len-mid)
    {
        if(*(left+i) > *(right+j))
        {
            temp = *left;
            *left = *right;
            *right = temp;
            i++;
            j=0;
        }
        else
        {
            j++;
        }
    }


    
    
}

int main()
{
    doSort sort;
    int i;
    int a[4]={5,3,4,1,2};
    sort.mergeSort(a,4);
    for(i=0;i<4;i++)
    {
        cout<<a[i] << " " ;
    }
}