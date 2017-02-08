'''
Giving a string and an string dictionary, find the longest string in
dictionary which can formed by deleting some characters of the giving string.
eg:S = abpcplea, Dict = {ale, apple, monkey, plea}, the return "apple"
'''

dict = ['aple','le','aaabbbbccddd','applec']
str = 'abpcle'

str2=''
for i in dict:
	temp = str[:]
	m=1
	for j in range(len(i)):
		if i[j] not in temp:
			m=0
			break
		temp=temp.replace(i[j],'',1)
		print(temp)
	if(m!=0) and len(i)>len(str2):
		str2=i[:]

print str2