// Data Structure
// Array

#include <iostream>

class Array {
private:
    int *arr;
    int size;

public:
    // constructor
    Array (int size) {
        this->size = size; // set size into class variable
        arr = new int[size]; // dynamic array
        for (int i = 0; i < size; i++) {
            arr[i] = 0;
        }
    }
    
    // destructor
    ~Array() {
        delete[] arr;
    }

    int insert (int index, int value) {
        if (index < 0 || index > size) {
            return -1;
        }
        arr[index] = value;
        
        return 0;
    }
    
    int remove (int index) {
        if (index < 0 || index > size) {
            return -1;    
        }
        arr[index] = 0;
        
        return 0;
    }
    
    int print () {
        std::cout << "Values inside array: ";
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << "\n";
        return 0;
    }
    
    int getSize() {
        return size;
    }
    
    void reverse() {
        int temp;
        for (int i = 0; i < size/2; i++) {
            temp = arr[i];
            arr[i] = arr[size - i - 1];
            arr[size - i - 1] = temp;
        }
    }
};

int main(int argc, char** argv) {
    
    // call class Array
    // initalize array with size 10
    Array arr(10);
    
    std::cout << "Array size: " << arr.getSize() << std::endl;
    
    arr.print(); // print array
    
    for (int index = 0; index < arr.getSize(); index++)
        arr.insert(index, index);
        
    arr.print(); // print array
    
    arr.remove(5); // remove value at index 5
    
    arr.print(); // print array
    
    arr.reverse(); // reverse array
    
    arr.print(); // print array
    
    return 0;
}