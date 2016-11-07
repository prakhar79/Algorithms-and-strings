/* Given a number, you need to check whether any permutation of the number is divisible by 8 or not. Print Yes or No.

Input:
The first line of input contains a single integer T denoting the number of test cases. 
Then T test cases follow. Each test case consist of one line. The first line of each test case consists of an integer N.

Output:
Corresponding to each test case, in a new line, print Yes if divisible by 8, else No. */ 

#include <stdio.h>

int main() {
	int count,i;
	scanf("%d",&count);
	string testcase[count][6];
	for (i=0;i<count;i++)
	    gets(testcase[i]);

	
	
	return 0;
}