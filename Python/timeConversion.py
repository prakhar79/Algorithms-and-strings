time = raw_input('asas')

time = list(time)
temp = []
if (time[8] =='A'):
        hour = int(time[0])*10 + int(time[1])
        print hour
        if hour == 12 :
                time[0] = 0
                time[1] = 0
        for i in range(8):
                temp.append(str(time[i]))
        print ''.join(temp)

if (time[8] =='P'):
        hour = int(time[0])*10 + (time[1]) + 12
        if hour == 24 :
                time[0] = 1
                time[1] = 2
        else:
                time[0] = hour/10
                time[1] = hour%10
        for i in range(8):
                temp.append(str(time[i]))
        print ''.join(temp)
