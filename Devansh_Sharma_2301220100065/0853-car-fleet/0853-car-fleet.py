class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        z = list(zip(position, speed))
        z.sort(reverse=True)
        print(z)
        stack = []

        for p,s in z:
            t= (target - p) /s

            if not stack:
                stack.append(t)
            elif stack[-1]<t :
                stack.append(t)
        print(stack)
        return len(stack)