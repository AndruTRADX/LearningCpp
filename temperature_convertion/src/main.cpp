#include <iostream>
#include <cmath>
using namespace std;

double fahrenheit_to_celsius(double fahrenheit);
double fahrenheit_to_kelvin(double fahrenheit);

void temperature_conversion(const double fahrenheit_temperature) {
    const double celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);
    const double kelvin_temperature = fahrenheit_to_kelvin(fahrenheit_temperature);

    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}

double fahrenheit_to_celsius(const double fahrenheit) {
    return round((5.0 / 9.0) * (fahrenheit - 32));
}

double fahrenheit_to_kelvin(const double fahrenheit) {
    return round((5.0/9.0) * (fahrenheit - 32) + 273);
}

int main() {
    double temperature_in_fahrenheit {};

    cout << "Enter the temperature in fahrenheit you want to convert: ";
    cin >> temperature_in_fahrenheit;

    temperature_conversion(temperature_in_fahrenheit);
}