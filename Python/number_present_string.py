'''
Return string form of an integer between 0-999,999
123 = one hundred twenty three
'''

d = {0:'zero',1:'one',2:'two',3:'three',4:'four',5:'five',6:'six',7:'seven',8:'eight',9:'nine',10:'ten',
11:'eleven',12:'twelve',13:'thirteen',14:'fourteen',15:'fifteen',16:'sixteen',17:'seventeen',18:'eighteen',19:'nineteen',
20:'twenty',30:'thirty',40:'forty',50:'fifty',60:'sixty',70:'seventy',80:'eighty',90:'ninty',100:'hendred',1000:'thousand'}

def numToString100s(n):
	str100 = ''
	if (n==0):
		return '' 
	if(n/100 !=0):
		str100 = str100 + d[n/100] + ' ' + d[100] + ' '
		n = n%100
	if(n%100 == 0):
		return str100
	if(n<=20):
		return str100 + d[n]
	return str100 + d[(n/10)*10] + ' ' + d[n%10] +' '


def ret_numToString(n):
	if n==0 :
		return d[0]
	strRet = ''
	if (n>=1000):
		strRet = strRet + numToString100s(n/1000) + ' '
		strRet = strRet + d[1000] + ' '
	strRet = strRet + numToString100s(n%1000)
	return strRet

print ret_numToString(12348)

