/*
knapsack problem.
*/

#include <iostream>

using namespace std;

int knapsack(int* item_weight,int* item_value,int max_weight,int num_items) {
	
	int temp[num_items+1][max_weight+1];
	int i,j;

	for(i=0;i<=num_items;i++){
		for(j=0;j<=max_weight;j++) {

			if(j==0 || i==0)
				temp[i][j] = 0;
			else if (item_weight[j] <= j)
				temp[i][j] = max((item_value[i-1] + temp[i-1][(j -item_weight[i-1])]),temp[i-1][j]);
			else 
				temp[i][j] = temp[i-1][j]; 
		}
	}
	return temp[num_items][max_weight];
}



int main() {

	int item_weight[] = {10,20,30};
	int item_value[] = {60,100,120};
	int max_weight = 50;
	int num_item = sizeof(item_value)/sizeof(item_value[0]);

	cout << knapsack(item_weight,item_value,max_weight,num_item) << endl;
}