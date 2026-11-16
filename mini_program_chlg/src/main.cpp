#include "lib/print_message.h"
#include "lib/print_options.h"

#include <iostream>
#include <vector>
#include <print>
#include <sstream>
#include <limits>

using namespace std;

int main() {
    char key_pressed {};
    vector<int> list {2, 4, 6, 8};
    bool quit {false};

    do {
        print_options(); // Print the options for the user
        cin >> key_pressed;

        switch (key_pressed) {
            case 'p': case 'P':
                {
                    if (list.empty())
                        printdl("There are no elements in the list");
                    else {
                        ostringstream message {};
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
                        cout << "Type the number you want to add: ";

                        if (cin >> number) { // We validate if the input is an actual integer
                            successful_cast = true; // Change flag
                            list.push_back(number); // Add element to the list

                            printdl(format("Integer {} added!", number));
                        } else {
                            printdl("Not an integer");
                            cin.clear(); // Removes error state
                        }

                        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Removes value added ('\n' is important)
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

                        printdl(format("The number {} is the smallest!", smallest_number));
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

                        printdl(format("The number {} is the largest!", largest_number));
                    }
                }
                break;
            case 'm': case 'M':
                {
                    if (list.empty())
                        printdl("There are no elements in the list");
                    else {
                        double mean {0.0};

                        for (const int i : list) { mean += i; }

                        mean /= static_cast<double>(list.size());
                        printdl(format("The mean is {}!", mean));
                    }
                }
                break;
            case 'z': case 'Z':
            {
                if (list.empty())
                    printdl("There are no elements in the list");
                else {
                    int sum {0};
                    int sumSq {0};

                    for (const int x : list) { sum += x; sumSq += x * x; }

                    printdl(format("The sum of pairwise products {}!", (sum * sum - sumSq) / 2));
                }
            }
            break;
            case 'q': case 'Q':
                quit = true;
                printdl("Don't leave, please... I BEG YOU, I CAN DO MORE THINGS!!!");
                beg();
                break;
            default:
                printdl("This is not a valid option, please try again :)");
        }

    } while (!quit);
}