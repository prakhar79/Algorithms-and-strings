'''
Write a program to bold a sub string in HTML web page.
'''
def bold_substring(string,sub_string):
	ls=len(sub_string)
	lista=[]
	for i in range(len(string)-ls+1):
		if((string[i:i+ls]) == sub_string):
			lista.append(int(i))

	for j in range(len(lista)):
		lista[j] = lista[j] + int(7*j)	

	for i in lista:
		string = string[:i] +'<b>'+string[i:i+ls]+'</b>'+string[i+ls:]
	return string



string = "HelloWorld HelloWorld"
sub_string = ['rl','el','o']

for i in sub_string:
	string = bold_substring(string,i)
	print string