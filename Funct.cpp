#include "Funct.h"
#include<iostream>
using namespace std;
///////////////////////////////////////////////////
Kartoteka* AddStruct(Kartoteka* Obj, const int amount)
{
	if (amount == 0)
	{
		Obj = new Kartoteka[amount + 1]; // выделение памяти для первой структуры
	}
	else
	{
		Kartoteka* tempObj = new Kartoteka[amount + 1];

		for (int i = 0; i < amount; i++)
		{
			tempObj[i] = Obj[i]; // копируем во временный объект
		}
		delete[] Obj;

		Obj = tempObj;
	}
	return Obj;
}
//*********************************************************
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void setData(Kartoteka* Obj, const int amount)
{
	printf("Автор: ");
	scanf("%29s", &Obj[amount].surname);
	printf("Название: ");
	scanf("%29s", &Obj[amount].name);
	printf("Год издания: ");
	scanf("%d", &Obj[amount].god_izdania);
	printf("Цена: ");
	scanf("%f", &Obj[amount].sum);
	printf("Категория: ");
	scanf("%d", &Obj[amount].tip);
	printf("\n");
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void showData(const Kartoteka* Obj, const int amount)
{
	system("cls");
	cout << "№  " << "Автор\t" << "Название\t" << "Год издания\t" << "Цена\t" << "Категория\t" << endl;
	cout << "=========================================================================" << endl;
	for (int i = 0; i < amount; i++)
	{
		printf("|%5s |  %-15s|%7d  |%7.2f|%d\n", Obj[i].surname, Obj[i].name, Obj[i].god_izdania, Obj[i].sum, Obj[i].tip);
		
	}
}

void DelData(Kartoteka* Obj, const int n) {
	 //Obj[amount];
	delete[n] Obj;
	
	//return 0;
};