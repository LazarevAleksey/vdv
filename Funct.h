#pragma once
enum TIP { Istoricheskaya, Prikluchenia, Bilitristika, Umor, Fantastika, Melodrama, Klasika };
enum EXIT { No, Yes };
struct Kartoteka
{
	char name[32];
	char surname[32];
	int god_izdania;
	float sum;
	TIP tip;
};

Kartoteka* AddStruct(Kartoteka* Obj, const int amount);
void setData(Kartoteka* Obj, const int amount);
void showData(const Kartoteka* Obj, const int amount);
void DelData(Kartoteka* Obj, const int amount);