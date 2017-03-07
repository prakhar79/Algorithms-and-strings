/*
Catalan Numbers...

1. Number of possible BST using n nodes.
2. Number of possible mountains using n peaks.
*/

#include <stdio.h>

int possible_trees_recur(int node){
	if (node==0)
		return 1;
	int tree = 0;
	int i;
	for(i=1;i<=node;i++){
		tree = tree + (possible_trees_recur(i-1)*possible_trees_recur(node-i));
	}
	return tree;
}

int t[1024];

int possible_trees_dp_recur(int node){
	
	int i,j;

	if(node==1 || node ==0)
		return 1;

	t[0] = 1;
	t[1] = 1;
	t[node] = 0;
	for(i=2;i<=node;i++){
		t[node] += (possible_trees_dp_recur(i)*possible_trees_dp(node-i));
	}

	return t[node-1];
}



int possible_trees_dp(int node){
	int i,j;
	int table[node+1];
	table[0] = 1;
	table[1] = 1;

	for(i=2;i<=node;i++){
		table[i] = 0;
		for(j=0;j<i;j++)
			table[i] = table[i] + (table[j]*table[i-j-1]);
	}

	return table[node];
}

int main(){

	printf("%d \n",possible_trees_dp_recur(3));

	return 0;
}

