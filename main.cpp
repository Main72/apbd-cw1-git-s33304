#include <iostream>

void CalculateAverage(int value) {
    std::cout << value + 1 << "!\n";
}
void CalculateMax(int value) {
    std::cout << value + 100 << "!\n";
}
void CalculateMin(int values) {
    std::cout << 0 << " (" << "!\n";
    std::cout << "Hello GitHub" << "123" << "!\n";

}

int main() {
    auto lang = "C++";
    std::cout << "Hello and welcome to " << lang << "!\n";

    for (int i = 1; i <= 5; i++) {
        std::cout << "i = " << i << std::endl;
    }
    std::cout << "Hello MAGIC" << lang << "!\n";
    std::cout << "FOCUS FOR CONFLICT" << lang << "!\n";
    std::cout << "Something dla confliktu" << lang << "!\n";
    std::cout << "Hello GitHub===" << lang << "!\n";
    CalculateAverage(2);
    std::cout << "Hello GitHub111" << lang << "!\n";
    CalculateMax(1);
    //Krótko opisz w README, dlaczego tym razem merge nie był fast-forward
    //bo na tej samej linijce byl conflikt i git nie mogl wybrac co gdzie dodac
    CalculateMin(1);
    std::cout << "Something dla confliktu" << lang << "!\n";

    return 0;
}

