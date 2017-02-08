'''
This code rotates an nxn matrix using a new new variable.
'''

import copy
def rotateImageRight(image):
    temp = copy.deepcopy(image)
    k = len(image)
    for i in range(k):
        for j in range(k):
            temp[i][j] = image[j][k-i-1]
    print temp


rotateImageRight([[1,2,3],[4,5,6],[7,8,9]])