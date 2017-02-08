'''
Covert a list of string into one string and vice versa.
'''
def convertToString(list):
	return (',').join(list)
def convertToList(string):
	return string.split(',')

list = ['apple' ,'orange' ,'banana']

string = convertToString(list)
print convertToList(string)
