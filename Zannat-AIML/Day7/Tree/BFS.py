#bfs is breadth first search is a graph traversal algorithm that starts at the root node and explores all the neighboring nodes at the present depth prior to moving on to the nodes at the next depth level.
from Queue import Queue

from collections import deque

graph = {
    1: [2, 3],
    2: [4],
    3: [5],
    4: [],
    5: []
}
def bfs(graph, start):
    visited = set()
    queue = deque([start])
    while queue:
        node = queue.popleft()
        if node not in visited:
            print(node)
            visited.add(node)
            queue.extend(graph[node])
            


