arr = [3, 7, 2, 9, 5]

mx = arr[0]

for i in range(1, len(arr)):
    mx = max(mx, arr[i])

print(mx)

# Time Complexity: O(n)
# Space Complexity: O(n)