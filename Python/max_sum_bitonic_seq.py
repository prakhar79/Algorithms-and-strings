'''
Maximum Sum Bitonic Subsequence
Given an array of positive integers. A subsequence of A[] is called Bitonic if it is first increasing, then decreasing.

Input : A[] = {1, 15, 51, 45, 33, 100, 12, 18, 9}
Output : 194
Explanation : Bi-tonic Sub-sequence are :
             {1, 51, 9} or {1, 50, 100, 18, 9} or
             {1, 15, 51, 100, 18, 9}  or 
             {1, 15, 45, 100, 12, 9}  or 
             {1, 15, 45, 100, 18, 9} .. so on            
Maximum sum Bi-tonic sub-sequence is 1 + 15 +
51 + 100 + 18 + 9 = 194  
'''

'''def find_max_bitonic_sum(array):
	l = len(array)
	inc_sum = 0
	dec_sum = 0
	total_sum=0
	pre_big=0
	dec_total = 0
	for i in range(l):
		if total_sum > dec_total:
			p_dec_sum = dec_sum
			dec_sum = 0
		if(array[i]>=pre_big):
			pre_big = array[i]
			total_sum = total_sum + array[i]
			print total_sum
		else:
			dec_sum = dec_sum +array[i]
			dec_total = total_sum + dec_sum
	total_sum = total_sum + dec_sum
	return total_sum


print find_max_bitonic_sum([1, 15, 51, 45, 33, 100, 12, 18, 9])'''



def find_max_bitonic_sum(array):
	l = len(array)
	inc_sum = 0
	dec_sum = 0
	total_sum=0
	pre_big=0
	dec_total = 0

	for i in range(l):
		if(array[i] >= pre_big):
			total_sum = total_sum - dec_sum
			dec_sum = 0
			pre_big = array[i]
			total_sum = total_sum + array[i]
		else:
			if (array[i] < array[i-1]):
				dec_sum = dec_sum +array[i]
				total_sum = total_sum + array[i]
			else:
				total_sum = total_sum - dec_sum + array[i]
				dec_sum = 0
		print total_sum

	return total_sum

print find_max_bitonic_sum([1,15,51,45,33,100,12,18,9])