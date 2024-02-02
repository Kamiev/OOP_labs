//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Aeroflot {
//public:
//    string flight_number;
//    string departure_city;
//    string destination_city;
//    string arrival_time;
//    string departure_time;
//    string registration_place;
//};
//class MyClass
//{
//public:
//
//
//private:
//
//};
//
//bool compareByDestination(const Aeroflot& a, const Aeroflot& b) {
//    return a.destination_city < b.destination_city;
//}
//
//void printFlightTable(const vector<Aeroflot>& flights) {
//    if (flights.empty()) {
//        cout << "Нет доступных рейсов." << endl;
//        return;
//    }
//
//    cout << "Номер рейса\tОтправление\tНазначение\tПрибытие\tОтправление\tМесто регистрации" << endl;
//
//    for (const Aeroflot& flight : flights) {
//        cout << flight.flight_number << "\t\t" << flight.departure_city << "\t\t" << flight.destination_city
//            << "\t\t" << flight.arrival_time << "\t\t" << flight.departure_time << "\t\t" << flight.registration_place << endl;
//    }
//}
//
//int main() {
//    setlocale(LC_ALL, "RU");
//    vector<Aeroflot> flights;
//
//    // Ввод информации о рейсах с клавиатуры
//    int n;
//    cout << "Введите количество рейсов: ";
//    cin >> n;
//
//    for (int i = 0; i < n; ++i) {
//        Aeroflot flight;
//        MyClass flight1;
//        
//        cout << "Номер рейса: ";
//        cin >> flight.flight_number;
//        cout << "Пункт отправления: ";
//        cin >> flight.departure_city;
//        cout << "Пункт назначения: ";
//        cin >> flight.destination_city;
//        cout << "Время прибытия: ";
//        cin >> flight.arrival_time;
//        cout << "Время отправления: ";
//        cin >> flight.departure_time;
//        cout << "Номер секции для регистрации: ";
//        cin >> flight.registration_place;
//
//        flights.push_back(flight);
//    }
//    
//    // Сортировка по названию пунктов назначения
//    sort(flights.begin(), flights.end(), compareByDestination);
//
//    // Вывод таблицы рейсов
//    printFlightTable(flights);
//
//    return 0;
//}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <locale>
//
//using namespace std;
//
//class Student {
//public:
//    string firstName;
//    string lastName;
//    string dateOfBirth;
//    string phoneNumber;
//};
//
//class StudentGroup {
//private:
//    vector<Student> students;
//
//public:
//    void addStudent(const string& firstName, const string& lastName, const string& dateOfBirth, const string& phoneNumber) {
//        students.push_back({ firstName, lastName, dateOfBirth, phoneNumber });
//    }
//
//    void removeStudentByLastName(const string& lastName) {
//        students.erase(remove_if(students.begin(), students.end(),
//            [lastName](const Student& student) { return student.lastName == lastName; }),
//            students.end());
//    }
//
//    Student* findStudentByLastName(const string& lastName) {
//        auto it = find_if(students.begin(), students.end(),
//            [lastName](const Student& student) { return student.lastName == lastName; });
//
//        return (it != students.end()) ? &(*it) : nullptr;
//    }
//
//    void sortStudentsByLastName() {
//        sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
//            return a.lastName < b.lastName;
//            });
//    }
//
//    void displayStudents() {
//        if (students.empty()) {
//            cout << "Группа пуста." << endl;
//            return;
//        }
//
//        cout << "Фамилия\t\tИмя\t\tДата рождения\t\tНомер телефона" << endl;
//        for (const auto& student : students) {
//            cout << student.lastName << "\t" << student.firstName << "\t\t"
//                << student.dateOfBirth << "\t\t" << student.phoneNumber << endl;
//        }
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    StudentGroup group;
//
//    while (true) {
//        cout << "\nМеню:\n";
//        cout << "1. Добавить студента\n";
//        cout << "2. Удалить студента по фамилии\n";
//        cout << "3. Найти студента по фамилии\n";
//        cout << "4. Сортировать студентов по фамилии\n";
//        cout << "5. Вывести список студентов\n";
//        cout << "0. Выйти из программы\n";
//
//        int choice;
//        cout << "Выберите действие: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            string firstName, lastName, dateOfBirth, phoneNumber;
//            cout << "Введите имя студента: ";
//            cin >> firstName;
//            cout << "Введите фамилию студента: ";
//            cin >> lastName;
//            cout << "Введите дату рождения студента: ";
//            cin >> dateOfBirth;
//            cout << "Введите номер телефона студента: ";
//            cin >> phoneNumber;
//
//            group.addStudent(firstName, lastName, dateOfBirth, phoneNumber);
//            break;
//        }
//        case 2: {
//            string lastName;
//            cout << "Введите фамилию студента для удаления: ";
//            cin >> lastName;
//
//            group.removeStudentByLastName(lastName);
//            break;
//        }
//        case 3: {
//            string lastName;
//            cout << "Введите фамилию студента для поиска: ";
//            cin >> lastName;
//
//            Student* foundStudent = group.findStudentByLastName(lastName);
//            if (foundStudent != nullptr) {
//                cout << "Студент найден: " << foundStudent->firstName << " " << foundStudent->lastName << endl;
//            }
//            else {
//                cout << "Студент не найден." << endl;
//            }
//            break;
//        }
//        case 4:
//            group.sortStudentsByLastName();
//            cout << "Студенты отсортированы по фамилии." << endl;
//            break;
//        case 5:
//            group.displayStudents();
//            break;
//        case 0:
//            return 0;
//        default:
//            cout << "Неверный выбор. Повторите попытку." << endl;
//        }
//    }
//
//    return 0;
//}
//
//????////////////////////////////
#include <iostream>
#include <fstream>
#include <stack>
#include <vector>

