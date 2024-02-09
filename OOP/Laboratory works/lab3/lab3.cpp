///lab3
///task1

#include <iostream>
#include <ctime>
#include <string>

using namespace std;

const int CLK_TCK_CONST = CLOCKS_PER_SEC;

class Timer {
private:
   int seconds;

//public:
//    // Конструктор, принимающий время в секундах
//    Timer(int secs) {
//        seconds = secs;
//    }
//
//    // Конструктор, принимающий строку времени в формате "мм:сс"
//    Timer(const string& timeStr) {
//        int minutes = stoi(timeStr.substr(0, 2));
//        int seconds = stoi(timeStr.substr(3, 2));
//        this->seconds = minutes * 60 + seconds;
//    }
//
//    // Конструктор, принимающий минуты и секунды
//    Timer(int minutes, int seconds) {
//        this->seconds = minutes * 60 + seconds;
//    }
//
//    // Функция запуска таймера
   void run() {
       clock_t start = clock();
       while (seconds > 0) {
           // Получаем текущее время
           clock_t current = clock();
           double elapsed_secs = double(current - start) / CLK_TCK_CONST;
           
           // Если прошла одна секунда, уменьшаем счетчик секунд
           if (elapsed_secs >= 1.0) {
               seconds--;
               start = current;
               // Выводим текущее количество оставшихся секунд
               cout << "Осталось времени: " << seconds << " секунд" << endl;
           }
       }
       cout << "Звонок!" << endl;
   }
};

int main() {
   // Создание объекта Timer с указанием времени в секундах
   Timer timer1(5);
   timer1.run();

   // Создание объекта Timer с указанием времени в формате "мм:сс"
   Timer timer2("00:10");
   timer2.run();

   // Создание объекта Timer с указанием минут и секунд
   Timer timer3(1, 0);
   timer3.run();

   return 0;
}


// /task2
#include <iostream>
#include <string>

class Nomenclature {
private:
   std::string productName;
   double wholesalePrice;
   double retailMarkup;
   int quantity;

public:
   // Конструктор
   Nomenclature(const std::string& name, double wholesalePrice, double retailMarkup, int quantity)
       : productName(name), wholesalePrice(wholesalePrice), retailMarkup(retailMarkup), quantity(quantity) {}

   // Деструктор
   ~Nomenclature() {}

   // Функция для расчета чистого дохода при продаже
   double calculateProfit() const {
       double retailPrice = wholesalePrice * (1 + retailMarkup);
       return (retailPrice - wholesalePrice) * quantity;
   }

   // Функция для вывода данных о товаре на экран
   void displayProduct() const {
       std::cout << "Наименование товара: " << productName << std::endl;
       std::cout << "Оптовая цена: $" << wholesalePrice << std::endl;
       std::cout << "Розничная наценка: " << retailMarkup * 100 << "%" << std::endl;
       std::cout << "Колличество товара на складе: " << quantity << std::endl;
   }
};

int main() {
   // Пример использования класса
   Nomenclature product1("Iphone", 1000, 0.3, 10);
   product1.displayProduct();
   std::cout << "Средне ожидаемая прибыль: $" << product1.calculateProfit() << std::endl;

   return 0;
}


/// task3
#include <iostream>
#include <string>
#include <chrono>
#include <iomanip>
#include <sstream> // Включение для std::stringstream

class Soft {
private:
    std::string name;
    std::string developer;
    double size;
    std::chrono::system_clock::time_point licenseStartDate;
    std::chrono::system_clock::duration licenseDuration;

public:
    // Конструктор класса
    Soft(const std::string& name, const std::string& developer, double size, const std::chrono::system_clock::time_point& startDate, const std::chrono::system_clock::duration& duration)
        : name(name), developer(developer), size(size), licenseStartDate(startDate), licenseDuration(duration) {
        std::cout << "Object of class Soft is being created." << std::endl;
    }

    // Деструктор класса
    ~Soft() {
        std::cout << "Object of class Soft is being destroyed." << std::endl;
    }

    // Функция для подсчета даты окончания лицензии
    std::chrono::system_clock::time_point getLicenseEndDate() const {
        return licenseStartDate + licenseDuration;
    }

    // Функция для проверки, истекла ли лицензия
    bool isLicenseExpired() const {
        return std::chrono::system_clock::now() > getLicenseEndDate();
    }

    // Функция для вывода всех данных об установленном программном обеспечении на экран
    void printInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Developer: " << developer << std::endl;
        std::cout << "Size: " << size << " MB" << std::endl;
        std::cout << "License start date: " << formatDate(licenseStartDate) << std::endl;
        std::cout << "License end date: " << formatDate(getLicenseEndDate()) << std::endl;
        
        if (isLicenseExpired()) {
            std::cout << "License has expired." << std::endl;
        } else {
            std::cout << "License is still valid." << std::endl;
        }
    }

    // Функция для форматирования даты в удобочитаемый вид (DD MM YYYY)
    std::string formatDate(const std::chrono::system_clock::time_point& date) const {
        std::time_t time = std::chrono::system_clock::to_time_t(date);
        std::tm* tm = std::localtime(&time);
        std::stringstream ss;
        ss << std::setw(2) << std::setfill('0') << tm->tm_mday << " "
           << std::setw(2) << std::setfill('0') << (tm->tm_mon + 1) << " "
           << (tm->tm_year + 1900);
        return ss.str();
    }
};

int main() {
    // Получаем данные о программном обеспечении от пользователя
    std::string name, developer;
    double size;
    std::cout << "Enter name of software: ";
    std::cin >> name;
    std::cout << "Enter developer of software: ";
    std::cin >> developer;
    std::cout << "Enter size of software (in MB): ";
    std::cin >> size;

    // Получаем дату начала действия лицензии от пользователя
    std::cout << "Enter license start date in format DD MM YYYY: ";
    int day, month, year;
    std::cin >> day >> month >> year;
    std::tm tm_date = {0};
    tm_date.tm_year = year - 1900;
    tm_date.tm_mon = month - 1;
    tm_date.tm_mday = day;
    std::chrono::system_clock::time_point licenseStartDate = std::chrono::system_clock::from_time_t(std::mktime(&tm_date));

    // Задаем длительность лицензии (6 месяцев в данном случае)
    std::chrono::system_clock::duration licenseDuration = std::chrono::hours(24 * 30 * 6);

    // Создаем объект класса Soft
    Soft mySoftware(name, developer, size, licenseStartDate, licenseDuration);

    // Выводим информацию о программном обеспечении
    mySoftware.printInfo();

    return 0;
}

