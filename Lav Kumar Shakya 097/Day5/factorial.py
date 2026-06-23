def fact(nums):
    if nums == 0:
        return 1
    elif nums < 0:
        return "No Factorial"
    else:
        return nums * fact(nums - 1)
print(fact(-5))
from math import cbrt
print(cbrt(27))