# create an array and reverse it

arr = [1, 2,8,4,1,6, 7, 8, 9, 10,3,2,4,5,]
# arr.reverse()
# print(arr)

n = len(arr)

# reverse the array 
for i in range(n // 2):
    temp = arr[i]
    arr[i] = arr[n - i - 1]
    arr[n - i - 1] = temp

# Print the reversed array
for i in range(n):
    print(arr[i])

print(arr)