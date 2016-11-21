/*
This program contains algorhytms to find GCD of two numbers. 
*/

#include <stdio.h>


// Interatative algohytm

int getGCD (int x, int y){

	int min,i=0;
	if (x==y) 
		return x;
	
	if (x>y) 
		min = y;
	else 
		min = y;

	while(min >=1) {
		if (x%min == 0 && y%min==0)
		{	
			printf("Interative : GCD found in %d loops. \n",i );
			return min;
		}
		min--;
		i++;
	}
	printf("Interative : GCD found in %d loops. \n",i );
	return 1;
}


// Eclidian Algorhyth to find GCC. 

int EuclidianGCD(int a,int b)
{
	int rem,divs=1;
	int min,max,i=0;
	if(a==b)
		return a;
	else if (a<b)
	{
		max=b;
		min=a;
	}
	else
	{
		max=a;
		min=b;
	}

	while(1)
	{
		i++;
		
		rem = max%min;
		divs = (max-rem)/min;
		
		//printf("%d = %d * %d + %d \n",max,divs,min,rem);
		
		if (rem == 0)
		{
			printf("Euclidian : GCD found in %d loops. \n",i );
			return min;
		}
		
		max=(max-rem)/divs;
		min = rem;
		 
	}
}
int main(){
	
	int GCD;
	int a=24140;
	int b=16762;
	GCD = getGCD(a,b);
	printf("GCD is %d \n",GCD);
	GCD = EuclidianGCD(a,b);
	printf("GCD is %d \n",GCD);
	

	return 0;
}