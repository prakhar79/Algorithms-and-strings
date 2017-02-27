#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int get_max(int *mat[],int n) {
    int i,j;
    int sum=0;
    int max = 0;

    for(i=0;i<n/2;i++){
        int m=0;
        for(j=0;j<n/2;j++){
            
            m = (*(mat[i]+j) > *(mat[n-1-i]+n-1-j) ? *(mat[i]+j) : *(mat[n-1-i]+n-1-j));
            m = (m > *(mat[i]+n-1-j) ? m : *(mat[i]+n-1-j));
            m = (m > *(mat[n-1-i]+j) ? m : *(mat[n-1-i]+j));

            sum = sum +m;
        }
    }
    return sum;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    int n;
    cin >> n;
    n = n*2;
    int mat[n][n];
    int i,j;
   
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            cin >> mat[i][j];
        }
    }
    int* matp[n];
    
    for(i=0;i<n;i++){
        matp[i] = &mat[i][0];
    }
    
    cout << get_max(matp,n) << endl;
    
    return 0;
}
