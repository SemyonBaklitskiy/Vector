#include <iostream>
#include <vector>
#include <algorithm>

void string_input(std::vector<std::string>& vec);
void string_output(const std::vector<std::string> vec);
int count_o(const std::string str);

int main() {
    const int n = 3;
    std::vector<std::string> words(n);

    string_input(words);
    std::cout << sizeof(words[0]) << " " << sizeof(words[1]) << " " << sizeof(words[2]) << std::endl;
    std::sort(words.begin(), words.end());

    string_output(words);
    std::cout << count_o(words[0]) << std::endl;

    return 0;
}

void string_input(std::vector<std::string>& vec) {
    const int size = vec.size();

    std::cout << "Enter 3 words: ";
    for (int i = 0; i < size; ++i) 
        std::cin >> vec[i];
}

void int_input(std::vector<int>& vec) {
    std::cout << "Enter data (int numbers): " << std::endl;
    const int size = vec.size();

    for (int i = 0; i < size; ++i) 
        std::cin >> vec[i];
    
}

void string_output(const std::vector<std::string> vec) {
    const int size = vec.size();

    for (int i = 0; i < size; ++i) 
        std::cout << vec[i] << std::endl;

}

int count_o(const std::string str) {
    const int size = str.size();
    int result = 0;

    for (int i = 0; i < size; ++i) {
        if ((str[i] == 'o') || (str[i] == 'O'))
            ++result;
    }

    return result;
}
