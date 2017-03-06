/*
Longest subsequence in two given strings
*/

#include <stdio.h>
#include <string.h>


int longest_common_subsequence(char *str1,char *str2){
	int l1 = strlen(str1);
	int l2 = strlen(str2);
	int mat[l1+1][l2+1];
	int i,j;


	for(i=0;i<=l1;i++){
		for(j=0;j<=l2;j++){
			if(i==0 || j ==0){
				mat[i][j]=0;
				continue;
			}

			if(str1[i-1]==str2[j-1]){
				mat[i][j] = mat[i-1][j-1] +1;
			} else{
				mat[i][j] = (mat[i][j-1] > mat[i-1][j] ? mat[i][j-1] : mat[i-1][j]);
			}
		}
	}

	for(i=0;i<=l1;i++){
		for(j=0;j<=l2;j++)
			printf("%d ",mat[i][j]);
		printf("\n");
	}
	int count = mat[l1][l2];
	i = l1;
	j = l2;
	while(count > 0 || (i ==0 && j==0)){

		if(mat[i][j-1] < mat[i][j] && mat[i-1][j] < mat[i][j]){
			count--;
			printf("%c ",str2[j-1]);
			i--;
			j--;
		} else if (mat[i][j-1] < mat[i-1][j])
			i--;
		else
			j--;

	}
	return mat[l1][l2];

}

int main(){
	
	char str1[] = "CAB";
	char str2[] = "ABC";
	int count;

	count = longest_common_subsequence(str1,str2);

	printf("%d\n",count);


	return 0;
}