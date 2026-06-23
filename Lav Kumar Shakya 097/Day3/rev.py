li = [1,2,3,4,5]

for i in range(len(li)//2):
    li[i], li[len(li)-i-1] = li[len(li)-i-1],li[i]
print(li)

