'''
This program will reverse a string.
'''

def revString(s):
    if len(s) == 1:
        return s
    return s[-1]+revString(s[:-1])

print revString('aaaabc')