'''
Replace 2 numbers without an extra variable.
'''



def replace_num(a):
	if a== []:
		return

	a[0] = a[0]+a[1]
	a[1] = a[0] - a[1]
	a[0] = a[0] - a[1]

	return a

print replace_num([-12,-2])