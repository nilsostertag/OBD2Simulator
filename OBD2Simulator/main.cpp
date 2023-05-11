#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <sstream>

int RandomInteger(int min, int max) {
    srand(time(0));
    return min + (rand() % (max - min + 1));
}

float RandomFloat(float min, float max) {
    srand(time(0));
    return min + round(static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / (max - min))) * 10) / 10.0;
}

//Still needs to be corrected
template<typename T>
std::string ToHex(T value) {
    char buffer[sizeof(T) * 2 + 3];
    sprintf_s(buffer, "0x%0*X", (int)(sizeof(T) * 2), (unsigned)value);
    return std::string(buffer);
}

int main() {
    std::string velovity = ToHex(RandomInteger(0, 255));
    std::string acceleration = ToHex(RandomFloat(0, 20));
    std::string enginerpm = ToHex(RandomInteger(0, 7500));
    std::string engineload = ToHex(RandomInteger(0, 100));
    std::string throttlepos = ToHex(RandomInteger(0, 100));
    std::string fuelatm = ToHex(RandomFloat(0, 25));
    std::string fuelavg = ToHex(RandomFloat(0, 40));

    std::cout << velovity + "\n" + acceleration + "\n" + enginerpm + "\n" + engineload + "\n" + throttlepos + "\n" + fuelatm + "\n" + fuelavg << std::endl;

    return 0;
}
