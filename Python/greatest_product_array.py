'''
Given an array of n elements, the task is to find the greatest number such 
that it is product of two elements of given array. If no such element exists, print -1. 
'''

def max_mul (array):
	max_in_array = -1
	for i in range(len(array)):
		j=i+1
		if (array[i]==1):
			return max(array)
		for j in range(len(array)):
			a = array[i]*array[j]
			if a in array and a > max_in_array:
				max_in_array = a
	return max_in_array

print max_mul([1,2,3,55,4])