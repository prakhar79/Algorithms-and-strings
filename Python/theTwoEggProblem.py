'''
This program takes number of eggs and number of floors to find 
maximum number of trials to find the floor. 
'''
import math

def find_highest_trial(floor,eggs):
	if eggs==1:
		return floor
	if eggs ==2:
		max=floor
		min=0
		m = int((max+min)/2)
		while (max-min != 1):
			m = int((max+min)/2)
			n = m*(m+1)/2
			if(n>=floor):
				max=int(m)
			else:
				min=int(m)
		return m
	if eggs >= floor:
		return int(math.log(floor,2))+1
	if eggs > 2 :
		
	


building_floors = int(raw_input('Enter Number of floors : '))
eggs = int(raw_input('Enter Number of eggs : '))

highest_trial = find_highest_trial(building_floors,eggs)
print ('Highest number of trials are %s' % highest_trial)