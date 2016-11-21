/*
 * This programme wills take an array. The array has one zero inside, this program
 * replace all the element of same rows and column with zero.
 *
 * ASSUMPTION : there is only 1 zero in a nxn matrix
*/

#include <iostream>
#include <stdio.h>
using namespace std;

class matrix
{
    public:
        void replaceWithZero(int *mat, int l);
};

void doZeros(int *mat,int raw,int column,int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        *((mat+i*len)+column)=0;
        *((mat+len*raw)+i)=0;

    }
}

void matrix :: replaceWithZero(int *mat,int l)
{
    int i,j;
    for(i=0;i<l;i++)
    {
        for (j=0;j<5;j++)
            if (*((mat+i*l)+j)==0)
            {
                doZeros(mat,i,j,l);
                return;
            }
    }
}

int main()
{
    matrix m;
    int i,j,l=5;
    int *p[5];

    int arr[5][5] =
            {
                    {0,2,3,4,5},
                    {1,2,3,4,5},
                    {1,2,1,1,5},
                    {1,2,3,4,5},
                    {1,2,3,4,7}
            };
    
    m.replaceWithZero((int *)arr,l);
    for (i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
            cout<<arr[i][j] << " ";
        cout<<endl;
    }
}