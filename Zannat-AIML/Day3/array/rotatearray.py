arr = [1, 2, 3, 4, 5]
n = len(arr)
# rotate the array to the right by k steps
k = 2
k = k % n
# reverse the whole array
for i in range(n // 2):
    temp = arr[i]
    arr[i] = arr[n - i - 1]
    arr[n - i - 1] = temp
# reverse the first k elements
for i in range(k // 2):
    temp = arr[i]
    arr[i] = arr[k - i - 1]
    arr[k - i - 1] = temp
# reverse the remaining n - k elements
for i in range(k, (n + k) // 2):
    temp = arr[i]
    arr[i] = arr[n - (i - k) - 1]
    arr[n - (i - k) - 1] = temp
print(arr)

    