#include "pch.h"
#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;

struct timetable
{
	string name, secondname, lastname, phone;
	int  day, month, year, minutes[1], hours[1], minutes_fix[1], hours_fix[1],day_fix,month_fix,year_fix;
};

void menu(timetable *time, int number);

void Data_Input(timetable *time, int number)
{
	system("cls");
	for (size_t i = 0; i < number; i++)
	{
		std::cout << "Имя обонента: " << "\n";
		std::cin >> time[i].name;
		std::cout << "\n";

		std::cout << "Отчество обонента: " << "\n";
		std::cin >> time[i].secondname;
		std::cout << "\n";

		std::cout << "Фамилия обонента: " << "\n";
		std::cin >> time[i].lastname;
		std::cout << "\n";


		std::cout << "Номер телефона: " << "\n";
		std::cin >> time[i].phone;
		std::cout << "\n";


		

		std::cout << "Время поломки" << "\n";

		std::cout << "Минуты: " << "\n";
		std::cin >> time[i].minutes[0];
		std::cout << "\n";
		std::cout << "Час" << "\n";
		std::cin >> time[i].hours[0];
		std::cout << "\n";
		std::cout << "День: " << "\n";
		std::cin >> time[i].day;
		std::cout << "\n";
		std::cout << "Месяц: " << "\n";
		std::cin >> time[i].month;
		std::cout << "\n";
		std::cout << "Год: " << "\n";
		std::cin >> time[i].year;
		std::cout << "\n";

		std::cout << "Врямя устранения" << "\n";

		std::cout << "Минуты: " << "\n";
		std::cin >> time[i].minutes_fix[0];
		std::cout << "\n";
		std::cout << "Час" << "\n";
		std::cin >> time[i].hours_fix[0];
		std::cout << "\n";
		std::cout << "День: " << "\n";
		std::cin >> time[i].day_fix;
		std::cout << "\n";
		std::cout << "Месяц: " << "\n";
		std::cin >> time[i].month_fix;
		std::cout << "\n";
		std::cout << "Год: " << "\n";
		std::cin >> time[i].year_fix;
		std::cout << "\n";

	}
	menu(time, number);
}

void Data_Output(timetable *time, int number)
{
	system("cls");
	for (size_t i = 0; i < number; i++)
	{
		std::cout << "Имя обонента: " << "\n";
		std::cin >> time[i].name;
		std::cout << "\n";

		std::cout << "Отчество обонента: " << "\n";
		std::cin >> time[i].secondname;
		std::cout << "\n";

		std::cout << "Фамилия обонента: " << "\n";
		std::cin >> time[i].lastname;
		std::cout << "\n";


		std::cout << "Номер телефона: " << "\n";
		std::cin >> time[i].phone;
		std::cout << "\n";




		std::cout << "Время поломки" << "\n";

		std::cout << "Минуты: " << "\n";
		std::cin >> time[i].minutes[0];
		std::cout << "\n";
		std::cout << "Час" << "\n";
		std::cin >> time[i].hours[0];
		std::cout << "\n";
		std::cout << "День: " << "\n";
		std::cin >> time[i].day;
		std::cout << "\n";
		std::cout << "Месяц: " << "\n";
		std::cin >> time[i].month;
		std::cout << "\n";
		std::cout << "Год: " << "\n";
		std::cin >> time[i].year;
		std::cout << "\n";

		std::cout << "Врямя устранения" << "\n";

		std::cout << "Минуты: " << "\n";
		std::cin >> time[i].minutes_fix[0];
		std::cout << "\n";
		std::cout << "Час" << "\n";
		std::cin >> time[i].hours_fix[0];
		std::cout << "\n";
		std::cout << "День: " << "\n";
		std::cin >> time[i].day_fix;
		std::cout << "\n";
		std::cout << "Месяц: " << "\n";
		std::cin >> time[i].month_fix;
		std::cout << "\n";
		std::cout << "Год: " << "\n";
		std::cin >> time[i].year_fix;
		std::cout << "\n";


	}
	menu(time, number);
}

void Data_Save(timetable *time, int number)
{
	std::cout << "Выберите название файла" << "\n";
	string choice;
	std::cin >> choice;

	ofstream database;
	database.open(choice);

	for (size_t i = 0; i < number; i++)
	{
		database << time[i].name << " ";
		database << time[i].secondname << " ";
		database << time[i].lastname << " ";
		database << time[i].phone << " ";
		database << time[i].day << " ";
		database << time[i].month << " ";
		database << time[i].year << " ";
		database << time[i].minutes[0] << " ";
		database << time[i].hours[0] << " ";
		database << time[i].minutes_fix[0] << " ";
		database << time[i].hours_fix[0] << " ";
		database << time[i].day_fix << " ";
		database << time[i].month_fix << " ";
		database << time[i].year_fix << " ";
	}

	std::cout << "Успешная запись!" << "\n";
	database.close();
	menu(time, number);
}

void Data_New_Save(timetable *time, int number, string file_name)
{
	std::cout << "Создание файла " << file_name << "\n";
	ofstream database;
	database.open(file_name);

	for (size_t i = 0; i < number; i++)
	{
		database << time[i].name << " ";
		database << time[i].secondname << " ";
		database << time[i].lastname << " ";
		database << time[i].phone << " ";
		database << time[i].day << " ";
		database << time[i].month << " ";
		database << time[i].year << " ";
		database << time[i].minutes[0] << " ";
		database << time[i].hours[0] << " ";
		database << time[i].minutes_fix[0] << " ";
		database << time[i].hours_fix[0] << " ";
		database << time[i].day_fix << " ";
		database << time[i].month_fix << " ";
		database << time[i].year_fix << " ";
	}

	std::cout << "Успешная запись!" << "\n";
	database.close();
}

void Data_Read(timetable *time, int number)
{
	system("cls");
	std::cout << "Выберите название файла" << "\n";
	string choice;
	std::cin >> choice;

	ifstream database;
	database.open(choice);

	for (size_t i = 0; i < number; i++)
	{
		database >> time[i].name;
		database >> time[i].secondname;
		database >> time[i].lastname;
		database >> time[i].phone;
		database >> time[i].day;
		database >> time[i].month;
		database >> time[i].year;
		database >> time[i].minutes[0];
		database >> time[i].hours[0];
		database >> time[i].minutes_fix[0];
		database >> time[i].hours_fix[0];
		database >> time[i].day_fix;
		database >> time[i].month_fix;
		database >> time[i].year_fix;
	}

	std::cout << "Успешное считывание" << "\n";
	database.close();
	menu(time, number);
}







void menu(timetable *time, int number)
{

	std::cout << "Сделайте выбор:" << "\n";
	std::cout << "1. Внести данные" << "\n";
	std::cout << "2. Считать данные" << "\n";
	std::cout << "3. Вывести на экран данные" << "\n";
	std::cout << "4. Сохранить текущие данные" << "\n";

	int choice = 0;

	std::cin >> choice;
	if (choice == 1)
	{
		Data_Input(time, number);
	}
	else if (choice == 2)
	{
		Data_Read(time, number);
	}
	else if (choice == 3)
	{
		Data_Output(time, number);
	}
	else if (choice == 4)
	{
		Data_Save(time, number);
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");
	std::cout << "Начало работы." << "\n";
	std::cout << "Выберите количество записей" << "\n";

	int number = 0;

	std::cin >> number;

	timetable *time = new timetable[number];
	menu(time, number);
}