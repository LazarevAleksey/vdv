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
	int YesOrNot = 0; //  ���������� ��� ���������� ���� ������
	EXIT exit = Yes;
	int n = 0;
	while (exit)
	{
		system("cls");
		system("color 5b");
		printf("============================================================================");
		printf("================================KARTOTEKA===================================");
		printf("=============================�������� ��������==============================\n");
		printf("\n");
		printf("1==�������� ���������, 2==�������� �����, 3==������� �����\n");
		printf("4--��������� � ����, 5--��������� �� �����, 6--�����������\n");
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

				cout << "���������� ���� ������ (1 - ��, 0 - ���): ";
				cin >> YesOrNot;
				cin.get();
			} while (YesOrNot != 0); break;

		case 3: printf("������� n ");
			scanf("%d", &n);
			DelData(OurKartoteka, n-1);
			KartotekaAmount--;
			break;
		case 4: printf("����4"); break;
		case 5: printf("����5"); break;
		case 6: printf("����6"); break;
		default: printf("���, �� �������!!!");
		};
		printf("�� ������ ����� �� ���������?\n");
		printf("Yes / No ");
		scanf("%d", &exit);
	};
	delete[] OurKartoteka;
	return 0;
}


