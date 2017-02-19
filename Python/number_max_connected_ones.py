'''
number of maximum Connceting 1's.
'''

def getvalue(array,r,c,rmax,cmax):
	if(r < 0 or c < 0 or r >= rmax or c >= cmax):
		return 0
	else:
		return array[r][c]

def findMaximumBlock(array,r,c,rmax,cmax,watchedArray,size,maxsize):
	if(r>=rmax or c>=cmax):
		return 
	watchedArray[r][c] = 1	
	size+=1
	if(size>maxsize):
		maxsize = size

	directions = [[-1,0],[-1,-1],[0,-1],[1,-1],[1,0],[1,1],[0,1],[-1,1]]

	for i in directions:
		newr = r+i[0]
		newc = c+i[1]

		val = getvalue(array,newr,newc,rmax,cmax)

		#if(val >0 and watchedArray[newr][newc] != None):
		#	findMaximumBlock(array,newr,newc,rmax,cmax,watchedArray,size,maxsize)

	watchedArray[r][c] = None


def findMaxOnes(array,row,column):
	maxsize = 0
	size = 0
	watchedArray = [[None]*(column+1)]*(row+1)
	print watchedArray
	for i in range(row):
		for j in range(column):
			if (array[i][j]==1):
				maxsize = findMaximumBlock(array,i,j,row,column,watchedArray,size,maxsize)

	return maxsize

a = [[1,1,0],
[0,1,1],[0,0,0]]

print findMaxOnes(a,2,2)