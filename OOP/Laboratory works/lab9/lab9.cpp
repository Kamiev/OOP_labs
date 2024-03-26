////lab9
////task 1
//#include <iostream>
//#include <cstdlib> // для функции exit
//
//const int LIMIT = 100; // размер массива
//
//class ArrayIndexOutOfBoundsException {
//public:
//    ArrayIndexOutOfBoundsException() {} // Конструктор класса исключения
//    const char* what() const {
//        return "Индекс выходит за пределы массива!"; // Сообщение об ошибке
//    }
//};
//
//class safearray {
//private:
//    int arr[LIMIT]; // массив для хранения данных
//public:
//    // установка значения элемента массива
//    void putel(int n, int elvalue) {
//        // Проверка на выход за пределы массива
//        if (n < 0 || n >= LIMIT)
//            throw ArrayIndexOutOfBoundsException(); // Генерация исключения
//        arr[n] = elvalue; // Установка значения элемента массива
//    }
//    // получение значения элемента массива
//    int getel(int n) const {
//        // Проверка на выход за пределы массива
//        if (n < 0 || n >= LIMIT)
//            throw ArrayIndexOutOfBoundsException(); // Генерация исключения
//        return arr[n]; // Возвращаем значение элемента массива
//    }
//};
//
//int main() {
//    safearray sal; // Создаем объект класса safearray
//
//    // задаем значения элементов
//    for (int j = 0; j < LIMIT; j++)
//        sal.putel(j, j * 10); // Устанавливаем значение элемента массива
//
//    // показываем элементы
//    for (int j = 0; j < LIMIT; j++) {
//        try {
//            int temp = sal.getel(j); // Получаем значение элемента массива
//            std::cout << "Элемент " << j << " равен " << temp << std::endl; // Выводим значение элемента
//        }
//        catch (const ArrayIndexOutOfBoundsException& e) {
//            std::cout << e.what() << std::endl; // Выводим сообщение об ошибке выхода за пределы массива
//            return 1; // Выходим из программы из-за ошибки
//        }
//    }
//
//    return 0;
//}
//


//task2
#include <iostream>
#include <stdexcept> // Для std::runtime_error

// Класс для представления грузовика Kamaz
class Kamaz {
private:
    int speed; // Скорость грузовика
    std::string name; // Наименование грузовика
    static constexpr int MAX_SPEED = 130; // Максимальная допустимая скорость

public:
    // Конструктор класса Kamaz
    Kamaz(int spd, std::string n) : speed(spd), name(n) {}

    // Метод для получения скорости грузовика
    int getSpeed() const {
        return speed;
    }

    // Метод для получения наименования грузовика
    std::string getName() const {
        return name;
    }

    // Метод для вывода информации о грузовике на экран
    void display() const {
        std::cout << "Камаз '" << name << "': скорость " << speed << " км/ч" << std::endl;
    }

    // Метод для проверки скорости грузовика
    void checkSpeed() const {
        if (speed > MAX_SPEED) {
            throw std::runtime_error("Speed limit exceeded."); // Генерируем исключение в случае превышения скорости
        }
    }
};

int main() {
    try {
        // Создание объекта грузовика
        Kamaz kamaz(130, "КамАЗ-4326-9 (VK) ");

        // Проверка скорости грузовика
        kamaz.checkSpeed();

        // Вывод информации о грузовике
        kamaz.display();
    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl; // Выводим сообщение об ошибке
        return 1;
    }

    return 0;
}


