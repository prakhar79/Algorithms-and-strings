/*
Given an array of n containing 0, 1 and 2. 
Are arrange array by sending all 0's to left, 1's in middle
and 2's on right. 

input = {1,1,2,0,0,1,2,0}

output = {0,0,0,1,1,1,2,2}
*/

#include <iostream>
#include <algorithm>

using namespace std;

void sort_0_1_2(int *array,int l){

	int front= 0,mid = 0;
	int last = l-1;


	while(mid <= last){

		if(array[mid] == 0){
			swap(array[mid],array[front]);
			front++;
			mid++;
		} else if(array[mid] == 1){
			mid++;
		} else if(array[mid] == 2){
			swap(array[mid],array[last]);
			last--;
		}
	}
}

void sort_0_1 (int *array,int l){

	int front = 0;
	int back = l-1;

	while(front < back){
		if(array[front] == 0){
			front++;
		} if(array[front] == 1){
			swap(array[front],array[back]);
			back--;
		}
	}
}



int main(){

	int a[] ={1,2,1,2,1,0,0,0,1,2,0,2};
	int b[] = {0,0,1,0,1,1,0,0,1,1,0,1,0};

	int l = sizeof(a)/sizeof(a[0]);
	int m = sizeof(b)/sizeof(b[0]);

	sort_0_1_2(a,l);
	sort_0_1(b,m);

	for(int i=0;i<l;i++)
		cout << a[i] << ' ';
	cout << endl;

	for(int i=0;i<m;i++)
		cout << b[i] << ' ';
	cout << endl; 


	return 0;
}