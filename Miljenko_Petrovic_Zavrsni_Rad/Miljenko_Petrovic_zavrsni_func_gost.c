#define _CRT_SECURE_NO_WARNINGS
#include "Miljenko_Petrovic_zavrsni_head.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>



void izbornikk()
{
    int i = 0;


    do
    {
        
        printf(" 1.Kupnja sendvici.\n");
        printf(" 2.Random sendvic for price.\n");
        printf(" 3.Povrataka u izbornik.\n");
        printf(" 4.Izlaz iz programa.\n");


        printf("Unesite broj koji odgovara izborniku:\n");
        scanf("%d", &i);

        switch (i)
        {
        case 1:
        {
            kupnjasendvica();
            break;
        }
        case 2:
        {
            randomsendvic();
            break;
        }
        case 3:
        {
            return;
            break;
        }
        case 4:
        {
            exit(EXIT_SUCCESS);
            break;
        }
        default:
        {
            printf("\aPonovite unos");
        }
        }
    } while (1);
}

/// ALOKACIJA MEMORIJE
KRUH* memoryallocKruh(KRUH* array, int n)
{
    array = NULL;
    array = (KRUH*)calloc(n, sizeof(KRUH));
    if (array == NULL)
    {
        perror("Nesupjesna alokacija");
        izbornik();
    }
    else
    {
        return array;
    }
}
MESO* memoryalloMeso(MESO* array, int n)
{
    array = NULL;
    array = (MESO*)calloc(n, sizeof(MESO));
    if (array == NULL)
    {
        perror("Nesupjesna alokacija");
        izbornik();
    }
    else
    {
        return array;
    }
}
SALATE* memoryalloSalate(SALATE* array, int n)
{
    array = NULL;
    array = (SALATE*)calloc(n, sizeof(SALATE));
    if (array == NULL)
    {
        perror("Nesupjesna alokacija");
        izbornik();
    }
    else
    {
        return array;
    }
}
NAMAZ* memoryalloNamaz(NAMAZ* array, int n)
{
    array = NULL;
    array = (NAMAZ*)calloc(n, sizeof(NAMAZ));
    if (array == NULL)
    {
        perror("Nesupjesna alokacija");
        izbornik();
    }
    else
    {
        return array;
    }
}

SENDVIC* memoryalloSendvic(SENDVIC* array, int n)
{
    array = NULL;
    array = (SENDVIC*)calloc(n, sizeof(SENDVIC));
    if (array == NULL)
    {
        perror("Nesupjesna alokacija");
        izbornik();
    }
    else
    {
        return array;
    }
}

///SORT
void zamjenakruh(KRUH* veci, KRUH* manji) {

    KRUH temp = *manji;
    *manji = *veci;
    *veci = temp;
}

void selectionSortKruh(KRUH* sort, const int broj) {
    int min = 0;
    int x = 0;
    system("cls");
    printf("\n1.Sortiranje po cijeni.");
    printf("\n2.Sortiranje po kataloskom broju.");
    printf("\n3.Povratak u izbornik.");
    scanf("%d", &x);

    if (x == 1)
    {
        for (int i = 0; i < broj - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < broj; j++)
            {
                if ((sort + j)->cijena < (sort + min)->cijena) {
                    min = j;
                }
            }
            zamjenakruh((sort + i), (sort + min));
        }
    }
    else if (x == 2)
    {
        for (int i = 0; i < broj - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < broj; j++)
            {
                if ((sort + j)->id < (sort + min)->id) {
                    min = j;
                }
            }
            zamjenakruh((sort + i), (sort + min));
        }
    }
    else if (x == 3)
    {
        for (;;) {
            izbornik(); break;
        }
    }
    else
    {
        printf("\nPogrešan unos,vracamo vas u izbornik!");
        for (;;) {
            izbornik(); break;
        }
    }

}

void zamjenaMeso(MESO* veci, MESO* manji)
{
    MESO temp = *manji;
    *manji = *veci;
    *veci = temp;
}

