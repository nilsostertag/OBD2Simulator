#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
#include <cmath>

int randomInteger(int min, int max) {
    srand(time(0));
    return min + (rand() % (max - min + 1));
}

float randomFloat(float min, float max) {
    srand(time(0));
    return min + round(static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / (max - min))) * 10) / 10.0;
}

int main() {
    std::cout << randomInteger(0, 100) << std::endl;
    std::cout << randomFloat(0.0, 100) << std::endl;
    return 0;
}