// Класс для реализации стека
class Stack {
private:
    std::vector<int> data;

public:
    // Добавление элемента в стек
    void push(int value) {
        data.push_back(value);
    }

    // Удаление элемента из стека
    void pop() {
        if (!isEmpty()) {
            data.pop_back();
        }
    }

    // Проверка на пустоту стека
    bool isEmpty() const {
        return data.empty();
    }

    // Получение верхнего элемента стека
    int top() const {
        if (!isEmpty()) {
            return data.back();
        }
        else {
            // Возвращаем какой-то специальный флаг или выбрасываем исключение,
            // так как в пустом стеке нет вершины
            // В данном примере вернем -1 как флаг ошибки
            return -1;
        }
    }
};

// Функция для формирования двух поездов по заданному условию
void formTrain(Stack& inputStack, Stack& outputStackA, Stack& outputStackB) {
    while (!inputStack.isEmpty()) {
        int currentWagon = inputStack.top();
        inputStack.pop();

        // Пример условия для разделения по направлениям
        if (currentWagon % 2 == 0) {
            outputStackA.push(currentWagon);  // Добавляем в поезд A
        }
        else {
            outputStackB.push(currentWagon);  // Добавляем в поезд B
        }
    }
}

int main() {
    Stack inputStack;      // Стек для ввода
    Stack outputStackA;    // Стек для поезда A
    Stack outputStackB;    // Стек для поезда B

    int choice;
    std::cout << "Выберите метод ввода:\n"
        << "1. Ручной ввод\n"
        << "2. Чтение из файла\n";
    std::cin >> choice;

    if (choice == 1) {
        // Ручной ввод
        int wagon;
        std::cout << "Введите номера вагонов (введите нецелочисленное значение для завершения ввода):\n";
        while (std::cin >> wagon) {
            inputStack.push(wagon);
        }
    }
    else if (choice == 2) {
        // Ввод из файла
        std::ifstream inputFile("train_composition.txt");
        int wagon;
        while (inputFile >> wagon) {
            inputStack.push(wagon);
        }
        inputFile.close();
    }
    else {
        std::cout << "Неверный выбор. Программа завершена.\n";
        return 1;
    }

    formTrain(inputStack, outputStackA, outputStackB);

    // Вывод результатов
    std::cout << "Поезд для направления A:" << std::endl;
    while (!outputStackA.isEmpty()) {
        std::cout << outputStackA.top() << " ";
        outputStackA.pop();
    }
    std::cout << std::endl;

    std::cout << "Поезд для направления B:" << std::endl;
    while (!outputStackB.isEmpty()) {
        std::cout << outputStackB.top() << " ";
        outputStackB.pop();
    }
    std::cout << std::endl;

    return 0;
}