void selectionSortMeso(MESO* sort, const int broj)
{
    system("cls");
    int min = 0;
    int x = 0;
    printf("\n1.Sortiranje po cijeni.");
    printf("\n2.Sortiranje po kataloskom broju.");
    printf("\n3.Povratak u izbornik.");
    scanf("%d", &x);

    if (x == 1)
    {
        for (int i = 0; i < broj - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < broj; j++)
            {
                if ((sort + j)->cijena < (sort + min)->cijena) {
                    min = j;
                }
            }
            zamjenaMeso((sort + i), (sort + min));
        }
    }
    else if (x == 2)
    {
        for (int i = 0; i < broj - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < broj; j++)
            {
                if ((sort + j)->id < (sort + min)->id) {
                    min = j;
                }
            }
            zamjenaMeso((sort + i), (sort + min));
        }
    }
    else if (x == 3)
    {
        for (;;) {
            izbornik(); break;
        }
    }
    else
    {
        printf("\nPogrešan unos,vracamo vas u izbornik!");
        for (;;) {
            izbornik(); break;
        }
    }
}

void zamjenaSalate(SALATE* veci, SALATE* manji)
{
    SALATE temp = *manji;
    *manji = *veci;
    *veci = temp;
}

void selectionSortSalate(SALATE* sort, const int broj)
{
    int min = 0;
    int x = 0;
    system("cls");
    printf("\n1.Sortiranje po cijeni.");
    printf("\n2.Sortiranje po kataloskom broju.");
    printf("\n3.Povratak u izbornik.");
    scanf("%d", &x);

    if (x == 1)
    {
        for (int i = 0; i < broj - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < broj; j++)
            {
                if ((sort + j)->cijena < (sort + min)->cijena) {
                    min = j;
                }
            }
            zamjenaSalate((sort + i), (sort + min));
        }
    }
    else if (x == 2)
    {
        for (int i = 0; i < broj - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < broj; j++)
            {
                if ((sort + j)->id < (sort + min)->id) {
                    min = j;
                }
            }
            zamjenaSalate((sort + i), (sort + min));
        }
    }
    else if (x == 3)
    {
        for (;;) {
            izbornik(); break;
        }
    }
    else
    {
        printf("\nPogrešan unos,vracamo vas u izbornik!");
        for (;;) {
            izbornik(); break;
        }
    }
}

void zamjenaNamaz(NAMAZ* veci, NAMAZ* manji)
{
    NAMAZ temp = *manji;
    *manji = *veci;
    *veci = temp;
}
void selectionSortNamaz(NAMAZ* sort, const int broj)
{
    int min = 0;
    int x = 0;
    system("cls");
    printf("\n1.Sortiranje po cijeni.");
    printf("\n2.Sortiranje po kataloskom broju.");
    printf("\n3.Povratak u izbornik.");
    scanf("%d", &x);

    if (x == 1)
    {
        for (int i = 0; i < broj - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < broj; j++)
            {
                if ((sort + j)->cijena < (sort + min)->cijena) {
                    min = j;
                }
            }
            zamjenaNamaz((sort + i), (sort + min));
        }
    }
    else if (x == 2)
    {
        for (int i = 0; i < broj - 1; i++)
        {
            min = i;
            for (int j = i + 1; j < broj; j++)
            {
                if ((sort + j)->id < (sort + min)->id) {
                    min = j;
                }
            }
            zamjenaNamaz((sort + i), (sort + min));
        }
    }
    else if (x == 3)
    {
        for (;;) {
            izbornik(); break;
        }
    }
    else
    {
        printf("\nPogrešan unos,vracamo vas u izbornik!");
        for (;;) {
            izbornik(); break;
        }
    }
}

void zamjenaSendvic(SENDVIC* veci, SENDVIC* manji)
{
    SENDVIC temp = *manji;
    *manji = *veci;
    *veci = temp;
}
void selectionSortSendvic(SENDVIC* sviPacijenti, const int broj) { 

    int min = 0;

    for (int i = 0; i < broj - 1; i++)
    {
        min = i;

        for (int j = i + 1; j < broj; j++)
        {
            if ((sviPacijenti + j)->ukupnacijena < (sviPacijenti + min)->ukupnacijena) {
                min = j;
            }
            if (min != i) {

                zamjenaSendvic((sviPacijenti + i), (sviPacijenti + min));
            }
        }

    }
}


