a = int(raw_input('Enter a number:'))
b = int(raw_input('Enter second number:'))

def gcdIter(a,b):
    k=min(a,b)
    while True:
        if a%k == 0 and b%k==0:
            break
        else:
            k-=1
    return k

print (str(gcdIter(a,b)))
