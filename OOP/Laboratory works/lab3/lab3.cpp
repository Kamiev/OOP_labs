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

class Soft {
private:
    std::string name;
    std::string developer;
    double size;
    std::chrono::system_clock::time_point licenseExpirationDate;

public:
    // Конструктор класса
    Soft(const std::string& name, const std::string& developer, double size, const std::chrono::system_clock::time_point& expirationDate)
        : name(name), developer(developer), size(size), licenseExpirationDate(expirationDate) {
        std::cout << "Object of class Soft is being created." << std::endl;
    }

    // Деструктор класса
    ~Soft() {
        std::cout << "Object of class Soft is being destroyed." << std::endl;
    }

    // Функция для подсчета количества дней до завершения лицензии
    int daysUntilLicenseExpiration() const {
        auto now = std::chrono::system_clock::now();
        std::chrono::duration<int> diff = std::chrono::duration_cast<std::chrono::days>(licenseExpirationDate - now);
        return diff.count();
    }

    // Функция для вывода всех данных об установленном программном обеспечении на экран
    void printInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Developer: " << developer << std::endl;
        std::cout << "Size: " << size << " MB" << std::endl;
        std::cout << "Days until license expiration: " << daysUntilLicenseExpiration() << std::endl;
    }
};

int main() {
    // Пример использования класса Soft
    std::chrono::system_clock::time_point expirationDate = std::chrono::system_clock::now() + std::chrono::hours(24 * 30 * 6); // Лицензия на 6 месяцев

    Soft mySoftware("MySoftware", "MyCompany", 50.5, expirationDate);
    mySoftware.printInfo();

    return 0;
}

