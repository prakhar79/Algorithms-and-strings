/**
 *This program contains implimentation of different sorting alogrythms.
 */

#include <iostream>
#include <stdio.h>

using namespace std;

class doSort
{
    public:
        void mergeSort(int arr[],int start,int stop);
};

void mergeSortHelper (int arr[],int l,int r,int mid)
{
    int i,j,k;
    int ll=mid-l+1,rl=r-mid;
    int left[ll],right[rl];

    for(i=0;i<ll;i++)
        left[i] = arr[l+i];
    for(i=0;i<rl;i++)
        right[i] = arr[mid+1+i];

    i=j=0;
    k=l;

    while (i<(ll) && j<rl)
    {
        if (left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
        }
        else
        {
            arr[k]=right[j];
            j++;
        }
        k++;
    }

    while(i<ll)
    {
        arr[k]=left[i];
        i++;
        k++;
    }

    while(j<rl)
    {
        arr[k]=right[j];
        j++;
        k++;
    }

}

void doSort :: mergeSort(int arr[],int il,int ir)
{

    if (il < ir)
    {
        int mid = il +((ir-il)/2);
        mergeSort(arr,il,mid);
        mergeSort(arr,mid+1,ir);

        mergeSortHelper(arr,il,ir,mid);
    }
}

int main()
{
    doSort sort;
    int i;
    int a[]={1,2,3,4,78,6,7,8};
    sort.mergeSort(a,0,(sizeof(a)/sizeof(a[0]))-1);
    for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        cout<<a[i] << " " ;
    }
}