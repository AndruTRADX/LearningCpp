#include <iostream>
#include <print>

void print_options() {
    std::cout << '\n';
    std::cout << "/*** ------------------------------- ***/" << '\n';
    std::println("Welcome to the best CLI program to manage lists!");
    std::println("Here's the options you can pick :D");
    std::cout << '\n';

    std::println("P - Print Numbers");
    std::println("A - Add a number");
    std::println("S - Display the smallest number");
    std::println("L - Display the largest number");
    std::println("M - Display mean of the numbers");
    std::println("Z - Display the sum of pairwise products");
    std::println("Q - Quit");

    std::cout << "What does the user desire to do? ";
}