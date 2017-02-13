/**
 *This program contains implimentation of different sorting alogrythms.
 */

#include <iostream>

using namespace std;

class Sort
{
    public:
        void insertionSort(int* array,int len);
        void MergeSort(int* array,int a, int b);

    private:
        void merge(int* array,int a,int mid,int b);
};

/*
Insertion  sort the most basic sorting algorithm. 
I have implemented it for an array. 
*/

void Sort :: insertionSort(int* array,int len)
{
    int key;
    int i,j;

    for(i=0;i<len;i++)
    {
        j=i;
        for (;j>0 && array[j] < array[j-1];j--)
        {
            key=array[j];
            array[j]=array[j-1];
            array[j-1]=key;
        }
    } 
}

/*
Merge sort uses devide and conqure apporoach to sort an array. 
It needs array with three reference points. 
a = starting
m = mid point
b = end point 
*/

//This function is used to merge the arrays into one. 

void Sort :: merge(int* array,int a,int mid,int b)
{
    int i,j,k;
    int n1,n2;
    n1 = (mid-a) + 1;
    n2 = b-mid;

    int L[n1],R[n2];

    for(i=0;i<n1;i++)
        L[i]=array[a+i];
       
    for(i=0;i<n2;i++)
        R[i]=array[mid+1+i];

    i=j=0;
    k=a;

    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            array[k]=L[i];
            i++;
        }
        else
        {
            array[k]=R[j];
            j++;
        }+
        k++;
    }
    while(i<n1)
    {
        array[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        array[k]=R[j];
        j++;
        k++;
    }
}

//To initalize merge sort we need a helper function called MergeSort.
//This fucntion will make an initial call.

void Sort :: MergeSort(int* array,int a,int b)
{
    if(a<b)
    {
        
        int m = a+(b-a)/2;
        MergeSort(array,a,m);
        MergeSort(array,m+1,b);

        merge(array,a,m,b); 
    }
} 


int main()
{
    Sort s;
    int i;
    int a[]={-1,-5,4,3,4,6,7,8,0,-13};
    int len_array = (sizeof(a)/sizeof(a[0]));

    //s.insertionSort(a,len_array);
    s.MergeSort(a,0,len_array-1);
   for(i=0;i<len_array;i++)
     {
        cout<<a[i] << " " ;
    }
    return 1;
}