i=int(input())
while i>0:
    word=input()
    x=len(word)
    if(x>10):
        word=word[0]+str(x-2)+word[x-1]
        print(word)
    else:
        print(word)
    i-=1