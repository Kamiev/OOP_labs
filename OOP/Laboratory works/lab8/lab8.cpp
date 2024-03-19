////lab8
////task1
//#include <iostream>
//
//// Шаблон функции для нахождения максимального элемента массива
//template<typename T>
//T findMax(const T arr[], int size) {
//    T max = arr[0]; // Инициализируем переменную max первым элементом массива
//    // Проходим по остальным элементам массива
//    for (int i = 1; i < size; ++i) {
//        // Если текущий элемент больше текущего максимума, обновляем максимум
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//    return max; // Возвращаем найденный максимальный элемент
//}
//
//// Шаблон функции для сортировки массива (используется сортировка пузырьком)
//template<typename T>
//void bubbleSort(T arr[], int size) {
//    // Внешний цикл идет по всем элементам массива, кроме последнего
//    for (int i = 0; i < size - 1; ++i) {
//        // Внутренний цикл проходит по подмассиву от начала до i-го элемента
//        for (int j = 0; j < size - i - 1; ++j) {
//            // Если текущий элемент больше следующего, меняем их местами
//            if (arr[j] > arr[j + 1]) {
//                // Обмен значениями
//                T temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//int main() {
//    // Пример использования шаблона функции для нахождения максимального элемента в массиве int
//    int intArr[] = {3, 1, 4, 1, 5, 9, 2, 6};
//    int intSize = sizeof(intArr) / sizeof(int);
//    std::cout << "Max element in intArr: " << findMax(intArr, intSize) << std::endl;
//
//    // Пример использования шаблона функции для сортировки массива float
//    float floatArr[] = {3.14, 1.23, 4.56, 1.67, 5.89};
//    int floatSize = sizeof(floatArr) / sizeof(float);
//    bubbleSort(floatArr, floatSize);
//    std::cout << "Sorted floatArr: ";
//    for (int i = 0; i < floatSize; ++i) {
//        std::cout << floatArr[i] << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}
//




////task2
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//template<typename T, int Size>
//class ArraySum {
//private:
//    T array1[Size]; // Первый массив
//    T array2[Size]; // Второй массив
//
//public:
//    // Конструктор класса, заполняющий массивы случайными числами
//    ArraySum() {
//        // Инициализация генератора случайных чисел
//        srand(time(nullptr));
//
//        // Заполнение массивов случайными значениями
//        for (int i = 0; i < Size; ++i) {
//            array1[i] = rand() % 100; // Генерация случайного числа от 0 до 99
//            array2[i] = rand() % 100;
//        }
//    }
//
//    // Метод для нахождения суммы элементов массивов
//    T sum() const {
//        T sum = 0;
//        // Суммирование элементов обоих массивов
//        for (int i = 0; i < Size; ++i) {
//            sum += array1[i];
//            sum += array2[i];
//        }
//        return sum;
//    }
//};
//
//int main() {
//    // Создание объекта шаблонного класса с массивами int
//    ArraySum<int, 5> intArraySum;
//    // Вычисление суммы элементов массивов
//    int intSum = intArraySum.sum();
//    std::cout << "Sum of elements in int arrays: " << intSum << std::endl;
//
//    // Создание объекта шаблонного класса с массивами double
//    ArraySum<double, 5> doubleArraySum;
//    // Вычисление суммы элементов массивов
//    double doubleSum = doubleArraySum.sum();
//    std::cout << "Sum of elements in double arrays: " << doubleSum << std::endl;
//
//    return 0;
//}
//


////task3
//#include <iostream>
//#include <string>
//#include <vector>
//
//// Структура, представляющая информацию о работнике
//struct Worker {
//    std::string surname;
//    int age;
//    std::string specialty;
//    double salary;
//};
//
//// Шаблон класса "стек"
//template<typename T>
//class Stack {
//private:
//    std::vector<T> elements; // Вектор для хранения элементов стека
//
//public:
//    // Метод для добавления элемента в стек
//    void push(const T& element) {
//        elements.push_back(element);
//    }
//
//    // Метод для удаления элемента из стека
//    void pop() {
//        if (!isEmpty()) {
//            elements.pop_back();
//        }
//    }
//
//    // Метод для получения верхнего элемента стека (без удаления)
//    T& top() {
//        return elements.back();
//    }
//
//    // Метод для проверки, пуст ли стек
//    bool isEmpty() const {
//        return elements.empty();
//    }
//};
//
//int main() {
//    // Создаем стек для хранения информации о работниках на заводе N
//    Stack<Worker> factoryWorkers;
//
//    // Вводим информацию о работниках на заводе N
//    Worker worker1 = {"Иванов", 35, "слесарь", 30000.0};
//    Worker worker2 = {"Петров", 40, "токарь", 35000.0};
//    Worker worker3 = {"Сидоров", 30, "слесарь", 28000.0};
//    Worker worker4 = {"Козлов", 45, "инженер", 40000.0};
//
//    // Добавляем работников в стек
//    factoryWorkers.push(worker1);
//    factoryWorkers.push(worker2);
//    factoryWorkers.push(worker3);
//    factoryWorkers.push(worker4);
//
//    // Подсчитываем количество слесарей и токарей
//    int numOfLocksmiths = 0;
//    int numOfTurners = 0;
//
//    // Проходим по всем работникам в стеке
//    while (!factoryWorkers.isEmpty()) {
//        Worker currentWorker = factoryWorkers.top();
//        factoryWorkers.pop();
//        
//        if (currentWorker.specialty == "слесарь") {
//            numOfLocksmiths++;
//        } else if (currentWorker.specialty == "токарь") {
//            numOfTurners++;
//        }
//    }
//
//    // Выводим количество слесарей и токарей на консоль
//    std::cout << "Количество слесарей: " << numOfLocksmiths << std::endl;
//    std::cout << "Количество токарей: " << numOfTurners << std::endl;
//
//    return 0;
//}
//
