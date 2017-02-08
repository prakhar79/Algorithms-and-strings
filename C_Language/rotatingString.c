/*
This program will chceck if a string is rotation of given string or not.
*/

#include <stdio.h>
#include <string.h>

int isReverse(char *s1,char*s2)
{
	int i;
	int l=strlen(s1)-1;
	if (strlen(s1)!=strlen(s2))
		return 0;
	for(i=0;i<strlen(s1);i++)
	{
		if(s1[i] != s2[l])
			return 0;
		l--;
	}
	return 1;
}

void main()
{
	char s1[]="stringa";
	char s2[]="gnirts";

	printf("%d \n",isReverse(s1,s2));
}