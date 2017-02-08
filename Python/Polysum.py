import math

n = int(raw_input('Enter Number of sides of Rectangular Polygon : '))
s = float(raw_input('Enter Length of each side : '))

def polysum(n,s):
    area = (0.25*n*s**2)/(math.tan(math.pi/n))
    perimeter = n*s
    return (area + (perimeter**2))

add = round (polysum(n,s),4)
print('Sum = ' + str(add))
