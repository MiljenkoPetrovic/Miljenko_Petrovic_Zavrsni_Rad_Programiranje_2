#ifndef Miljenko_Petrovic_zavrsni_head
#define Miljenko_Petrovic_zavrsni_head


typedef struct
{
	int id;
	char ime[30];
	char tip[30];
	float cijena;
	

}KRUH;

typedef struct
{
	int id;
	char ime[30];
	char vrsta_mesa[30];
	float cijena;
	

}MESO;

typedef struct
{
	int id;
	char ime[30];
	char tip_salate[30];
	float cijena;
	
}SALATE;

typedef struct
{
	int id;
	char ime[30];
	float cijena;
	

}NAMAZ;



typedef struct
{
	KRUH kruh;
	MESO meso;
	SALATE salate;
	NAMAZ namaz;
	float ukupnacijena;

}SENDVIC;

SENDVIC sendvic;

//FUNKCIJE ADMINA
void izbornik();
void adminLogin();
void buyerLogin();
void adminMenu();
void unosSastojaka();
void brisanjeSastojaka();
void slaganjeSendvica();

//FUNKCIJE RACUNA I PRETRAGE
void ispisSastojaka();
void srckruh(int*);
int srcmeso(int);
int srcsalata();
int srcnamaz();

//FUNKCIJE KUPAC
void izbornikk();
SENDVIC kupnjasendvica();
int securecheck();
SENDVIC randomsendvic();
float najblizi(float, int, int);
float najbliziSendvic(SENDVIC*, int, float);

//SORTIRANJE
void selectionSortKRUH(KRUH*, const int);
void zamjenaKruh(KRUH*, KRUH*);
void selectionSortMeso(MESO*, const int);
void zamjenaMeso(MESO*, MESO*);
void zamjenaSalate(SALATE*, SALATE*);
void selectionSortSalate(SALATE*, const int);
void zamjenaNamaz(NAMAZ*, NAMAZ*);
void selectionSortNamaz(NAMAZ*, const int);
void zamjenaSendvic(SENDVIC*, SENDVIC*);
void selectionSortSendvic(SENDVIC*, const int);

//ALOKACIJA
KRUH* memoryallocKruh(KRUH*, int);
MESO* memoryalloMeso(MESO*, int);
SALATE* memoryalloSalate(SALATE*, int);
NAMAZ* memoryalloNamaz(NAMAZ*, int);
SENDVIC* memoryalloSendvic(SENDVIC*, int);

#endif