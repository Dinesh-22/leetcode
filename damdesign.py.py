#dam design problem 
wp=int(input())
wallposition=list(map(int,input().split()))[:wp]
wh=int(input())
wallheight=list(map(int,input().split()))[:wh]
mud_max=0 
for i in range(0,wp-1):
    if wallposition[i]<wallposition[i+1]-1:
        #there is a gap 
        height = abs(wallheight[i+1] - wallheight[i])
        gap = wallposition[i+1]-wallposition[i]-1 
        localmax=0 
        if gap>height:
            low = max(wallheight[i+1],wallheight[i])+1
            rem = gap - height -1 
            localmax = low+rem/2 
        else:
            localmax=min(wallheight[i+1],wallheight[i])+gap 
        mud_max = max(mud_max,localmax)
print(mud_max)   