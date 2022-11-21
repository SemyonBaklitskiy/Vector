#include <iostream>
#include <vector>
#include "common.h"

int comparator(const void* first, const void* second);
void swap(void* element1, void* element2, unsigned int sizeBytes);
int partition(void* array, int start, int end, unsigned int sizeBytes, int (*comparator)(const void*, const void*));
void my_sort(void* array, int start, int end, unsigned int sizeBytes, int (*comparator)(const void*, const void*));

int main() {
    int n = 0;
    std::cout << "Enter number of elements n: ";
    std::cin >> n;

    std::vector<int> vec(n);
    int_input(vec);
    
    my_sort(&vec[0], 0, n - 1, sizeof(vec[0]), comparator);
    int_output(vec);

    return 0;
}

void swap(void* element1, void* element2, unsigned int sizeBytes) {
    char* a = (char*)element1;
    char* b = (char*)element2;

    do {
        char tmp = *a;
        *a++ = *b;
        *b++ = tmp;
    } while (--sizeBytes > 0);
    
}

int partition(void* array, int start, int end, unsigned int sizeBytes, int (*comparator)(const void*, const void*)) {
    void* pivot = array + end * sizeBytes;
    int pIndex = start;

    for (int i = start; i < end; ++i) {
        if ((comparator(array + i * sizeBytes, pivot) <= 0)) {
            swap((void*)(array + i * sizeBytes), (void*)(array + pIndex * sizeBytes), sizeBytes);
            ++pIndex;
        }
    }

    swap((void*)(array + pIndex * sizeBytes), (void*)(array + end * sizeBytes), sizeBytes);

    return pIndex;
}

void my_sort(void* array, int start, int end, unsigned int sizeBytes, int (*comparator)(const void*, const void*)) { 
    if (start >= end) 
        return;
    
    int pivot = partition(array, start, end, sizeBytes, comparator);
    my_sort(array, start, pivot - 1, sizeBytes, comparator);
    my_sort(array, pivot + 1, end, sizeBytes, comparator);
}

int comparator(const void* first, const void* second) {
    return *((int*)second) - *((int*)first);
}
