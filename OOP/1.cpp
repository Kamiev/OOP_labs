#include <iostream>

// Прототип функции power
double power(double n, int p = 2);

int main() {
    // Переменные для ввода значений от пользователя
    double base;
    int exponent;

    // Запрос у пользователя ввода основания числа
    std::cout << "Введите основание числа: ";
    std::cin >> base;

    // Запрос у пользователя ввода степени числа (если не введено, то значение по умолчанию равно 2)
    std::cout << "Введите степень числа (больше 2): ";
    std::cin >> exponent;

    // Вызов функции power и вывод результата
    double result = power(base, (exponent > 2) ? exponent : 2);
    std::cout << "Результат возведения в степень: " << result << std::endl;

    return 0;
}

// Определение функции power
double power(double n, int p) {
    if (p == 0) {
        return 1.0; // Любое число в 0 степени равно 1
    }

    double result = 1.0;
    for (int i = 0; i < p; ++i) {
        result *= n;
    }
    return result;
}
