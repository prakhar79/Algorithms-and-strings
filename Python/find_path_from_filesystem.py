'''
Given a file system and find absolute paths to all 
the jpeg images. 
	/usr
      /local
	    profile.jpg",
        /bin
          config.txt
          dest.png
        /rbin
      img.gif
    /sys
      /re
      /tmp
        pic.jpg
'''


i = '''/usr
	/local
		profile.jpg
		/bin
			config.txt
			dest.png
		/rbin
	img.gif
/sys
	/re
	/tmp
	pic.jpg'''

t=[]
t=i.split('\n')
print t

for j in t:
	if (j[0]=='/'):
		path = ['']*10
		path[0]= str(j)
	else :
		j = j.split(' ')
		count = len(j)-1
		path[count]=str(j[count])
		print ''.join(path[:count+1])