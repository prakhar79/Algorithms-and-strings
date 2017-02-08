'''
This program will say if the given strings are anagrams or not.
'''
def anagram(str1,str2):
    temp1 = str1
    temp2 = str2

    if str1==str2=='':
        return False

    for i in str1:
        if i in str2:
            if len(temp1) == len(temp2):
                temp1=temp1.replace(i,'')
                temp2= temp2.replace(i, '')
            else:
                return False
        else:
            return False
    return True

print anagram('','')