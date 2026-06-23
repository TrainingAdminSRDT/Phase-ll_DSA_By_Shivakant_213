li = [2,4,6,8,0]
l = 0
r = len(li) - 1
while l < r:
    li[l], li[r] = li[r], li[l]
    l += 1
    r -= 1
print(li)