#include <stdio.h>

int getGCD (int x, int y){

	int temp,min,max;
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

void main(){
	
	int a,b,GCD;
	printf("Enter Two Numbers :");
	scanf("%d %d",&a,&b);
	GCD = getGCD(a,b);
	printf("GCD is %d \n",GCD);
}