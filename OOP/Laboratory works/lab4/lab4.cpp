//// lab4
//// task1
//
//#include <iostream>
//#include <string>
//
//// Класс для представления грузовика Камаз
//class Kamaz {
//private:
//    int speed; // Скорость грузовика
//    std::string name; // Наименование грузовика
//
//public:
//    // Конструктор класса Kamaz
//    Kamaz(int spd, std::string n) : speed(spd), name(n) {}
//
//    // Метод для получения скорости грузовика
//    int getSpeed() const {
//        return speed;
//    }
//
//    // Метод для вывода информации о грузовике на экран
//    void display() const {
//        std::cout << "Камаз '" << name << "': скорость " << speed << " км/ч" << std::endl;
//    }
//};
//
//// Класс для представления грузовика Tatra
//class Tatra {
//private:
//    int speed; // Скорость грузовика
//    std::string name; // Наименование грузовика
//
//public:
//    // Конструктор класса Tatra
//    Tatra(int spd, std::string n) : speed(spd), name(n) {}
//
//    // Метод для получения скорости грузовика
//    int getSpeed() const {
//        return speed;
//    }
//
//    // Метод для вывода информации о грузовике на экран
//    void display() const {
//        std::cout << "Татра '" << name << "': скорость " << speed << " км/ч" << std::endl;
//    }
//};
//
//// Функция для сравнения скоростей грузовиков Камаз и Tatra
//int FrCreater(const Kamaz& kamaz, const Tatra& tatra) {
//    if (kamaz.getSpeed() > tatra.getSpeed()) {
//        return 1; // Камаз быстрее
//    } else if (kamaz.getSpeed() < tatra.getSpeed()) {
//        return -1; // Татра быстрее
//    } else {
//        return 0; // Скорости равны
//    }
//}
//
//int main() {
//    // Создание объектов грузовиков для различных участков трассы
//    Kamaz kamazPlain(120, "Модель 1");
//    Tatra tatraPlain(110, "Модель 2");
//
//    Kamaz kamazMountains(90, "Модель 1");
//    Tatra tatraMountains(80, "Модель 2");
//
//    Kamaz kamazDesert(120, "Модель 1");
//    Tatra tatraDesert(115, "Модель 2");
//
//    // Вывод результатов сравнения для каждого участка трассы
//    std::cout << "Результаты ралли-марафона:" << std::endl;
//    std::cout << "-------------------------------------" << std::endl;
//
//    // Равнина
//    std::cout << "Равнина:" << std::endl;
//    kamazPlain.display();
//    tatraPlain.display();
//    int plainResult = FrCreater(kamazPlain, tatraPlain);
//    if (plainResult > 0) {
//        std::cout << "Победитель: Камаз" << std::endl;
//    } else if (plainResult < 0) {
//        std::cout << "Победитель: Татра" << std::endl;
//    } else {
//        std::cout << "Ничья" << std::endl;
//    }
//
//    std::cout << std::endl;
//
//    // Горы
//    std::cout << "Горы:" << std::endl;
//    kamazMountains.display();
//    tatraMountains.display();
//    int mountainsResult = FrCreater(kamazMountains, tatraMountains);
//    if (mountainsResult > 0) {
//        std::cout << "Победитель: Камаз" << std::endl;
//    } else if (mountainsResult < 0) {
//        std::cout << "Победитель: Татра" << std::endl;
//    } else {
//        std::cout << "Ничья" << std::endl;
//    }
//
//    std::cout << std::endl;
//
//    // Пустыня
//    std::cout << "Пустыня:" << std::endl;
//    kamazDesert.display();
//    tatraDesert.display();
//    int desertResult = FrCreater(kamazDesert, tatraDesert);
//    if (desertResult > 0) {
//        std::cout << "Победитель: Камаз" << std::endl;
//    } else if (desertResult < 0) {
//        std::cout << "Победитель: Татра" << std::endl;
//    } else {
//        std::cout << "Ничья" << std::endl;
//    }
//
//    return 0;
//}
//

