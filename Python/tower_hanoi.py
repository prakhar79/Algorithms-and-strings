'''
Tower of hanoi.
'''

def towerOfHanoi(n,peg1,peg2,peg3):
	if(n==1):
		print "Move disk 1 from peg %c to peg %c." % (peg1,peg2)
		return
	towerOfHanoi(n-1,peg1,peg3,peg2)

	print "Move disk %d from peg %c to peg %c." %(n,peg1,peg2)

	towerOfHanoi(n-1,peg3,peg2,peg1)


towerOfHanoi(3,'A','B','C')