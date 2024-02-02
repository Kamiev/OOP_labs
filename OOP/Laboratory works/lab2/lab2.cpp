////          lab2
////task 1
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//class Aeroflot {
//public:
//    int flightNumber;
//    std::string departurePoint;
//    std::string destinationPoint;
//    std::string arrivalTime;
//    std::string departureTime;
//    int registrationSection;
//
//    Aeroflot(int flightNumber, const std::string& departurePoint, const std::string& destinationPoint,
//            const std::string& arrivalTime, const std::string& departureTime, int registrationSection)
//        : flightNumber(flightNumber),
//          departurePoint(departurePoint),
//          destinationPoint(destinationPoint),
//          arrivalTime(arrivalTime),
//          departureTime(departureTime),
//          registrationSection(registrationSection) {}
//
//    void displayFlightInfo() const {
//        std::cout << flightNumber << "\t\t" << departurePoint << "\t\t" << destinationPoint << "\t\t"
//                  << arrivalTime << "\t\t" << departureTime << "\t\t" << registrationSection << std::endl;
//    }
//};
//
//bool compareFlights(const Aeroflot& flight1, const Aeroflot& flight2) {
//    return flight1.destinationPoint < flight2.destinationPoint;
//}
//
//int main() {
//    std::vector<Aeroflot> flights;
//    setlocale(LC_ALL, ("ru"));
//
//    // Ввод информации о рейсах с клавиатуры
//    int numFlights;
//    std::cout << "Введите количество рейсов: ";
//    std::cin >> numFlights;
//
//    for (int i = 0; i < numFlights; ++i) {
//        int flightNumber;
//        std::string departurePoint, destinationPoint, arrivalTime, departureTime;
//        int registrationSection;
//
//        std::cout << "Введите информацию о рейсе " << i + 1 << ":" << std::endl;
//        std::cout << "Номер рейса: ";
//        std::cin >> flightNumber;
//        std::cout << "Пункт отправления: ";
//        std::cin >> departurePoint;
//        std::cout << "Пункт назначения: ";
//        std::cin >> destinationPoint;
//        std::cout << "Время прибытия: ";
//        std::cin >> arrivalTime;
//        std::cout << "Время отправления: ";
//        std::cin >> departureTime;
//        std::cout << "Номер секции для регистрации: ";
//        std::cin >> registrationSection;
//
//        flights.emplace_back(flightNumber, departurePoint, destinationPoint,
//                             arrivalTime, departureTime, registrationSection);
//    }
//
//    // Сортировка рейсов по названию пунктов назначения
//    std::sort(flights.begin(), flights.end(), compareFlights);
//
//    // Вывод таблицы рейсов
//    std::cout << "\nТаблица рейсов:\n";
//    std::cout << "Номер\tОтправление\tНазначение\tПрибытие\tОтправка\tРегистрация\n";
//    if (!flights.empty()) {
//        for (const auto& flight : flights) {
//            flight.displayFlightInfo();
//        }
//    } else {
//        std::cout << "Нет доступных рейсов.\n";
//    }
//
//    return 0;
//}


