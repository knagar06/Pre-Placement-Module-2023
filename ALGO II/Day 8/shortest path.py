def shortestPathBinaryMatrix(self, grid):
    n = len(grid)
    
    if grid[0][0] == 1:
        return -1
    
    stack, visited = deque([(0,0,1)]), set()
    
    visited.add((0,0))
    
    while stack:
        x, y, steps = stack.popleft()
        
        if x == n-1 and y == n-1:
            return steps
        
        for nx, ny in [(x-1,y),(x+1,y),(x,y-1),(x,y+1),(x-1,y-1),(x+1,y+1),(x-1,y+1),(x+1,y-1)]:
            if 0 <= nx < n and 0 <= ny < n and grid[nx][ny] == 0 and (nx,ny) not in visited:
                visited.add((nx,ny))
                stack.append((nx,ny,steps+1))
                
    return -1