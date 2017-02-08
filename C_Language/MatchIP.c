#include <stdio.h>
#include <math.h>
#include <string.h>

int ipmatch (char ip[15]) {
    int i,count=0,pos=0,j,mod;
    int total;

    for (i=0;ip[i]!='\0';i++){
        if(ip[i]=='.') {
            if (ip[i + 1] == '.')
                return 0;
            count++;
        }
    }

    if (count !=3 || ip[0] == '.' || ip[i-1] == '.')
        return 0;
    if(count == 3) {
        for (i=0;ip[i]!='\0';i++){
            mod = 0;
            total = 0;
            if(ip[i+1]=='.' || ip[i+1] == '\0'){
                for(j=i;j>=pos;j--) {
                    total = total + (pow(10,mod) * (ip[j] - 48));
                    mod++;
                }
                if (total>255)
                    return 0;
                pos = i+2;
            }

        }

    }
    return 1;

}

void main () {
    int val,query=1,i;
    char ip[15];

        val = ipmatch("0.0.0.0");
        printf("%d \n",val);

}