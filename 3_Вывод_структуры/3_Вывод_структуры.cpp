// 3_Вывод_структуры.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct address//структура
{

	std::string city;
	std::string street;
	int apartment;
	int house_number;
	int postal_code;
};
//Создайте функцию для вывода структуры на консоль.Протестируйте созданную функцию. Создайте в коде экземпляры структуры, передайте их в функцию и выведите на консоль получившиеся экземпляры структуры.
//Структура объявляется вне функций.

void output(struct address* person)
{

	std::cout << "Город:" << person->city << std::endl;
	std::cout << "Улица:" << person->street << std::endl;
	std::cout << "Номер дома:" << person->house_number << std::endl;
	std::cout << "Индекс:" << person->postal_code << std::endl;
	std::cout << "Номер квартиры:" << person->apartment << std::endl;

}

int main() {

	setlocale(LC_ALL, "RU");

	address person;//завели переменную.экземпляр

	std::cout << "Город:";
	std::string info2;
	std::cin >> info2;
	person.city = info2;

	std::cout << "Улица:";
	std::string info;
	std::cin >> info;
	person.street = info;

	std::cout << "Номер дома:";
	int info1;
	std::cin >> info1;
	person.house_number = info1;

	std::cout << "Номер квартиры:";
	int info4;
	std::cin >> info4;
	person.apartment = info4;

	std::cout << "Индекс:";
	int info3;
	std::cin >> info3;
	person.postal_code = info3;


	std::cout << "-----------------" << std::endl;

	output(&person);


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
