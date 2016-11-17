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

void matrix :: replaceWithZero(int *mat,int l)
{
    int i,j,k;
    for (i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            if (mat[i][j]==0)
            {
                for(k=0;k<l;k++)
                {
                    mat[i][k] = 0;
                    mat[k][j] = 0;
                    return;
                }
            }
        }
    }
}

int main()
{
    matrix m;
    int i,j,l=5;

    int arr[5][5] =
            {
                    {1,2,3,4,5},
                    {1,2,3,4,5},
                    {1,2,0,4,5},
                    {1,2,3,4,5},
                    {1,2,3,4,5}
            };
    int (*p)[5] = arr;
    int *p2;
    p2=p;
    m.replaceWithZero(p2,l);
    for (int i;i<l;i++)
    {
        for(int j ; j<l;j++)
            cout << arr[i][j];
        cout << endl;
    }
}