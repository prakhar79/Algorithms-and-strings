'''
find numbers of zeros in a fectorial.
'''


def find_zeros(n):
	count = 0
	i=5
	while(n/i >= 1):
		count+= n/i
		i*=5
	return count

print find_zeros(20)