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
#include <cstdlib>
#include <ctime>
#include <limits>  // Для очистки буфера ввода
#include <unistd.h>  // Для использования функции sleep
#include <stack>
using namespace std;

class STACK {
private:
    stack<int> myStack1;
    stack<int> myStack2;
    stack<int> myStack3;
    stack<int> myStack4;

public:
    void input(int a) {
        myStack1.push(a);
        myStack2 = myStack1;
    }

    void raz(int n) {
        if (myStack1.empty()) {
            cout << "Нет данных!" << endl;
        } else {
            for (int i = 0; i < n; i++) {
                if (myStack1.top() % 2 == 0) {
                    myStack3.push(myStack1.top());
                    myStack1.pop();
                } else {
                    myStack4.push(myStack1.top());
                    myStack1.pop();
                }
            }
            cout << "Деление завершено!" << endl;
        }
    }

    void file_Show() {
        ifstream fin;
        string filePath = "/Users/abulhairkamiev/Spring/file2.txt";  // Specify the full path
        fin.open(filePath);

        if (!fin.is_open()) {
            cout << "Файл не открылся! " << endl;
        } else {
            int a;
            while (fin >> a) {
                myStack1.push(a);
            }
            myStack2 = myStack1;
        }

        fin.close();
        cout << "Данные считаны из файла!!" << endl;
    }


    void Show() {
        myStack2 = myStack1;
        if (!myStack2.empty()) {
            while (!myStack2.empty()) {
                cout << myStack2.top() << endl;
                myStack2.pop();
            }
        } else {
            cout << "Стек пуст!" << endl;
        }
    }

    void chetn() {
        myStack2 = myStack3;

        if (!myStack2.empty()) {
            while (!myStack2.empty()) {
                cout << myStack2.top() << endl;
                myStack2.pop();
            }
        } else {
            cout << "Нет таких вагонов!" << endl;
        }
    }

    void ne_chetn() {
        myStack2 = myStack4;
        if (!myStack2.empty()) {
            while (!myStack2.empty()) {
                cout << myStack2.top() << endl;
                myStack2.pop();
            }
        } else {
            cout << "Нет таких вагонов!" << endl;
        }
    }
};

int main() {
    setlocale(LC_ALL, "RUS");
    srand(static_cast<unsigned int>(time(NULL)));
    int col = 0, zn = 0;
    int val = 0;

    STACK obj;

    cout << "Введите количество вагонов: ";
    cin >> col;

    ofstream fout;
    fout.open("file2.txt");
    if (!fout.is_open()) {
        cout << "Файл не открылся!" << endl;
        return 1;
    } else {
        for (int i = 0; i < col; i++) {
            fout << rand() % 20 << endl;
        }
    }
    fout.close();

    while (val != 6) {
        system("clear");  // Используем "clear" для очистки экрана на macOS
        cout << "\tМеню" << endl;
        cout << "0) Ввод данных вагонов\n1) Формирование состава из файла\n2) Вывод\n3) Разделить вагоны\n4) Вывод четных вагонов\n5) Вывод нечетных вагонов\n6) Выход\n";
        cout << "\nВыберите из меню: ";
        cin >> val;

        if (val == 0) {
            system("clear");
            cout << "Введите номера вагонов (int): " << endl;
            for (int i = 0; i < col; i++) {
                cin >> zn;
                obj.input(zn);
            }
            cout << "\nДанные записаны!\n\n";
            // Очистка буфера ввода
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Нажмите Enter для продолжения...";
            cin.get();
        } else if (val == 1) {
            system("clear");
            obj.file_Show();
            // Очистка буфера ввода
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Нажмите Enter для продолжения...";
            cin.get();
        } else if (val == 2) {
            system("clear");
            cout << "\tВсе вагоны: \n\n";
            obj.Show();
            // Очистка буфера ввода
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Нажмите Enter для продолжения...";
            cin.get();
        } else if (val == 3) {
            system("clear");
            obj.raz(col);
            // Очистка буфера ввода
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Нажмите Enter для продолжения...";
            cin.get();
        } else if (val == 4) {
            system("clear");
            cout << "\tВагоны с четными номерами: \n\n";
            obj.chetn();
            // Очистка буфера ввода
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Нажмите Enter для продолжения...";
            cin.get();
        } else if (val == 5) {
            system("clear");
            cout << "\tВагоны с нечетными номерами: \n\n";
            obj.ne_chetn();
            // Очистка буфера ввода
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Нажмите Enter для продолжения...";
            cin.get();
        }
    }

    cout << "До свидания!" << endl;
    return 0;
}

