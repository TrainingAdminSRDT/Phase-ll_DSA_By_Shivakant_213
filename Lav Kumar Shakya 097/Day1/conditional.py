a = 5
if a % 2 == 0:
    print("Even")
if a % 2 != 0:
    print("Odd")
    
    
b = input("Enter a string: ").lower()

if b == b[::-1]:
    print("Palindrome")
else:
    print("Not a palindrome")