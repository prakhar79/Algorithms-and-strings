'''
Find the cross over point of line.
'''

def calculateSlope(p1,p2):
	if(p1[0]==p2[0]):
		return 
	if(p1[1]==p2[1]):
		return 0
	m = float((p1[1]-p2[1]))/(p1[0]-p2[0])
	return m

def findConstant(p,m):
	if(m==None):
		return p[0]
	if(m==0):
		return p[1]
	return (p[1]-(m*p[0]))

def find_crossOver(ps1,pe1,ps2,pe2):
	
	crossPoint = [0,0]

	m1 = calculateSlope(ps1,pe1)
	m2 = calculateSlope(ps2,pe2)

	print m1
	print m2

	c1 = findConstant(ps1,m1)
	c2 = findConstant(ps2,m2)

	print ('Y = X + %d' %(c1))
	print ('Y = %d X + %d' %(m2,c2))

	if(m1==m2 and c1==c2):
		print "Same lines all points are on same line."
		return 
	if(m1==m2 and c1!=c2):
		print "Parallel lines found. They can not crossover."
		return -1
	if(m1== None):
		crossPoint[0] = ps1[0]
		crossPoint[1] = (m2*crossPoint[0]) + c2
		return crossPoint
	if(m2== None):
		crossPoint[0] = ps2[0]
		crossPoint[1] = (m1*crossPoint[0]) + c1
		return crossPoint
 

	return crossPoint


print find_crossOver([5,1],[5,5],[10,1],[5,5])