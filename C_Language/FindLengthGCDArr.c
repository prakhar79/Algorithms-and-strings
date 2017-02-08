#include <stdio.h>

int getGCD (int x, int y){

	int temp,min,max;
	if (x==y) 
		return x;
	
	if (x>y) 
		min = y;
	else 
		min = y;

	while(min >1) {
		if (x%min == 0 && y%min==0)
			return min;
		min--;
	}
	
	return 1;
}

void main(){
	
	int testcase,G,n;
	int i,j,k;
	int data[100],GCD,min=2,count=0;
	scanf("%d",&testcase);
	int out[testcase];
	
	for (i=0;i<testcase;i++){

		scanf("%d",&G);
		scanf("%d",&n);
		min = n+1;
		for(j=0;j<n;j++){
			scanf("%d",&data[j]);
		}
		for(j=0;j<n;j++){
			GCD = getGCD(data[j],G);
			if(GCD == 0)
				count++;

			if (GCD != G || j== n-1){
				for(k=count)
				count = 0;
				continue;
			}
			}
		}
		
	}
	printf("%d\n",min);
}