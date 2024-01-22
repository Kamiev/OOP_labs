//
//  task2.cpp
//  OOP
//
//  Created by Абулхаир Камиев on 22/1/24.
//

#include "task2.hpp"
#include <iostream>
using namespace std;

// Определение перегруженной функции power для типа char
double power(char n, int p) {
    double result = 1.0;
    for (int i = 0; i < p; ++i) {
        result *= static_cast<double>(n);
    }
    return result;
}

// Определение перегруженной функции power для типа short int
double power(short int n, int p) {
    double result = 1.0;
    for (int i = 0; i < p; ++i) {
        result *= static_cast<double>(n);
    }
    return result;
}

// Определение перегруженной функции power для типа long int
double power(long int n, int p) {
    double result = 1.0;
    for (int i = 0; i < p; ++i) {
        result *= static_cast<double>(n);
    }
    return result;
}

// Определение перегруженной функции power для типа float
double power(float n, int p) {
    double result = 1.0;
    for (int i = 0; i < p; ++i) {
        result *= static_cast<double>(n);
    }
    return result;
}

int main() {
    // Примеры вызова функции power() с разными типами аргументов
    cout << "power('A', 3): " << power('A', 3) << endl;
    cout << "power(5, 4): " << power(5, 4) << endl;
    cout << "power(123456L, 2): " << power(123456L, 2) << endl;
    cout << "power(3.14f, 3): " << power(3.14f, 3) << endl;

    return 0;
}
