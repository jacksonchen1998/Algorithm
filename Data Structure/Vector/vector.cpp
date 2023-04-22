#include <iostream>
#include <vector>
#include <algorithm>

class Vector {
private:
    std::vector<int> vec;

public:
    Vector() : vec() {}

    void push_back(int val) {
        vec.push_back(val);
    }

    void pop_back() {
        vec.pop_back();
    }

    void insert(int index, int val) {
        if (index < 0 || index > vec.size()) 
            std::cout << "Index error \n";
        vec.insert(vec.begin() + index, val);
    }

    void remove(int index) {
        if (index < 0 || index > vec.size()) 
            std::cout << "Index error \n";
        vec.erase(vec.begin() + index);
    }

    void print() {
        std::cout << "Values inside vector: ";
        for (auto i : vec) 
            std::cout << i << " ";
        std::cout << "\n";
    }

    void sort() {
        std::sort(vec.begin(), vec.end());
    }

    void reverse() {
        std::reverse(vec.begin(), vec.end());
    }
    
    void getSize() {
        std::cout << "Vector size: " << vec.size() << "\n";
    }
};

int main(int argc, char **argv) {
    Vector vector;
    
    vector.getSize();

    vector.push_back(5);
    vector.push_back(3);
    vector.push_back(7);
    vector.push_back(1);
    
    vector.getSize();

    vector.print();

    vector.sort();

    vector.print();

    vector.reverse();

    vector.print();
    
    vector.insert(2, 10);
    
    vector.print();
    
    vector.pop_back();
    
    vector.print();
    
    vector.remove(0);

    vector.print();
    
    return 0;
}