// task 2
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//
//class Student {
//public:
//    std::string firstName;
//    std::string lastName;
//    std::string dateOfBirth;
//    std::string phoneNumber;
//
//    Student(const std::string& firstName, const std::string& lastName,
//            const std::string& dateOfBirth, const std::string& phoneNumber)
//        : firstName(firstName),
//          lastName(lastName),
//          dateOfBirth(dateOfBirth),
//          phoneNumber(phoneNumber) {}
//};
//
//class StudentGroup {
//private:
//    std::vector<Student> students;
//
//public:
//    void addStudent(const Student& student) {
//        students.push_back(student);
//    }
//
//    void removeStudent(const std::string& lastName) {
//        students.erase(std::remove_if(students.begin(), students.end(),
//                       [&lastName](const Student& student) { return student.lastName == lastName; }),
//                       students.end());
//    }
//
//    Student* findStudent(const std::string& lastName) {
//        auto it = std::find_if(students.begin(), students.end(),
//                               [&lastName](const Student& student) { return student.lastName == lastName; });
//
//        return (it != students.end()) ? &(*it) : nullptr;
//    }
//
//    void sortStudentsByName() {
//        std::sort(students.begin(), students.end(),
//                  [](const Student& a, const Student& b) { return a.lastName < b.lastName; });
//    }
//
//    void sortStudentsByDateOfBirth() {
//        std::sort(students.begin(), students.end(),
//                  [](const Student& a, const Student& b) { return a.dateOfBirth < b.dateOfBirth; });
//    }
//
//    void displayStudents() const {
//        if (students.empty()) {
//            std::cout << "Группа пуста.\n";
//        } else {
//            std::cout << "Студенты в группе:\n";
//            for (const auto& student : students) {
//                std::cout << "Фамилия: " << student.lastName << "\tИмя: " << student.firstName
//                          << "\tДата рождения: " << student.dateOfBirth << "\tТелефон: " << student.phoneNumber << std::endl;
//            }
//        }
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, ("ru"));
//    StudentGroup group;
//
//    int choice;
//    do {
//        std::cout << "\nМеню:\n";
//        std::cout << "1. Добавить студента\n";
//        std::cout << "2. Удалить студента\n";
//        std::cout << "3. Найти студента по фамилии\n";
//        std::cout << "4. Сортировать студентов по фамилии\n";
//        std::cout << "5. Сортировать студентов по дате рождения\n";
//        std::cout << "6. Вывести список студентов\n";
//        std::cout << "0. Выход\n";
//        std::cout << "Выберите действие: ";
//        std::cin >> choice;
//
//        switch (choice) {
//            case 1: {
//                std::string firstName, lastName, dateOfBirth, phoneNumber;
//                std::cout << "Введите данные студента:\n";
//                std::cout << "Имя: ";
//                std::cin >> firstName;
//                std::cout << "Фамилия: ";
//                std::cin >> lastName;
//                std::cout << "Дата рождения: ";
//                std::cin >> dateOfBirth;
//                std::cout << "Номер телефона: ";
//                std::cin >> phoneNumber;
//
//                group.addStudent(Student(firstName, lastName, dateOfBirth, phoneNumber));
//                break;
//            }
//            case 2: {
//                std::string lastName;
//                std::cout << "Введите фамилию студента для удаления: ";
//                std::cin >> lastName;
//                group.removeStudent(lastName);
//                break;
//            }
//            case 3: {
//                std::string lastName;
//                std::cout << "Введите фамилию студента для поиска: ";
//                std::cin >> lastName;
//                Student* foundStudent = group.findStudent(lastName);
//                if (foundStudent) {
//                    std::cout << "Студент найден:\n";
//                    std::cout << "Фамилия: " << foundStudent->lastName << "\tИмя: " << foundStudent->firstName
//                              << "\tДата рождения: " << foundStudent->dateOfBirth << "\tТелефон: " << foundStudent->phoneNumber << std::endl;
//                } else {
//                    std::cout << "Студент не найден.\n";
//                }
//                break;
//            }
//            case 4:
//                group.sortStudentsByName();
//                std::cout << "Студенты отсортированы по фамилии.\n";
//                break;
//            case 5:
//                group.sortStudentsByDateOfBirth();
//                std::cout << "Студенты отсортированы по дате рождения.\n";
//                break;
//            case 6:
//                group.displayStudents();
//                break;
//            case 0:
//                std::cout << "Выход из программы.\n";
//                break;
//            default:
//                std::cout << "Некорректный выбор. Попробуйте снова.\n";
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}
//
// task 3
//
//#include <iostream>
//#include <stack>
//#include <fstream>
//#include <string>
//#include <vector>
//
//// Класс стека
//template <typename T>
//class Stack {
//private:
//    std::stack<T> data;
//
//public:
//    void push(const T& element) {
//        data.push(element);
//    }
//
//    void pop() {
//        if (!data.empty()) {
//            data.pop();
//        }
//    }
//
//    T top() const {
//        return data.top();
//    }
//
//    bool empty() const {
//        return data.empty();
//    }
//
//    size_t size() const {
//        return data.size();
//    }
//};
//
//// Структура для хранения информации о вагоне
//struct Wagon {
//    int number;
//};
//
//// Функция для сохранения состава в файл
//void saveTrainToFile(const Stack<Wagon>& platform) {
//    std::ofstream file("train_data.txt");
//    if (file.is_open()) {
//        Stack<Wagon> tempPlatform = platform;
//        while (!tempPlatform.empty()) {
//            file << tempPlatform.top().number << " ";
//            tempPlatform.pop();
//        }
//        file.close();
//        std::cout << "Состав сохранен в файле 'train_data.txt'." << std::endl;
//    } else {
//        std::cout << "Не удалось открыть файл для сохранения." << std::endl;
//    }
//}
//
//// Функция для формирования состава из файла
//void fillTrainFromFile(Stack<Wagon>& platform) {
//    std::ifstream file("train_data.txt");
//    if (file.is_open()) {
//        int wagonNumber;
//        while (file >> wagonNumber) {
//            platform.push({wagonNumber});
//        }
//        file.close();
//        std::cout << "Состав загружен из файла 'train_data.txt'." << std::endl;
//    } else {
//        std::cout << "Не удалось открыть файл. Создание нового файла." << std::endl;
//    }
//}
//
//// Функция для формирования состава
//void fillTrain(Stack<Wagon>& platform) {
//    int wagonNumber;
//    std::cout << "Введите номера вагонов (Q для завершения):" << std::endl;
//
//    while (std::cin >> wagonNumber) {
//        platform.push({wagonNumber});
//
//        // Проверка наличия символа новой строки (Enter)
//        if (std::cin.peek() == '\n') {
//            break;
//        }
//    }
//    saveTrainToFile(platform); // Сохраняем состав в файл после ввода с клавиатуры
//}
//
//// Функция для обработки состава на сортировочном узле
//void processTrain(Stack<Wagon>& inputTrack, Stack<Wagon>& outputTrackA, Stack<Wagon>& outputTrackB) {
//    while (!inputTrack.empty()) {
//        if (inputTrack.top().number % 2 == 0) {
//            outputTrackA.push(inputTrack.top());
//        } else {
//            outputTrackB.push(inputTrack.top());
//        }
//        inputTrack.pop();
//    }
//}
//
//// Функция для вывода всех вагонов
//void displayAllWagons(const Stack<Wagon>& platform) {
//    std::cout << "Все вагоны: ";
//    Stack<Wagon> tempPlatform = platform;
//    while (!tempPlatform.empty()) {
//        std::cout << tempPlatform.top().number << " ";
//        tempPlatform.pop();
//    }
//    std::cout << std::endl;
//}
//
//int main() {
//    // При создании объекта inputTrack автоматически создается файл
//    Stack<Wagon> inputTrack;
//
//    Stack<Wagon> outputTrackA;
//    Stack<Wagon> outputTrackB;
//
//    std::cout << "Файл автоматически создан." << std::endl;
//
//    int choice;
//    do {
//        std::cout << "\nМеню:\n";
//        std::cout << "1. Ввод данных вагонов.\n";
//        std::cout << "2. Сохранение вагонов в файл.\n";
//        std::cout << "3. Обработка вагонов на сортировочном узле.\n";
//        std::cout << "4. Вывод четных вагонов.\n";
//        std::cout << "5. Вывод нечетных вагонов.\n";
//        std::cout << "6. Вывод всех вагонов.\n";
//        std::cout << "0. Выход.\n";
//        std::cout << "Выберите опцию: ";
//        std::cin >> choice;
//
//        switch (choice) {
//            case 1:
//                fillTrain(inputTrack);
//                break;
//            case 2:
//                saveTrainToFile(inputTrack);
//                break;
//            case 3:
//                processTrain(inputTrack, outputTrackA, outputTrackB);
//                std::cout << "Состав обработан на сортировочном узле." << std::endl;
//                break;
//            case 4:
//                displayAllWagons(outputTrackA);
//                break;
//            case 5:
//                displayAllWagons(outputTrackB);
//                break;
//            case 6:
//                displayAllWagons(inputTrack);
//                break;
//            case 0:
//                std::cout << "Выход из программы." << std::endl;
//                break;
//            default:
//                std::cout << "Некорректный выбор. Повторите ввод." << std::endl;
//                break;
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}
