#include <iostream>
#include <vector>
#include "common.h"

std::vector<int> copy(const std::vector<int> vec);
void revrse(std::vector<int>& vec);

int main() {
    std::cout << "Enter number of elements n: ";
    int n = 0;
    std::cin >> n;

    std::vector<int> vec(n);
    int_input(vec);
    revrse(vec);
    int_output(vec);

    return 0;
}

std::vector<int> copy(const std::vector<int> vec) {
    const int size = vec.size();
    std::vector<int> dup(size);

    for (int i = 0; i < size; ++i) {
        dup[i] = vec[i];
    }

    return dup;
}

void revrse(std::vector<int>& vec) {
    const int size = vec.size();
    std::vector<int> dup = copy(vec);

    for (int i = size - 1; i >= 0; --i) {
        vec[size - 1 - i] = dup[i];
    } 
}
