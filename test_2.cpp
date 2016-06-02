#include<iostream>
#include<windows.h>
#include"Funct.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	Kartoteka* OurKartoteka = nullptr;
	int Deystvie = 0;
	int KartotekaAmount = 0;
	int YesOrNot = 0; //  продолжить или остановить ввод данных
	EXIT exit = Yes;
	int n = 0;
	while (exit)
	{
		system("cls");
		system("color 5b");
		printf("============================================================================");
		printf("================================KARTOTEKA===================================");
		printf("=============================ВЫБИРИТЕ ДЕЙСТВИЕ==============================\n");
		printf("\n");
		printf("1==Просмотр картотеки, 2==Добавить книгу, 3==Удалить книгу\n");
		printf("4--Сохранить в файл, 5--Загрузить из файла, 6--Сортировать\n");
		scanf("%i", &Deystvie);
		switch (Deystvie)
		{
		case 1: showData(OurKartoteka, KartotekaAmount); break;


		case 2:
			do
			{
				OurKartoteka = AddStruct(OurKartoteka, KartotekaAmount);
				setData(OurKartoteka, KartotekaAmount);

				KartotekaAmount++;

				cout << "Продолжить ввод данных (1 - да, 0 - нет): ";
				cin >> YesOrNot;
				cin.get();
			} while (YesOrNot != 0); break;

		case 3: printf("Введите n ");
			scanf("%d", &n);
			DelData(OurKartoteka, n-1);
			KartotekaAmount--;
			break;
		case 4: printf("Тест4"); break;
		case 5: printf("Тест5"); break;
		case 6: printf("Тест6"); break;
		default: printf("Шеф, усё пропало!!!");
		};
		printf("Вы хотите выйти из программы?\n");
		printf("Yes / No ");
		scanf("%d", &exit);
	};
	delete[] OurKartoteka;
	return 0;
}