// task2
//
//#include <iostream>
//#include <string>
//
//class Tatra; // Предварительное объявление класса Tatra, чтобы FrCreater() мог использовать его
//
//// Класс для представления грузовика Камаз
//class Kamaz {
//private:
//    int speed;
//    std::string name;
//
//public:
//    // Конструктор класса Kamaz
//    Kamaz(int spd, std::string n) : speed(spd), name(n) {}
//
//    // Метод для получения скорости грузовика
//    int getSpeed() const {
//        return speed;
//    }
//
//    // Метод для получения названия модели грузовика
//    std::string getName() const {
//        return name;
//    }
//
//    // Метод для вывода информации о грузовике на экран
//    void display() const {
//        std::cout << "Камаз: Модель " << name << ", скорость: " << speed << " км/ч" << std::endl;
//    }
//
//    // Объявление FrCreater() в качестве дружественной функции класса Kamaz
//    friend std::string FrCreater(const Kamaz& kamaz, const Tatra& tatra);
//};
//
//// Класс для представления грузовика Tatra
//class Tatra {
//private:
//    int speed;
//    std::string name;
//
//public:
//    // Конструктор класса Tatra
//    Tatra(int spd, std::string n) : speed(spd), name(n) {}
//
//    // Метод для получения скорости грузовика
//    int getSpeed() const {
//        return speed;
//    }
//
//    // Метод для получения названия модели грузовика
//    std::string getName() const {
//        return name;
//    }
//
//    // Метод для вывода информации о грузовике на экран
//    void display() const {
//        std::cout << "Татра: Модель " << name << ", скорость: " << speed << " км/ч" << std::endl;
//    }
//
//    // Объявление FrCreater() в качестве дружественной функции класса Tatra
//    friend std::string FrCreater(const Kamaz& kamaz, const Tatra& tatra);
//};
//
//// Функция для сравнения скоростей грузовиков Камаз и Tatra
//std::string FrCreater(const Kamaz& kamaz, const Tatra& tatra) {
//    if (kamaz.getSpeed() > tatra.getSpeed()) {
//        return "Камаз быстрее";
//    } else if (kamaz.getSpeed() < tatra.getSpeed()) {
//        return "Татра быстрее";
//    } else {
//        return "Скорости равны";
//    }
//}
//
//int main() {
//    // Создание объектов грузовиков для различных участков трассы
//    Kamaz kamaz(120, "КамАЗ-4326-9 (VK) ");
//    Tatra tatra(110, "TATRA PHOENIX");
//
//    // Вывод результатов сравнения скоростей
//    std::cout << "Результат: " << FrCreater(kamaz, tatra) << std::endl;
//    kamaz.display();
//    tatra.display();
//
//    return 0;
//}
//

//// task3
//#include <iostream>
//#include <string>
//
//class Kamaz; // Предварительное объявление класса Kamaz, чтобы Tatra могла использовать его
//
//// Класс для представления грузовика Tatra
//class Tatra {
//private:
//    int speed; // Скорость грузовика
//    std::string name; // Наименование грузовика
//
//public:
//    // Конструктор класса Tatra
//    Tatra(int spd, std::string n) : speed(spd), name(n) {}
//
//    // Метод для получения скорости грузовика
//    int getSpeed() const {
//        return speed;
//    }
//
//    // Метод для получения наименования грузовика
//    std::string getName() const {
//        return name;
//    }
//
//    // Метод для вывода информации о грузовике на экран
//    void display() const {
//        std::cout << "Татра '" << name << "': скорость " << speed << " км/ч" << std::endl;
//    }
//
//    // Объявление дружественности с классом Kamaz
//    friend class Kamaz;
//};
//
//// Класс для представления грузовика Kamaz
//class Kamaz {
//private:
//    int speed; // Скорость грузовика
//    std::string name; // Наименование грузовика
//
//public:
//    // Конструктор класса Kamaz
//    Kamaz(int spd, std::string n) : speed(spd), name(n) {}
//
//    // Метод для получения скорости грузовика
//    int getSpeed() const {
//        return speed;
//    }
//
//    // Метод для получения наименования грузовика
//    std::string getName() const {
//        return name;
//    }
//
//    // Метод для вывода информации о грузовике на экран
//    void display() const {
//        std::cout << "Камаз '" << name << "': скорость " << speed << " км/ч" << std::endl;
//    }
//};
//
//int main() {
//    // Создание объектов грузовиков
//    Kamaz kamaz(120, "КамАЗ-4326-9 (VK) ");
//    Tatra tatra(110, "TATRA PHOENIX");
//
//    // Вывод информации о грузовиках
//    kamaz.display();
//    tatra.display();
//
//    return 0;
//}
//

