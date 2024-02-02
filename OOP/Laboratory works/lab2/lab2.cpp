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
#include <string>
#include <vector>

using namespace std;

class Train {
public:
    string type; // тип вагона
    int number;  // номер вагона

    Train(string t, int n) : type(t), number(n) {}
};

class TrainSortingNode {
private:
    stack<Train> leftDirection;  // Вагоны направляющиеся влево
    stack<Train> rightDirection; // Вагоны направляющиеся вправо

public:
    void addTrainsToDirection(const Train &train, const string &direction) {
        if (direction == "влево") {
            leftDirection.push(train);
        } else if (direction == "вправо") {
            rightDirection.push(train);
        } else {
            cout << "Некорректное направление.\n";
        }
    }

    void displayTrains() {
        cout << "Составы по направлениям:\n";
        cout << "Влево:\n";
        displayStack(leftDirection);
        cout << "Вправо:\n";
        displayStack(rightDirection);
    }

    void displayStack(stack<Train> &s) {
        if (s.empty()) {
            cout << "Стек пуст.\n";
            return;
        }

        stack<Train> temp = s;
        cout << "\nТаблица вагонов:\n";
        cout << "------------------------------------\n";
        cout << "| тип | номер |\n";

        while (!temp.empty()) {
            cout << '|' << temp.top().type << " | " << temp.top().number << "|\n";
            temp.pop();
        }
        cout << "------------------------------------\n";
        cout << endl;
    }

    void loadTrainsFromConsole() {
        int n;
        cout << "Введите количество вагонов: ";
        cin >> n;

        for (int i = 0; i < n; ++i) {
            string type, direction;
            int number;

            cout << "Введите данные для вагона #" << i + 1 << ":\n";
            cout << "Тип (грузовой/пассажирский): ";
            cin >> type;
            cout << "Номер: ";
            cin >> number;
            cout << "Направление (влево/вправо): ";
            cin >> direction;

            addTrainsToDirection(Train(type, number), direction);
        }
    }
};

int main() {
    TrainSortingNode sortingNode;

    int choice;
    do {
        cout << "\nМеню:\n";
        cout << "1. Ввести составы\n";
        cout << "2. Показать составы\n";
        cout << "3. Выход\n";
        cout << "Выберите действие: ";
        cin >> choice;

        switch (choice) {
            case 1:
                sortingNode.loadTrainsFromConsole();
                cout << "Составы загружены с клавиатуры.\n";
                break;
            case 2:
                sortingNode.displayTrains();
                break;
            case 3:
                cout << "Выход из программы.\n";
                break;
            default:
                cout << "Некорректный выбор.\n";
        }
    } while (choice != 3);

    return 0;
}

