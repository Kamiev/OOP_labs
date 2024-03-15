
//// lab5
//// task1
//
//#include <iostream>
//#include <limits>
//
//class Int {
//private:
//    int value; // Значение целого числа
//
//public:
//    Int(int val) : value(val) {} // Конструктор для инициализации значения
//
//    // Перегрузка оператора сложения
//    Int operator+(const Int& other) const {
//        // Проверка на переполнение при сложении
//        if ((long double)value + other.value > std::numeric_limits<int>::max() ||
//            (long double)value + other.value < std::numeric_limits<int>::min()) {
//            throw std::overflow_error("Arithmetic overflow occurred.");
//        }
//        return Int(value + other.value);
//    }
//
//    // Перегрузка оператора вычитания
//    Int operator-(const Int& other) const {
//        // Проверка на переполнение при вычитании
//        if ((long double)value - other.value > std::numeric_limits<int>::max() ||
//            (long double)value - other.value < std::numeric_limits<int>::min()) {
//            throw std::overflow_error("Arithmetic overflow occurred.");
//        }
//        return Int(value - other.value);
//    }
//
//    // Перегрузка оператора умножения
//    Int operator*(const Int& other) const {
//        // Проверка на переполнение при умножении
//        if ((long double)value * other.value > std::numeric_limits<int>::max() ||
//            (long double)value * other.value < std::numeric_limits<int>::min()) {
//            throw std::overflow_error("Arithmetic overflow occurred.");
//        }
//        return Int(value * other.value);
//    }
//
//    // Перегрузка оператора деления
//    Int operator/(const Int& other) const {
//        // Проверка на деление на ноль
//        if (other.value == 0) {
//            throw std::invalid_argument("Division by zero.");
//        }
//        return Int(value / other.value);
//    }
//
//    // Перегрузка префиксного оператора инкремента
//    Int& operator++() {
//        // Проверка на переполнение при префиксном инкременте
//        if ((long double)++value > std::numeric_limits<int>::max() ||
//            (long double)value < std::numeric_limits<int>::min()) {
//            throw std::overflow_error("Arithmetic overflow occurred.");
//        }
//        return *this;
//    }
//
//    // Перегрузка постфиксного оператора инкремента
//    Int operator++(int) {
//        Int temp = *this;
//        // Проверка на переполнение при постфиксном инкременте
//        if ((long double)value++ > std::numeric_limits<int>::max() ||
//            (long double)value < std::numeric_limits<int>::min()) {
//            throw std::overflow_error("Arithmetic overflow occurred.");
//        }
//        return temp;
//    }
//
//    // Перегрузка оператора вывода для вывода значения объекта Int
//    friend std::ostream& operator<<(std::ostream& os, const Int& obj) {
//        os << obj.value;
//        return os;
//    }
//};
//
//int main() {
//    try {
//        Int a(2147483647); // Создание объекта Int с максимальным значением int
//        Int b(1);
//        Int c = a + b;
//        std::cout << "Result of addition: " << c << std::endl;
//
//        Int d = a * b;
//        std::cout << "Result of multiplication: " << d << std::endl;
//
//        Int e = ++a;
//        std::cout << "Result of prefix increment: " << e << std::endl;
//
//        Int f = a++;
//        std::cout << "Result of postfix increment: " << f << std::endl;
//
//        // Попытка вызвать переполнение
//        Int g = Int(std::numeric_limits<int>::max()) + Int(1);
//    }
//    catch (const std::exception& e) {
//        std::cerr << "Exception: " << e.what() << std::endl;
//    }
//
//    return 0;
//}


//task2
//
//#include <iostream>
//
//class Fraction {
//private:
//    double chislo; // Числитель дроби
//
//public:
//    // Конструктор по умолчанию
//    Fraction() : chislo(0.0) {}
//
//    // Конструктор с одним аргументом для инициализации числителя
//    Fraction(double chislo) : chislo(chislo) {}
//
//    // Перегрузка оператора сложения
//    friend Fraction operator+(const Fraction& f1, const Fraction& f2) {
//        return Fraction(f1.chislo + f2.chislo);
//    }
//
//    // Перегрузка оператора вычитания
//    friend Fraction operator-(const Fraction& f1, const Fraction& f2) {
//        return Fraction(f1.chislo - f2.chislo);
//    }
//
//    // Перегрузка оператора умножения
//    friend Fraction operator*(const Fraction& f1, const Fraction& f2) {
//        return Fraction(f1.chislo * f2.chislo);
//    }
//
//    // Перегрузка оператора деления
//    friend Fraction operator/(const Fraction& f1, const Fraction& f2) {
//        if (f2.chislo == 0) {
//            throw std::invalid_argument("Division by zero.");
//        }
//        return Fraction(f1.chislo / f2.chislo);
//    }
//
//    // Перегрузка префиксного оператора инкремента
//    Fraction& operator++() {
//        chislo++;
//        return *this;
//    }
//
//    // Перегрузка постфиксного оператора инкремента
//    Fraction operator++(int) {
//        Fraction temp = *this;
//        chislo++;
//        return temp;
//    }
//
//    // Перегрузка оператора вывода для вывода значения дроби
//    friend std::ostream& operator<<(std::ostream& os, const Fraction& f) {
//        os << f.chislo;
//        return os;
//    }
//};
//
//int main() {
//    Fraction f1(3.0); // Создаем объект f1 с числителем 3.0
//    Fraction f2(4.0); // Создаем объект f2 с числителем 4.0
//
//    Fraction f3 = f1 + f2; // Сложение дробей
//    std::cout << "Результат сложения: " << f3 << std::endl;
//
//    Fraction f4 = f1 - f2; // Вычитание дробей
//    std::cout << "Результат вычитания: " << f4 << std::endl;
//
//    Fraction f5 = f1 * f2; // Умножение дробей
//    std::cout << "Результат умножения: " << f5 << std::endl;
//
//    Fraction f6 = f1 / f2; // Деление дробей
//    std::cout << "Результат деления: " << f6 << std::endl;
//
//    Fraction f7 = f1 + 2; // Сложение дроби с числом
//    std::cout << "Результат сложения с числом: " << f7 << std::endl;
//
//    Fraction f8 = 2 * f2; // Умножение числа на дробь
//    std::cout << "Результат умножения на число: " << f8 << std::endl;
//
//    Fraction f9 = ++f1; // Префиксный инкремент
//    std::cout << "Результат префиксного инкремента: " << f9 << std::endl;
//
//    Fraction f10 = f2++; // Постфиксный инкремент
//    std::cout << "Результат постфиксного инкремента: " << f10 << std::endl;
//
//    return 0;
//}

//task3

#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Конструктор класса
    Rectangle(double l, double w) : length(l), width(w) {}

    // Метод для вычисления площади прямоугольника
    double rect_area(double l, double w) {
        return l * w;
    }

    // Перегруженный метод для прямоугольника
    double rect_area() {
        return length * width;
    }

    // Перегруженный метод для квадрата
    double rect_area(double side) {
        return side * side;
    }
};

int main() {
    Rectangle rectangle(4.0, 3.0); // Создание объекта прямоугольника
    double rectangle_area = rectangle.rect_area(); // Вычисление площади прямоугольника
    std::cout << "Площадь приямоугольника: " << rectangle_area << std::endl;

    double square_side = 5.0;
    double square_area = rectangle.rect_area(square_side); // Вычисление площади квадрата
    std::cout << "Площадь квадрата: " << square_area << std::endl;

    return 0;
}
