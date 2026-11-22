#include <iostream>
#include <thread>
#include <random>
#include <format>

void printdl(const std::string& message) {
    std::cout << "\033[2J\033[H" << std::flush; // This cleans the console

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

        const std::string cuteMessage = randomNum == 6 ? "Please..." : "STOP!!! IT HURTS WHEN YOU CLOSE";
        const int chop = randomNum == 6 ? 10 : 3;

        for (int i {1}; i <= 500; i++) {
            std::cout << std::format("{}   ", cuteMessage);

            if (i % chop == 0)
                std::cout << '\n';
        }
    }
}