#include "pch.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>

struct flight
{
	char Name[30];
	int Number;
	char Destination[30];
	double LoadCapacity;
	double UnitCost;
	double Cost;

};

void Find(flight *car, char *Name, int Number)
{
	for (int i = 0; i < Number; i++)
	{
		if (strcmp(Name, car[i].Name) == 0)
		{
			std::cout << "\n";
			std::cout << "Name: " << car[i].Name << "\n";
			std::cout << "Number: " << car[i].Number << "\n";
			std::cout << "Destination: " << car[i].Destination << "\n";
			std::cout << "LoadCapacacity: " << car[i].LoadCapacity << "\n";
			std::cout << "UnitCost: " << car[i].UnitCost << "\n";
			std::cout << "Cost: " << car[i].Cost << "\n";
			
		}
		else
		{
			std::cout << "\n";
			std::cout << "Correct your choice!" << "\n";
		}
	}
}


void InitMassive(flight *car, int Number)
{
	std::cout << "\n";
	for (size_t i = 0; i < Number; i++)
	{
		std::cout << "Name:" << "\n";
		std::cin >> car[i].Name;
		std::cout << "Number: " <<"\n";
		std::cin >> car[i].Number;
		std::cout << "\n";
		std::cout << "Destination:" << "\n";
		std::cin >> car[i].Destination;
		std::cout << "LoadCapacacity: " << "\n";
		std::cin >> car[i].LoadCapacity;
		std::cout << "\n";
		std::cout << "UnitCost:" << "\n";
		std::cin >> car[i].UnitCost;
		std::cout << "Cost: " << "\n";
		std::cin >> car[i].Cost;
		std::cout << "\n";

		
	}
}

void InitNewMassive(flight *new_car, int Number, int Final)
{
	std::cout << "\n";
	for (size_t i = Number; i < Final; i++)
	{
		std::cout << "First Name:" << "\n";
		std::cin >> new_car[i].Name;
		std::cout << "Number: " << "\n";
		std::cin >> new_car[i].Number;
		std::cout << "\n";
		std::cout << "Destination:" << "\n";
		std::cin >> new_car[i].Destination;
		std::cout << "LoadCapacacity: " << "\n";
		std::cin >> new_car[i].LoadCapacity;
		std::cout << "\n";
		std::cout << "UnitCost:" << "\n";
		std::cin >> new_car[i].UnitCost;
		std::cout << "Cost: " << "\n";
		std::cin >> new_car[i].Cost;
		std::cout << "\n";
		

		
	}
}

void DisplayCar(flight car)
{
	std::cout << "\n";
	std::cout << "Name: " << car.Name << "\n";
	std::cout << "Number: " << car.Number << "\n";
	std::cout << "Destination: " << car.Destination << "\n";
	std::cout << "LoadCapacacity: " << car.LoadCapacity << "\n";
	std::cout << "UnitCost: " << car.UnitCost << "\n";
	std::cout << "Cost: " << car.Cost << "\n";
	
}

void DisplayNewArray(flight *new_car, int Final)
{
	for (size_t i = 0; i < Final; i++)
	{
		DisplayCar(new_car[i]);
	}
}

void DisplayNewSoldier(flight new_car)
{
	std::cout << "\n";
	std::cout << "Name: " << new_car.Name << "\n";
	std::cout << "Number: " << new_car.Number << "\n";
	std::cout << "Destination: " << new_car.Destination << "\n";
	std::cout << "LoadCapacacity: " << new_car.LoadCapacity << "\n";
	std::cout << "UnitCost: " << new_car.UnitCost << "\n";
	std::cout << "Cost: " << new_car.Cost << "\n";

}

void DisplayArray(flight *car, int Number)
{
	for (size_t i = 0; i < Number; i++)
	{
		DisplayCar(car[i]);
	}
}

void SWAP(flight *car, int i, int j) // Реализация функции 
{
	flight swap;

	swap = car[i];
	car[i] = car[j];
	car[j] = swap;
}

void NameSort(flight *man, int Number)
{
	for (int i = 0; i < Number; i++)
	{
		for (int j = i + 1; j < Number; j++)
		{
			if (strcmp(man[i].Name, man[j].Name) > 0)
			{
				SWAP(man, i, j);
			}
		}
	}
}


int main()
{
	char Name[30]; 

	short Number;

	std::cout << "Press the number: " << "\n";
	std::cin >> Number;

	flight *car = new flight[Number];

	std::cout << "\n";
	std::cout << "Enter the information about flight: " << "\n";
	InitMassive(car, Number);

	std::cout << "\n";
	std::cout << "This is your list of flight: " << "\n";
	DisplayArray(car, Number);

pointer:

	int choice = 0;

	std::cout << "\n";
	std::cout << "What do you want to do?" << "\n" << "1. Sort" << "\n" << "2. Add new information" << "\n" << "3. Find the flight" << "\n" << "4. Exit" << "\n";
	std::cin >> choice;

	if (choice == 1)
	{
		int choice2 = 0;

	pointer2:

		std::cout << "\n";
		std::cout << "What sort do you want?" << "\n" << "1. Name sort"<<"\n" << "3. Exit" << "\n";
		std::cin >> choice2;

		if (choice2 == 1)
		{
			NameSort(car, Number);
			std::cout << "\n";
			std::cout << "Your new list: " << "\n";
			DisplayArray(car, Number);
			goto pointer2;
		}
		
		else if (choice2 == 3)
		{
			goto pointer;
		}
		else
		{
			std::cout << "\n";
			std::cout << "Correct your answer!" << "\n";
			goto pointer2;
		}
	}
	else if (choice == 2)
	{
		int Add_Number = 0;
		int Final = 0;

		std::cout << "\n";
		std::cout << "How many flights do you want to add?" << "\n";
		std::cin >> Add_Number;

		Final = Number + Add_Number;

		flight *new_car = new flight[Final];

		for (size_t i = 0; i < Number; i++)
		{
			new_car[i] = car[i];
		}

		InitNewMassive(new_car, Number, Final);

		std::cout << "\n";
		std::cout << "Your new list: " << "\n";
		DisplayNewArray(new_car, Final);

		delete[] new_car;
	}
	
	else if (choice == 3)
	{
		return 0;
	}
	else
	{
		std::cout << "\n";
		std::cout << "Correct your answer! " << "\n";
		goto pointer;
	}
	delete[] car;
}