i=int(input())
sum=0
while i>0:
    my_list=[]
    solution=input()
    my_list=list(map(int,solution.split()))
    if (my_list[0]+my_list[1]+my_list[2])>=2:
        sum+=1
    i-=1
    my_list.clear()
print(sum)
