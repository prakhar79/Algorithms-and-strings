#include<stdio.h>
#include <string.h>
int main()
{
    char arr[100];
    char *ptr;
    int i,diff;
    int rep=0,len,n;
    int count=0;
    ptr = arr;
    scanf("%s", ptr);
    scanf("%d",&n);
    len = n/strlen(arr);
    for(i=0;i<strlen(arr);i++)
    {
        if (arr[i]=='a')
            rep++;
    }
    count = rep*len;
    for(i=0;i<(n%strlen(arr));i++)
    {
        if(arr[i]=='a')
            count++;
    }
    printf("%d \n",count);

}