#include <iostream>
#include <vector>
#include "common.h"

int find(const std::vector<int> vec, const int givenNumber);

int main() {
    int n = 0;

    std::cout << "Enter number of elements n: ";
    std::cin >> n;

    std::vector<int> vec(n);
    int_input(vec);

    std::cout << "Enter number (int value): ";
    int givenNumber = 0;
    std::cin >> givenNumber;

    std::cout << find(vec, givenNumber) << std::endl;
    return 0;
}

int find(const std::vector<int> vec, const int givenNumber) {
    const int size = vec.size();
    int minIndex = size;

    for (int i = 0; i < size; ++i) {
        if ((vec[i] > givenNumber) && (i < minIndex))
            minIndex = i; 
    }

    if (minIndex == size)
        return -1;

    return minIndex;
}