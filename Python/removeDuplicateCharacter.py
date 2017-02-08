'''
This program will remove duplicate characters from the strings.
'''

def removeDuplicates(s):
    if s=='':
        return ''
    if len(s)==1:
        return s
    return s[0]+removeDuplicates(s[1:].replace(s[0],''))

print removeDuplicates ('aabberghrogns;gns;gn;;cc')