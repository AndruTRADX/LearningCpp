#include <iostream>

int main() {
    // cout = Character Output, we return data
    std::cout << "Enter your name" << std::endl;

    std::string name;

    // cin = Character Input, we enter data
    std::cin >> name;

    // We can print cute little messages
    std::cout << "Hello " << name << ", I hope you die :3" << std::endl;

    std::cout << "Enter you age, with numbers\n";

    int age; // Initializes age in "0"

    // Character in "age", which is a number
    // Validates if cin failed
    if (!(std::cin >> age)) {
        std::cout << "You should probably learn what a number is\n";
        return 1;
    }

    // If cin was successful
    if (age >= 18) {
        std::cout << "You are a loser\n";
    } else {
        std::cout << "Your should probably not be here dog\n";
    }

    return 0;
}