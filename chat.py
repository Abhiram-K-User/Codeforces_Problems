a=input()
i=0
j=0
string=['h','e','l','l','o']

while(i<len(a) and j<5):
    if a[i]==string[j]:
        j+=1
    i+=1
if j==5:
    print("YES")
else:
    print("NO")



