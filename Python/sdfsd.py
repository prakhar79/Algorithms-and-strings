# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"

s='''dir1
 dir11
 dir12
  picture.jpeg
  dir121
  file1.txt
dir2
 file2.gif'''



def solution(S):
    t=[]
    t=S.split('\n')
    l = 0
    for j in t:
        if '.' in j:
            continue
        if(j[0] !=' '):
            path = ['']*10
            path[0]= str(j)
        else :
            j = j.split(' ')
            count = len(j)-1
            path[count]=str(j[count])
            temp = int(len('/'.join(path[:count+1])))

            if(l< temp+1):
                l = temp + 1
    print int(l)      
    pass

solution(s)