#include <iostream>
#include <vector>

void input_data(std::vector<double>& vec);
void output_data(const std::vector<double> vec);
double average_val(const std::vector<double> vec);

int main() {
    int n = 0;
    std::cout << "Enter amount of students n: ";
    std::cin >> n;

    std::vector<double> students(n);
    input_data(students);

    output_data(students);
    return 0;
}

double average_val(const std::vector<double> vec) {
    const int size = vec.size();
    double summ = 0.0;

    for (int i = 0; i < size; ++i) {
        summ += vec[i];
    }

    return summ / size;
}

void output_data(const std::vector<double> vec) {
    double average = average_val(vec);
    const int size = vec.size();

    for (int i = 0; i < size; ++i) {
        if (vec[i] > average) 
            std::cout << i << " ";
    }

    std::cout << std::endl;
}

void input_data(std::vector<double>& vec) {
    const int size = vec.size();
    std::cout << "Enter mark of each student: ";

    for (int i = 0; i < size; ++i) {
        double mark = 0;
        std::cin >> mark;

        vec[i] = mark;
    }
}