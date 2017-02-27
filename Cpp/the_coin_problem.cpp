/*
Number of minumun coins needed from a list of coin to make sum S.
*/

#include <iostream>
#include <string.h>
#include <climits>

using namespace std;

int number_of_minimum_coins(int* list,int num_of_coins,int sum) {
	
	int table[sum+1];
	
	for(int i=0;i<=sum;i++)
		table[i] = INT_MAX;

	table[0] = 0;

	for(int i=1;i<=sum;i++) {
		for(int j=0;j<num_of_coins;j++) {
			if (list[j] <= i)  {
				int sub = table[i-list[j]];
				if(sub != INT_MAX && sub +1 < table[i])
					table[i] = sub+1;
			} 
		}
	}	

	for(int i=0;i<=sum;i++)
		cout << table[i] << ' ';

	return table[sum];
}

int main() {

	int list[] = {1,2};
	int l = sizeof(list)/sizeof(list[0]);
	int sum = 7;
	cout << number_of_minimum_coins(list,l,sum) << endl;


	return 0;
}