'''
Given five positive integers, find the minimum and maximum values that can 
be calculated by summing exactly four of the five integers. Then print the 
respective minimum and maximum values as a single line of two 
space-separated long integers.

Sample Input
1 2 3 4 5
Sample Output
10 14
'''

a,b,c,d,e = raw_input().strip().split(' ')
a,b,c,d,e = [int(a),int(b),int(c),int(d),int(e)]

max_num = a+b+c+d+e - min(a,b,c,d,e)
min_num = abs(a+b+c+d+e - max(a,b,c,d,e))

print('%d %d' % (min_num,max_num))