#include <iostream>
#include "common.h"

void int_input(std::vector<int>& vec) {
    std::cout << "Enter data (int numbers): " << std::endl;
    const int size = vec.size();

    for (int i = 0; i < size; ++i) 
        std::cin >> vec[i];

}

void int_output(const std::vector<int> vec) {
    const int size = vec.size();

    for (int i = 0; i < size; ++i) 
        std::cout << vec[i] << " ";
    
    std::cout << std::endl;
}