SENDVIC kupnjasendvica()
{
    system("cls");
    int broj = 0;
    int x = 0;
    int check = 0;
    printf("\nDOBRODOSLI U IZBORNIK ZA KUPNJU SENDVICA!\n");
    FILE* view = NULL;
    view = fopen("Sendvici.bin", "rb");
    if (view == NULL)
    {
        perror("Otvaranje dokumenta");
        return;
    }
    fseek(view, 0, SEEK_END);
    broj = ftell(view) / sizeof(SENDVIC);
    SENDVIC* sendvici = NULL;
    sendvici = memoryalloSendvic(sendvici, broj);
    rewind(view);
    fread(sendvici, sizeof(SENDVIC), broj, view);
    for (int i = 0; i < broj; i++)
    {
        printf("SENDVIC %d.\n", i + 1);
        printf("Kruh:%s\nMeso:%s\nSalata:%s %s\nNamaz:%s\nUKUPNA CIJENA:%0.2fKn\n\n ", (sendvici + i)->kruh.ime, (sendvici + i)->meso.ime, (sendvici + i)->salate.ime, (sendvici + i)->namaz.ime, (sendvici + i)->ukupnacijena);

    }
    printf("Upisite broj sendvica kojeg zelite kupiti:");
    scanf("%d", &x);
    for (int i = 0; i < broj; i++)
    {
        if (x == i + 1)
        {
            printf("SENDVIC %d.\n", i + 1);
            printf("Kruh:%s\nMeso:%s\nSalata:%s %s\nNamaz:%s\nUKUPNA CIJENA:%0.2fKn\n\n ", (sendvici + i)->kruh.ime, (sendvici + i)->meso.ime, (sendvici + i)->salate.ime, (sendvici + i)->namaz.ime, (sendvici + i)->ukupnacijena);
            printf("\nMolimo potvrdite zeljenu kupnju.");
            check = securecheck();
            if (check == 1)
            {
                printf("\nUspjesno ste kupili sendvic:SENDVIC %d. za %0.2fKn\n", i + 1, (sendvici + i)->ukupnacijena);
                FILE* fp = NULL;
                fp = fopen("Racuni.txt", "a+");
                if (fp == NULL)
                {
                    printf("\nGreška u izdavanju racuna!");
                    for (;;) {
                        izbornik(); break;
                    }
                }
                srand((unsigned)time(NULL));
                int gornjag = 1000;
                int donjag = 1;
                int broj_racuna = ((rand() % (int)(((gornjag)+donjag) - (donjag))) + (donjag));
                fprintf(fp, "Broj racuna:%d\n", broj_racuna);
                fprintf(fp, "Kruh:%s\nMeso:%s\nSalata:%s %s\nNamaz:%s\nUKUPNA CIJENA:%0.2fKn\n\n ", (sendvici + i)->kruh.ime, (sendvici + i)->meso.ime, (sendvici + i)->salate.ime, (sendvici + i)->namaz.ime, (sendvici + i)->ukupnacijena);
                fclose(fp);

            }
            else if (check == 2)
            {
                printf("\nKupnja nije izvrsena!");
                int odluka = 0;
                printf("\n1.Vratite se na pocetni izbornik");
                printf("\n2.Ponovite izbor\n");
                scanf("%d", &odluka);
                if (odluka == 1)
                {
                    return;
                }
                else if (odluka == 2)
                {
                    kupnjasendvica();
                }
                else
                {
                    return;
                }
            }
        }
    }
    fclose(view);
    free(sendvici);
}

int securecheck()
{
    char da[] = "da";
    char odluka[3];
    printf("Da li ste sigurni da zelite izvrsiti kupnju?\n");
    printf("Unesite da/ne\n");
    scanf("%s", &odluka);

    if (strcmp(da, odluka) == 0)
    {
        return 1;

    }
    else
    {
        return 2;
    }
}

