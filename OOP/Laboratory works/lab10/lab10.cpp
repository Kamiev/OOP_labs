#include <iostream>
#include <cstdlib>
#include <ctime>

class Gun {
private:
    static double p; // Вероятность попадания
public:
    static int shoot(int n) {
        srand(static_cast<unsigned int>(time(0)));
        for (int i = 0; i < n; ++i) {
            if ((double)rand() / RAND_MAX < p) {
                return 1; // Самолет сбит
            }
        }
        return 0; // Самолет не сбит
    }

    static double estimateProbability(int n) {
        return 1 - pow((1 - p), n);
    }

    static void setProbability(double probability) {
        p = probability;
    }
};

double Gun::p = 0.0; // Инициализация статического поля

int main() {
    Gun::setProbability(0.5); // Устанавливаем вероятность попадания

    int n;
    std::cout << "Введите количество выстрелов: ";
    std::cin >> n;

    int result = Gun::shoot(n);
    std::cout << "Результат стрельбы: " << (result == 1 ? "Цель уничтожена" : "Цель не поражена") << std::endl;

    double estimatedProbability = Gun::estimateProbability(n);
    std::cout << "Оценочное значение вероятности поражения цели: " << estimatedProbability << std::endl;

    return 0;
}
//
//#include <iostream>
//
//class Parent {
//public:
//    static int staticField;
//};
//
//// Инициализация статического поля класса Parent
//int Parent::staticField = 10;
//
//class Child : public Parent {
//public:
//    void displayStaticField() {
//        std::cout << "Value of staticField in Child: " << staticField << std::endl;
//    }
//};
//
//int main() {
//    // Вывод значения статического поля из родительского класса
//    std::cout << "Value of staticField in Parent: " << Parent::staticField << std::endl;
//
//    // Создание объекта подкласса
//    Child childObj;
//
//    // Вызов метода подкласса для вывода значения статического поля
//    childObj.displayStaticField();
//
//    // Изменение значения статического поля в родительском классе
//    Parent::staticField = 20;
//
//    // Вывод нового значения статического поля из подкласса
//    childObj.displayStaticField();
//
//    return 0;
//}

