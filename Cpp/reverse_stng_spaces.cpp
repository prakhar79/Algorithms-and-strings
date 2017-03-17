/*
Input  : s = "getting good at coding needs a lot of practice"
Output : s = "practice of lot a needs coding at good getting"

*/


#include <iostream>
#include <string>

using namespace std;


void reverse_word(char *s,int start,int end){
	while(start <= end){

		char temp;
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}



void reverse_string_space(char *s,int l){

	int begin = 0;
	int end = 0;

	for(int i=0;i<=l;i++){
		if(s[i] == ' ' || s[i] == '\0' ){
			end = i-1;
			reverse_word(s,begin,end);
			begin = i+1;
		}
	}
}




int main(){

	char s[] = "getting good at coding needs a lot of practice";
	int l = sizeof(s);

	reverse_string_space(s,l);

	cout << s << endl;

	reverse_word(s,0,l-2);

	cout << s << endl;

	

	return 0;
}