SENDVIC randomsendvic()
{
    system("cls");
    float money = 0;
    int x = 0;
    int brojac = 0;
    printf("DOBRODOSLI U IZBORNIK ZA SLAGANJE RACUNALA!\n");
    printf("ZA POCETAK ODABERITE ZELJENI CJENOVNI RANG:\n");
    printf("Za koliko novaca zelite uzeti sendvic?\n");
    scanf("%f", &money);
    FILE* view = NULL;
    view = fopen("Sendvici.bin", "rb");
    if (view == NULL)
    {
        perror("Otvaranje dokumenta");
        return;
    }
    fseek(view, 0, SEEK_END);
    int broj = ftell(view) / sizeof(SENDVIC);
    SENDVIC* sendvici = NULL;
    sendvici = memoryalloSendvic(sendvici, broj);
    rewind(view);
    fread(sendvici, sizeof(SENDVIC), broj, view);
    selectionSortSendvic(sendvici, broj);
    float target = najbliziSendvic(sendvici, broj, money);
    for (int i = 0; i < broj; i++)
    {
        if ((sendvici + i)->ukupnacijena == target)
        {
            printf("SENDVIC %d.\n", i + 1);
            printf("Kruh:%s\nMeso:%s\nSalata:%s %s\nNamaz:%s\nUKUPNA CIJENA:%0.2fKn\n\n ", (sendvici + i)->kruh.ime, (sendvici + i)->meso.ime, (sendvici + i)->salate.ime, (sendvici + i)->namaz.ime, (sendvici + i)->ukupnacijena);
            int check = securecheck();
            if (check == 1)
            {
                printf("\nUspjesno ste kupili sendvic:SENDVIC %d. za %0.2fKn\n", i + 1, (sendvici + i)->ukupnacijena);
                FILE* fp = NULL;
                fp = fopen("Racuni.txt", "a+");
                if (fp == NULL)
                {
                    printf("\nGreška u izdavanju racuna!");
                    for (;;) {
                        izbornik(); break;
                    }
                }
                srand((unsigned)time(NULL));
                int gornjag = 1000;
                int donjag = 1;
                int broj_racuna = ((rand() % (int)(((gornjag)+donjag) - (donjag))) + (donjag));
                fprintf(fp, "Broj racuna:%d\n", broj_racuna);
                fprintf(fp, "Kruh:%s\nMeso:%s\nSalata:%s %s\nNamaz:%s\nUKUPNA CIJENA:%0.2fKn\n\n ", (sendvici + i)->kruh.ime, (sendvici + i)->meso.ime, (sendvici + i)->salate.ime, (sendvici + i)->namaz.ime, (sendvici + i)->ukupnacijena);
                fclose(fp);

            }
            else if (check == 2)
            {
                printf("\nKupnja nije izvrsena!");
                int odluka = 0;
                printf("\n1.Vratite se na pocetni izbornik");
                printf("\n2.Ponovite izbor\n");
                scanf("%d", &odluka);
                if (odluka == 1)
                {
                    return;
                }
                else if (odluka == 2)
                {
                    kupnjasendvica();
                }
                else
                {
                    return;
                }
            }
        }
    }
    free(sendvici);
    fclose(view);
}

float najblizi(float  x, int y, int target) {
    if (target - x >= y - target)
        return y;
    else
        return x;
}
float najbliziSendvic(SENDVIC* arr, int n, float target) {
    if (target <= (arr + 0)->ukupnacijena)
        return (arr + 0)->ukupnacijena;
    if (target >= (arr + n - 1)->ukupnacijena)
        return (arr + n - 1)->ukupnacijena;
    int left = 0, right = n, mid = 0;
    while (left < right) {
        mid = (left + right) / 2;
        if ((arr + mid)->ukupnacijena == target)
            return (arr + mid)->ukupnacijena;
        if (target < (arr + mid)->ukupnacijena) {
            if (mid > 0 && target > (arr + mid - 1)->ukupnacijena)
                return najblizi((arr + mid - 1)->ukupnacijena, (arr + mid)->ukupnacijena, target);
            right = mid;
        }
        else {
            if (mid < n - 1 && target < (arr + mid + 1)->ukupnacijena)
                return najblizi((arr + mid)->ukupnacijena, (arr + mid + 1)->ukupnacijena, target);
            left = mid + 1;
        }
    }
    return (arr + mid)->ukupnacijena;
}