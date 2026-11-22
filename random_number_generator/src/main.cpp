#include <iostream>
#include <random>

int main() {
    constexpr int count {10};
    constexpr int min {1};
    constexpr int max {10};
    std::random_device rd; // No deterministic
    std::mt19937 gen {rd()}; // Mersenne Twister

    std::uniform_int_distribution<int> dist {min , max}; // [min, max] range

    for (int i {0}; i < count; ++i) {
        std::cout << dist(gen) << '\n';
    }
}