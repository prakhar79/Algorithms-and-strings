#include <stdio.h>

int getGCD (int x, int y){

	int min;
	if (x==y) 
		return x;
	
	if (x>y) 
		min = y;
	else 
		min = y;

	while(min >=1) {
		if (x%min == 0 && y%min==0)
			return min;
		min--;
	}
	
	return 1;
}

int main(){
	
	int a,b,GCD;
	printf("Enter Two Numbers :");
	scanf("%d %d",&a,&b);
	GCD = getGCD(a,b);
	printf("GCD is %d \n",GCD);

	return 0;
}