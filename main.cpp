#include <iostream>

void CalculateAverage(int value) {
    std::cout << value + 1 << "!\n";
}
void CalculateMax(int value) {
    std::cout << value + 100 << "!\n";
}

int main() {
    auto lang = "C++";
    std::cout << "Hello and welcome to " << lang << "!\n";

    for (int i = 1; i <= 5; i++) {
        std::cout << "i = " << i << std::endl;
    }
    std::cout << "Hello GitHub" << lang << "!\n";
    std::cout << "Hello GitHub!!!" << lang << "!\n";
    std::cout << "Hello GitHub???" << lang << "!\n";
    std::cout << "Hello GitHub===" << lang << "!\n";
    CalculateAverage(2);
    CalculateMax(1);

    return 0;
}

