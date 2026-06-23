n=8
l=[0,1,2,3,4,5,6,7]

#1
mx = l[0]
for i in range(n):
    mx = max(mx, l[i])
    
# TC = O(n)
# SC = O(n) where n = 8

#2
cnt = 0
for i in range(n):
    if l[i] % 2 == 0:
        cnt += 1

#TC = O(n)
        
#3
for i in range(n):
    for j in range(i):
        print(j)
        
#TC = O(n^2)

#Binary Search O(log n)

#Two Pointer O(n)

#Reverse Array O(n)

#Logirathmic Loop O(log n)

#Doubling Loop O(log n)

#Two Independent Loop O(n)

#Two Different Size O(n+m)

#Fibonacci(Naive)

def fib(n):
    if n <= 1:
        return n
    return fib(n-1) + fib(n-2)
