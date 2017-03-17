/*
Input  : s = "getting good at coding needs a lot of practice"
Output : s = "practice of lot a needs coding at good getting"

*/


#include <iostream>
#include <string>

using namespace std;

void reverse_string_space(string *s){
	l = s.length();

	int begin = 0;
	int end = 0;

	for(i=0;i<l;i++){
		if(s[i] == ' '){
			end = i-1;
			reverse_word(s,begin,end);
			begin = i+1;
		}
	}
}

void reverse_word(string *s,int start,int end){
	while(start <= end){

		char temp;
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}



int main(){

	string s = "getting good at coding needs a lot of practice";

	

	return 0;
}