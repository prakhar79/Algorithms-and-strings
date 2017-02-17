'''
Find maximum without using if or any comparison 
operator.
'''

def find_max(a,b):
	c = a-b
	k = (c >> 31) & 0x01
	max = a - c*k
	return max

print find_max(13232,3)