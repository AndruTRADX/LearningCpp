#include <iostream>
#include <thread>
#include <random>

void printdl(const std::string& message) {
    std::cout << "\033[2J\033[H" << std::flush;

    std::cout << "/*** ------------------------------- ***/" << '\n';
    std::cout << '\n' << message << '\n';

    // We wait 2 seconds
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
}

void beg() {
    std::random_device random;
    std::mt19937 gen(random());

    std::uniform_int_distribution<int> dist(1, 10);

    if (const int randomNum {dist(gen)}; randomNum == 6 || randomNum == 7) {
        std::cout << '\n';

        for (int i {1}; i <= 100; i++) {
            std::cout << "PLEASE   ";
            if (i % 10 == 0)
                std::cout << '\n';
        }
    }
}