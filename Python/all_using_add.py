'''
Use only add operator to create functions to 
add,substract,multiply and devision.

NOTE EXTAXT IMPLIMENTATION LEFT
'''

def addition(a,b):
	return a+b

def substraction(a,b):
	ans = 0
	minimum = min(a,b)
	maximum = max(a,b)

	while(minimum+ans < maximum):
		ans+=1
	return ans

def multiplication(a,b):
	mul=0
	sign = (a >> 31 ^ b >> 31)
	print sign
	while(b != 0x00 and b!= ~(0x01-1)):
		if(b & 0x01):
			mul = mul +a
		a = a <<1
		b = b >>1
	return mul

print addition(5,1)
print substraction(-5,4)
print multiplication(-55,100)