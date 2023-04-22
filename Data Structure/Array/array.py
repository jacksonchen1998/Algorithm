# Data Structure
# Array

class Array:
    
    # Constructor
    def __init__(self, size):
        self.size = size
        self.arr = [0] * size
        
    # Destructor
    def __del__(self):
        del self.arr
        
    # Get the size of the array
    def getSize(self):
        return self.size
        
    def insert(self, index, value):
        if index < 0 or index > self.size:
            return -1
        self.arr[index] = value
        return 0
        
    def remove(self, index):
        self.arr[index] = 0
        
    def reverse(self):
        for i in range(self.size // 2):
            temp =  self.arr[i]
            self.arr[i] =  self.arr[self.size - i - 1]
            self.arr[self.size - i - 1] = temp
            
    def print(self):
        print("Values inside array: ")
        for i in self.arr:
            print(i, end = " ")
        print()
        
# main 
if __name__ == "__main__":

    arr = Array(10)
    print("Array size: ", arr.getSize())
    
    arr.print()
    
    for index in range(len(arr.arr)):
        arr.insert(index, index)
        
    arr.print()
    
    arr.remove(5)
    
    arr.print()
    
    arr.reverse()
    
    arr.print()