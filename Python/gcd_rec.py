a = int(raw_input('Enter a number:'))
b = int(raw_input('Enter second number:'))

def gcdRecur(a,b):
    if b==0:
        return a
    return gcdRecur(b,a%b)
        
print (str(gcdRecur(a,b)))
