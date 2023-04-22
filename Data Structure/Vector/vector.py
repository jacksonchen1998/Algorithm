# Data Structure
# Vector

class Vector:
    def __init__(self, vec):
        self.vec = vec
        self.size = len(vec)
        
    def __del__(self):
        del self.vec
        
    def getSize(self):
        print("Vector size: ", self.size)
        
    def insert(self, index, val):
        if index < 0 or index > self.size:
            return -1
        self.vec.insert(index, val)
        
    def push_back(self, val):
        self.vec.append(val)
        
    def pop_back(self):
        self.vec.pop()
        
    def erase(self, index):
        if index < 0 or index > self.size:
            return -1
        self.vec.pop(index)
        
    def sort(self):
        self.vec.sort()
        
    def reverse(self):
        self.vec.reverse()
        
    def print(self):
        print("Value inside vector: ")
        for i in self.vec:
            print(i, end = " ")
        print()
        
        
if __name__ == "__main__":
    vec = Vector([])
    
    vec.getSize()
    
    vec.print()
    
    for i in range(5):
        vec.push_back(i)
        
    vec.print()
    
    vec.insert(0, -2)
    
    vec.print()
    
    vec.pop_back()
    
    vec.print()
    
    vec.erase(2)
    
    vec.print()
    
    vec.insert(2, 16)
    
    vec.sort()
    
    vec.print()
    
    vec.reverse()
    
    vec.print()