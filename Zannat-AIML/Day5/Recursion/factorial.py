def factorial(n):
    if(n == 0 or n == 1):
        return 1
    fact = n * factorial(n - 1)
    return fact


#recursion is a function that calls itself until it reaches a base case. (reduce complexity)
# It is a powerful tool for solving problems that can be broken down into smaller, similar subproblems. 
# In the case of the factorial function, it calls itself with a smaller value of n until 
# it reaches the base case of n being 0 or 1, at which point it returns 1.

