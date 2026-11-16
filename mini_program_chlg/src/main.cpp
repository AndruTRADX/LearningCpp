#include "lib/print_message.h"

#include <iostream>
#include <vector>
#include <print>
#include <sstream>
#include <limits>

using namespace std;

/* P - Print Numbers
 * A - Add a number
 * M - Display mean of the numbers (promedio)
 * S - Display the smallest number
 * L - Display the largest number
 * Q - Quit // DONE
*/
int main() {
    char key_pressed {};
    vector<int> list {1, 2, 3};
    bool quit {false};

    do {
        cout << '\n';
        println("Welcome to my program to manage lists!");
        println("Here's the options you can pick :D");
        cout << '\n';

        println("P - Print Numbers");
        println("A - Add a number");
        println("S - Display the smallest number");
        println("L - Display the largest number");
        println("M - Display mean of the numbers");
        println("Q - Quit");

        cout << "What does the user desires to do? ";
        cin >> key_pressed;

        switch (key_pressed) {
            case 'p': case 'P':
                {
                    ostringstream message {};
                    if (list.empty())
                        printdl("There are no elements in the list");
                    else {
                        for (const int num : list) {
                            message << num << " ";
                        }
                        printdl(message.str());
                    }
                }
                break;
            case 'a': case 'A':
                {
                    int number {0};
                    bool successful_cast {false};
                    do {
                        cout << '\n';
                        println("Type the number you want to add: ");
                        if (cin >> number) {
                            successful_cast = true; // Change flag
                            list.push_back(number); // Add element to the list

                            ostringstream message {}; // Create the message like this since I have no idea how to do this properly
                            message << "Integer " << number << " added!";
                            printdl(message.str());
                        } else {
                            printdl("Not an integer");
                            cin.clear(); // Removes error state
                            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Removes value added
                        }
                    } while (!successful_cast);
                }
                break;
            case 's': case 'S':
                {
                    if (list.empty())
                        printdl("There are no elements in the list");
                    else {
                        int smallest_number {list.at(0)};

                        for (const int i : list)
                            if (i < smallest_number)
                                smallest_number = i;

                        ostringstream message {};
                        message << "The number " << smallest_number << " is the smallest!";
                        printdl(message.str());
                    }
                }
                break;
            case 'l': case 'L':
                {
                    if (list.empty())
                        printdl("There are no elements in the list");
                    else {
                        int largest_number {list.at(0)};

                        for (const int i : list)
                            if (i > largest_number)
                                largest_number = i;

                        ostringstream message {};
                        message << "The number " << largest_number << " is the largest!";
                        printdl(message.str());
                    }
                }
                break;
            case 'm': case 'M':
                {
                    if (list.empty())
                        printdl("There are no elements in the list");
                    else {
                        double mean {0.0};

                        for (const int i : list)
                            mean += i;

                        mean /= static_cast<double>(list.size());

                        ostringstream message {};
                        message << "The mean is " << mean << "!";
                        printdl(message.str());
                    }
                }
                break;
            case 'q': case 'Q':
                quit = true;
                printdl("Don't leave, please...");
                break;
            default:
                printdl("This is not a valid option, please try again :)");
        }

    } while (!quit);
}