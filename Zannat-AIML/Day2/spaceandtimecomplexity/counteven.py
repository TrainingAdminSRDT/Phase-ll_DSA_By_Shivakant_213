arr = [1, 2, 3, 4, 5]

cnt = 0
for i in range(len(arr)):
    if arr[i] % 2 == 0:
        cnt += 1

print(cnt)
# Time Complexity: O(1)
# Space Complexity: O(n)