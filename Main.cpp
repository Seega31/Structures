#include <iostream>
#include <string>

struct Date {
	int day = 1;
	int mounth = 1;
	int year = 1970;
	std::string note = "empty";
};

void print_date(const Date& D) {
	std::cout << D.day << '.' << D.mounth << '.' << D.year << " - " << D.note << std::endl;
}

Date Input_date() {
	Date tmp;
	std::cout << "Введите день -> ";
	std::cin >> tmp.day;
	std::cout << "Введите месяц -> ";
	std::cin >> tmp.mounth;
	std::cout << "Введите год -> ";
	std::cin >> tmp.year;
	std::cin.ignore();
	std::cout << "Введите запись -> ";
	std::getline(std::cin, tmp.note);

	return tmp;
}

void fill_date(Date& D) {
	std::cout << "Введите день -> ";
	std::cin >> D.day;
	std::cout << "Введите месяц -> ";
	std::cin >> D.mounth;
	std::cout << "Введите год -> ";
	std::cin >> D.year;
	std::cin.ignore();
	std::cout << "Введите запись -> ";
	std::getline(std::cin, D.note);
}

struct MyDate {
	int day = 1;
	int mounth = 1;
	int year = 1970;
};

struct Coinkeeper {
	std::string name = "noname";
	MyDate brithday;
	int coins_number = 0;
	int* coins = nullptr;
};

void print_keeper(const Coinkeeper& ck) {
	std::cout << "Имя: " << ck.name << std::endl;
	std::cout << "Дата рождения: " << ck.brithday.day << '.' << ck.brithday.mounth << '.' << ck.brithday.year << std::endl;
	std::cout << "Монеты: ";
	for (int i = 0; i < ck.coins_number; i++)
		std::cout << ck.coins[i] << ' ';
	std::cout << std::endl;
}

inline int age(const Coinkeeper& ck, int year) {
	return (year - ck.brithday.year);
}

int cash(const Coinkeeper& ck) {
	int sum = 0;
	for (int i = 0; i < ck.coins_number; i++)
		sum += ck.coins[i];
	return sum;
}

struct Point {
	double X{};
	double Y{};
};

int compare_distance(Point P1, Point P2) {
	double dist1 = P1.X * P1.X + P1.Y * P1.Y;
	double dist2 = P2.X * P2.X + P2.Y * P2.Y;
	if (dist1 > dist2)
		return 1;
	return dist1 < dist2 ? - 1 : 0;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//Структуры: СОздание инициализация работа с полями
	/*struct Person {
		std::string name;
		int age;
		std::string job;
		double salary;
	} p3, p4{ "unknow person", 15 };


	Person p1; //Создание обьекта на основе структуру person
	// Обьект p1
	p1.name = "Tom Smith";
	p1.age = 26;
	p1.job = "program";
	p1.salary = 88888;

	//Вывод обьекта p1
	std::cout << "Имя: " << p1.name << std::endl;
	std::cout << "Возраст: " << p1.age << std::endl;
	std::cout << "Работа: " << p1.job << std::endl;
	std::cout << "Зарплата: " << p1.salary << std::endl;
	std::cout << "_______________________\n";


	Person p2{
		"Bob Thomas",
		45,
		"director",
		130000
	};

	std::cout << "Имя: " << p2.name << std::endl;
	std::cout << "Возраст: " << p2.age << std::endl;
	std::cout << "Работа: " << p2.job << std::endl;
	std::cout << "Зарплата: " << p2.salary << std::endl;

	p3 = p1;//копирование значений полей обьект p1 в поля обьекта p3*/

	
	//Указатели и функции при работе со структурами
	/*Date d1;
	print_date(d1);
	Date* pd1 = &d1;
	std::cout << pd1 << std::endl;
	std::cout << "День: " << pd1->day << std::endl;// Обращенние к полю day через указатель d1
	std::cout << std::endl;


	std::cout << "Ввод данных в обьект: \n";
	//Date d2 = Input_date();
	Date d2;
	fill_date(d2);

	print_date(d2);*/


	//Задача 1.Хранитель монет
	/*std::cout << "Задача 1.\n";
	Coinkeeper ck{
		"Robert Polson",
		{ 31, 10, 1996 },
		5,
		new int [5]{10, 2, 5, 2, 1}
	};
	print_keeper(ck);
	std::cout << "Возраст: " << age(ck, 2023) << std::endl;
	std::cout << "Количество монет: " << cash(ck) << std::endl;
	delete[] ck.coins;*/


	//Задача 2. Точки в плоскости
	std::cout << "Задача 2.\n";
	Point A{ 2.2, 5.0 }, B{ 7.1, 6.8 };
	std::cout << compare_distance(A, B) << std::endl;
	


	return 0;
}