#include <vector>
#include<iostream>

void part1() {
    std::vector<int> myVec;
    for(int i = 0; i < 50000; i++){
        myVec.push_back(i);
    }

    std::cout << "After adding elements: Size = " << myVec.size() << ", Capacity = " << myVec.capacity() << std::endl;

    myVec.resize(myVec.size()/2);
    std::cout << "After resizing: Size = " << myVec.size() << ", Capacity = " << myVec.capacity() << std::endl;

    myVec.shrink_to_fit();
    std::cout << "After shrink_to_fit(): Size = " << myVec.size() << ", Capacity = " << myVec.capacity() << std::endl;
}

void part2() {
    std::vector<bool> boolVec(10000);
    std::vector<char> charVec(10000);

    int boolMemory = boolVec.size()/8;
    int charMemory = charVec.size();

    std::cout << "Memory usage of std::vector<bool>: " << boolMemory << " bytes" << std::endl;
    std::cout << "Memory usage of std::vector<char>: " << charMemory << " bytes" << std::endl;
}

int main() {
    part1();
    part2();
    return 0;
}