#include <iostream>
#include <thread>

void printdl(const std::string& message) {
    std::cout << "\033[2J\033[H" << std::flush;

    // Display message
    std::cout << '\n' << message << '\n';

    // We wait 1.5 Seconds
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
}