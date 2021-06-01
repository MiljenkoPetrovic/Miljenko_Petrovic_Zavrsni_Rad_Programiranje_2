#define _CRT_SECURE_NO_WARNINGS
#include "Miljenko_Petrovic_zavrsni_head.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void izbornik()
{
    int i = 0;


    do
    {
        printf(" 1. Admin login.\n");
        printf(" 2. Kupac.\n");
        printf(" 3. Iskljuci program\n");

        printf("Unesite broj koji odgovara izborniku:\n");
        scanf("%d", &i);

        switch (i)
        {
        case 1:
        {
            adminLogin();
            break;
        }
        case 2:
        {
            izbornikk();
            break;
        }
        case 3:
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

void adminLogin()
{
    char password[15] = { "dontravolta" };
    char provjera[15];
    printf("Unesite password za login:\n");
    scanf("%s", &provjera);

    if (strcmp(password, provjera) == 0)
    {
        system("cls");
        adminMenu();
    }
    else
    {
        printf("POGRESNA LOZINKA!");
        return;
    }

}

void adminMenu()
{
    do
    {
        int i = 0;
        printf(" 1. Unos sastojaka.\n");
        printf(" 2. Brisanje sastojaka.\n");
        printf(" 3. Ipis sastojaka/sendvica.\n");
        printf(" 4. Slaganje sendvica.\n");

        printf("//////////////////////////\n");
        printf(" 5. Odjava\n");
        printf(" 6. Turn off\n");

        printf("Unesite broj koji odgovara izborniku:\n");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
        {
            for (;;)
            {
                unosSastojaka();
            }
            break;
        }
        case 2:
        {
            for (;;)
            {
                brisanjeSastojaka();
            }
            break;
        }
        case 3:
        {
            for (;;)
            {
                ispisSastojaka();
            }
            break;
        }
        case 4:
        {
            for (;;)
            {
                slaganjeSendvica();
            }
            break;
        }
        case 5:
        {
            for (;;)
            {
                izbornik();
            }
            break;
        }
        case 6:
        {
            exit(EXIT_SUCCESS);
            break;
        }
        default:
        {
            printf("\aPonovite unos");
            izbornik();
        }
        }
    } while (1);

}

void unosSastojaka()
{

    do
    {
        int i;
        int j;
        FILE* fp = NULL;
        system("cls");
        printf(" 1. Kruh\n");
        printf(" 2. Meso\n");
        printf(" 3. Salate\n");
        printf(" 4. Namaz\n");
        printf("//////////////////////////////////\n");
        printf(" 5.Admin menu\n");

        printf("Unesite broj koji odgovara izborniku:\n");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
        {
            fp = fopen("Kruh", "ab+");
            if (fp == NULL)
            {
                perror("Otvaranje dokumenta Kruh");
                return;
            }
            else
            {
                char temp;
                printf("Unesite id kruha:");
                scanf("%d", &sendvic.kruh.id);
                printf("Unesite ime kruha:");
                scanf("%c", &temp);
                scanf("%30[^\n]s", sendvic.kruh.ime);
                printf("Tip kruha:");
                scanf("%s", sendvic.kruh.tip);
                printf("Cijena:");
                scanf("%f", &sendvic.kruh.cijena);
                fwrite(&sendvic.kruh, sizeof(sendvic.kruh), 1, fp);
                fclose(fp);
                printf("USPJESAN UNOS\n");
                system("pause");
                return;
                break;


            }
        }
        case 2:
        {
                fp = fopen("Meso", "ab+");
                if (fp == NULL)
                {
                    perror("Otvaranje dokumenta Meso");
                    return;
                }
                else
                {
                    char temp;
                    printf("Unesite id mesa:");
                    scanf("%d", &sendvic.meso.id);
                    printf("Unesite ime mesa:");
                    scanf("%c", &temp);
                    scanf("%30[^\n]s", sendvic.meso.ime);
                    printf("Vrsta mesa:");
                    scanf("%s", sendvic.meso.vrsta_mesa);
                    printf("Cijena:");
                    scanf("%f", &sendvic.meso.cijena);
                    fwrite(&sendvic.meso, sizeof(sendvic.meso), 1, fp);
                    fclose(fp);
                    printf("USPJESAN UNOS\n");
                    system("pause");
                    return;

                }
                break;
            
        }
        case 3:
        {
            fp = fopen("Salate", "ab+");
            if (fp == NULL)
            {
                perror("Otvaranje dokumenta Salate");
                return;
            }
            else
            {
                char temp;
                printf("Unesite id salate:");
                scanf("%d", &sendvic.salate.id);
                printf("Unesite ime salate:");
                scanf("%c", &temp);
                scanf("%30[^\n]s", sendvic.salate.ime);
                printf("Tip salate:");
                scanf("%s", sendvic.salate.tip_salate);
                printf("Cijena:");
                scanf("%f", &sendvic.salate.cijena);
                fwrite(&sendvic.salate, sizeof(sendvic.salate), 1, fp);
                printf("USPJESAN UNOS\n");
                system("pause");
                fclose(fp);

                return;
            }
            break;
        }
        case 4:
        {
            fp = fopen("Namaz", "ab+");
            if (fp == NULL)
            {
                perror("Otvaranje dokumenta Namaz");
                return;
            }
            else
            {
                char temp;
                printf("Unesite id namaza:");
                scanf("%d", &sendvic.namaz.id);
                printf("Unesite ime namaza:");
                scanf("%c", &temp);
                scanf("%30[^\n]s", sendvic.namaz.ime);
                printf("Cijena:");
                scanf("%f", &sendvic.namaz.cijena);
                fwrite(&sendvic.namaz, sizeof(sendvic.namaz), 1, fp);
                fclose(fp);
                printf("USPJESAN UNOS\n");
                system("pause");
                return;
            }
            break;
        }
        
        case 5:
        {
            system("cls");
            for (;;)
            {
                adminMenu();
                break;
            }
            break;
        }
        default:
        {
            printf("\aPonovite unos!\n");
            return;
        }
        }
    } while (1);
}


void brisanjeSastojaka()
{


    do
    {
        int i, j, check;
        printf(" 1. Kruh\n");
        printf(" 2. Meso\n");
        printf(" 3. Salata\n");
        printf(" 4. Namaz\n");
        printf("//////////////////////////////////\n");
        printf(" 5. Admin menu\n");

        printf("Unesite broj koji odgovara izborniku:\n");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
        {
                FILE* fp;
                FILE* fp_tmp;
                int found = 0;

                fp = fopen("Kruh", "rb");
                if (fp == NULL) {
                    printf("Neuspjelo otvaranje datoteke Kruh!");
                    for (;;) { adminMenu(); break; }
                    return -1;

                }
                fp_tmp = fopen("Temp", "wb");
                if (fp_tmp == NULL) {
                    printf("Neuspjelo otvaranje datoteke Temp!");
                    for (;;) { adminMenu(); break; }
                    return -1;
                }
                char pretraga[30];
                char c;
                printf("Unesite ime kruha:");
                scanf("%c", &c);
                scanf("%30[^\n]s", pretraga);

                while (fread(&sendvic.kruh, sizeof(sendvic.kruh), 1, fp) != NULL) {
                    if (strcmp(pretraga, sendvic.kruh.ime) == 0) {
                        printf("Kruh %s pronadjen i uspjesno obrisan\n\n", pretraga);
                        found = 1;
                    }
                    else {
                        fwrite(&sendvic.kruh, sizeof(sendvic.kruh), 1, fp_tmp);
                    }
                }
                if (!found) {
                    printf("Kruh: %s nije pronadjen.\n\n", pretraga);

                    return;
                }

                fclose(fp);
                fclose(fp_tmp);

                remove("Kruh");
                rename("Temp", "Kruh");
                printf("\n");
                system("pause");
                system("cls");
                return;
                break;
            
            
         
        }
        case 2:
        {
                FILE* fp;
                FILE* fp_tmp;
                int found = 0;

                fp = fopen("Meso", "rb");
                if (fp == NULL) {
                    printf("Neuspjelo otvaranje datoteke Meso!");
                    for (;;) { adminMenu(); break; }
                    return -1;

                }
                fp_tmp = fopen("Temp", "wb");
                if (fp_tmp == NULL) {
                    printf("Neuspjelo otvaranje datoteke Temp!");
                    for (;;) { adminMenu(); break; }
                    return -1;
                }
                char pretraga[30];
                char c;
                printf("Unesite ime mesa:");
                scanf("%c", &c);
                scanf("%30[^\n]s", pretraga);

                while (fread(&sendvic.meso, sizeof(sendvic.meso), 1, fp) != NULL) {
                    if (strcmp(pretraga, sendvic.meso.ime) == 0) {
                        printf("Meso %s pronadjena i uspjesno obrisana\n\n", pretraga);
                        found = 1;
                    }
                    else {
                        fwrite(&sendvic.meso, sizeof(sendvic.meso), 1, fp_tmp);
                    }
                }
                if (!found) {
                    printf("Meso: %s nije pronadjena.\n\n", pretraga);

                    return;
                }

                fclose(fp);
                fclose(fp_tmp);

                remove("Meso");
                rename("Temp", "Meso");


                printf("\n");
                system("pause");
                system("cls");
                return;
                break;
            
            

                
            

        }
        case 3:
        {
            FILE* fp;
            FILE* fp_tmp;
            int found = 0;

            fp = fopen("Salate", "rb");
            if (fp == NULL) {
                printf("Neuspjelo otvaranje datoteke Salate!");
                for (;;) { adminMenu(); break; }
                return -1;

            }
            fp_tmp = fopen("Temp", "wb");
            if (fp_tmp == NULL) {
                printf("Neuspjelo otvaranje datoteke Temp!");
                for (;;) { adminMenu(); break; }
                return -1;
            }
            char pretraga[30];
            char c;
            printf("Unesite ime Salate:");
            scanf("%c", &c);
            scanf("%30[^\n]s", pretraga);

            while (fread(&sendvic.salate, sizeof(sendvic.salate), 1, fp) != NULL) {
                if (strcmp(pretraga, sendvic.salate.ime) == 0) {
                    printf("Salata:%s pronadjena i uspjesno obrisana\n\n", pretraga);
                    found = 1;
                }
                else {
                    fwrite(&sendvic.salate, sizeof(sendvic.salate), 1, fp_tmp);
                }
            }
            if (!found) {
                printf("Salata: %s nije pronadjena.\n\n", pretraga);

                return;
            }

            fclose(fp);
            fclose(fp_tmp);

            remove("Salate");
            rename("Temp", "Salate");


            printf("\n");
            system("pause");
            system("cls");
            return;
            break;
        }
        case 4:
        {
            FILE* fp;
            FILE* fp_tmp;
            int found = 0;

            fp = fopen("Namaz", "rb");
            if (fp == NULL) {
                printf("Neuspjelo otvaranje datoteke Namaz!");
                for (;;) { adminMenu(); break; }
                return -1;

            }
            fp_tmp = fopen("Temp", "wb");
            if (fp_tmp == NULL) {
                printf("Neuspjelo otvaranje datoteke Temp!");
                for (;;) { adminMenu(); break; }
                return -1;
            }
            char pretraga[30];
            char c;
            printf("Unesite ime graficke Namaza:");
            scanf("%c", &c);
            scanf("%30[^\n]s", pretraga);

            while (fread(&sendvic.namaz, sizeof(sendvic.namaz), 1, fp) != NULL) {
                if (strcmp(pretraga, sendvic.namaz.ime) == 0) {
                    printf("Namaz: %s pronadjena i uspjesno obrisana\n\n", pretraga);
                    found = 1;
                }
                else {
                    fwrite(&sendvic.namaz, sizeof(sendvic.namaz), 1, fp_tmp);
                }
            }
            if (!found) {
                printf("Namaz: %s nije pronadjena.\n\n", pretraga);

                return;
            }

            fclose(fp);
            fclose(fp_tmp);

            remove("Namaz");
            rename("Temp", "Namaz");

            printf("\n");
            system("pause");
            system("cls");
            return;
            break;
        }
        case 8:
        {
            system("cls");
            for (;;) { adminMenu(); break; }

            break;
        }

        default:
        {
            printf("\aPonovite unos");
            return;
        }
        }
    } while (1);
}

void slaganjeSendvica()
{
    do {
        int x;
        int i = 0;
        float cijena = 0;
        printf("1.Zapocnite odabir:\n");
        printf("2.Povratak u admin menu\n");
        scanf("%d", &i);
        if (i == 1)
        {
            srckruh(&x);
            cijena = srcmeso(x) + srcsal() + srcnam();
            FILE* fp = NULL;
            fp = fopen("Sendvic.bin", "ab+");
            if (fp == NULL)
            {
                perror("Neuspjelo otvaranje");
                return;
            }
            sendvic.ukupnacijena = cijena;
            fwrite(&sendvic.ukupnacijena, sizeof(sendvic.ukupnacijena), 1, fp);
            fclose(fp);
        }

        else if (i == 2)
        {
            for (;;) { adminMenu(); break; }
        }
        else
        {
            printf("Pogrešan unos!");
            return;
        }
        system("cls");
        printf("Uspjesno slaganja sendvica.\n");
        printf("Unesite odgovarajuci broj:\n");
        printf("1. Povratak u admin menu.\n");
        printf("2. Slaganje novog racunala.\n");
        scanf("%d", &x);
        if (x == 1)
        {
            for (;;) { adminMenu(); break; }
        }
        else if (x == 2)
        {
            system("cls");
            return;
        }
        else {
            printf("Error!");
            for (;;) { adminMenu(); break; }
        }
    } while (1);

}

void srckruh(int* x)
{
    FILE* view = NULL;
    FILE* fp = NULL;
    char pretraga[30];
    char c;
    int d = 0;
    printf("Odaberite Kruh:\n");
    printf("////////////\n");
    printf("3.Povratka u Admin menu\n");

    
        view = fopen("Kruh", "rb");
  
    if (view == NULL)
    {
        perror("Otvaranje dokumenta");
        for (;;) { adminMenu(); break; }
    }
    printf("Kruh:\n");
    while (fread(&sendvic.kruh, sizeof(sendvic.kruh), 1, view) != NULL) {
        printf("%d.%s  %s  %0.2f Kn\n", sendvic.kruh.id, sendvic.kruh.ime, sendvic.kruh.tip, sendvic.kruh.cijena);
    }

    printf("Odaberite kruh za sendvic unosom imena:");
    scanf("%c", &c);
    scanf("%30[^\n]s", pretraga);
    fseek(view, 0, SEEK_SET);
    while (fread(&sendvic.kruh, sizeof(sendvic.kruh), 1, view) != 0) {
        if (strcmp(pretraga, sendvic.kruh.ime) == 0)
        {
            fp = fopen("Sendvic.bin", "ab+");
            if (fp == NULL)
            {
                printf("GREŠKA");
                perror("Otvaranje dokumenta");
                for (;;) { adminMenu(); break; }
            }
            fwrite(&sendvic.kruh, sizeof(sendvic.kruh), 1, fp);
            float cijenakruh = sendvic.kruh.cijena;
            fclose(fp);
            fclose(view);
            d++;
            return cijenakruh;

        }
    }
    if (d == 0)
    {
        printf("Kruh s tim imenom nije pronadjen!");
        fclose(view);
        slaganjeSendvica();

    }
}

int srcmeso(int x)
{
    FILE* view = NULL;
    FILE* fp = NULL;
    char pretraga[30];
    char c;
    int d = 0;
    
        view = fopen("Meso", "rb");
    if (view == NULL)
    {
        perror("Otvaranje dokumenta");
    }
    printf("Meso:\n");
    while (fread(&sendvic.meso, sizeof(sendvic.meso), 1, view) != NULL) {
        printf("%d.%s %s %0.2f Kn\n", sendvic.meso.id, sendvic.meso.ime, sendvic.meso.vrsta_mesa, sendvic.meso.cijena);
    }

    printf("Odaberite meso za sendvic unosom imena:");
    scanf("%c", &c);
    scanf("%30[^\n]s", pretraga);
    fseek(view, 0, SEEK_SET);
    while (fread(&sendvic.meso, sizeof(sendvic.meso), 1, view) != NULL) {
        if (strcmp(pretraga, sendvic.meso.ime) == 0) {
            fp = fopen("Sendvic.bin", "ab");
            if (fp == NULL)
            {
                perror("Otvaranje dokumenta");
                for (;;) { adminMenu(); break; }
            }
            fwrite(&sendvic.meso, sizeof(sendvic.meso), 1, fp);
            float cijenamesa = sendvic.meso.cijena;
            fclose(fp);
            d++;
            fclose(view);
            return cijenamesa;
        }

    }
    if (d == 0) {
        printf("Meso s tim imenom nije pronadeno!");
        fclose(view);
        for (;;) {
            srcmeso(x); break;
        }
    }

}

int srcsal()
{
    FILE* view = NULL;
    FILE* fp = NULL;
    int x;
    char pretraga[30];
    char c;
    int d = 0;
    printf("Salata:\n");
    view = fopen("Salate", "rb");
    if (view == NULL)
    {
        perror("Otvaranje dokumenta");
        for (;;) { adminMenu(); break; }
    }
    while (fread(&sendvic.salate, sizeof(sendvic.salate), 1, view) != NULL) {
        printf("%d.%s  %s  %0.2f Kn\n", sendvic.salate.id, sendvic.salate.ime, sendvic.salate.tip_salate, sendvic.salate.cijena);
    }
    printf("Odaberite salatu za sendvic unosom imena:");
    scanf("%c", &c);
    scanf("%30[^\n]s", pretraga);
    fseek(view, 0, SEEK_SET);
    while (fread(&sendvic.salate, sizeof(sendvic.salate), 1, view) != NULL) {
        if (strcmp(pretraga, sendvic.salate.ime) == 0) {
            fp = fopen("Sendvic.bin", "ab");
            if (fp == NULL)
            {
                perror("Otvaranje dokumenta");
                for (;;) { adminMenu(); break; }
            }
            fwrite(&sendvic.salate, sizeof(sendvic.salate), 1, fp);
            float cijensal = sendvic.salate.cijena;
            fclose(fp);
            d++;
            fclose(view);
            return cijensal;

        }

    }
    if (d == 0) {
        printf("Salata s tim imenom nije pronadjena!");
        fclose(view);
        for (;;) {
            srcsal(); break;
        }
    }
}

int srcnam()
{
    FILE* view = NULL;
    FILE* fp = NULL;
    int x;
    char pretraga[30];
    char c;
    int d = 0;
    printf("Namazi:");
    view = fopen("Namazi", "rb");
    if (view == NULL)
    {
        perror("Otvaranje dokumenta");
        for (;;) { adminMenu(); break; }
    }
    while (fread(&sendvic.namaz, sizeof(sendvic.namaz), 1, view) != NULL) {
        printf("%d.%s  %0.2f Kn\n", sendvic.namaz.id, sendvic.namaz.ime, sendvic.namaz.cijena);
    }
    printf("Odaberite namaz za sendvic unosom imena:");
    scanf("%c", &c);
    scanf("%30[^\n]s", pretraga);
    fseek(view, 0, SEEK_SET);
    while (fread(&sendvic.namaz, sizeof(sendvic.namaz), 1, view) != NULL) {
        if (strcmp(pretraga, sendvic.namaz.ime) == 0) {
            fp = fopen("Sendvic.bin", "ab");
            if (fp == NULL)
            {
                perror("Otvaranje dokumenta");
                for (;;) { adminMenu(); break; }
            }
            fwrite(&sendvic.namaz, sizeof(sendvic.namaz), 1, fp);
            float cijenanam = sendvic.namaz.cijena;
            fclose(fp);
            d++;
            fclose(view);
            return cijenanam;
        }

    }
    if (d == 0) {
        printf("Namaz s tim imenom nije pronadjen!");
        fclose(view);
        for (;;) {
            srcnam(); break;
        }
    }
}

void ispisSastojaka()
{

    do
    {
        int i = 0;
        printf("1.Kruh.\n");
        printf("2.Meso.\n");
        printf("3.Salate.\n");
        printf("4.Namazi.\n");
        printf("5.Sendvici.\n");
        printf("6.Povratak u admin menu.\n");
        printf("///////////////////////\n");
        printf("Unesite broj koji odgovara izborniku:");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
        {
            FILE* view = NULL;
            char c;

            
                view = fopen("Kruh", "rb");
            
           
            if (view == NULL)
            {
                perror("Otvaranje dokumenta");
                for (;;) { adminMenu(); break; }
            }
            system("cls");
            printf("Kruh:\n");
            while (fread(&sendvic.kruh, sizeof(sendvic.kruh), 1, view) != NULL) {
                printf("%d.%s  %s  %0.2f Kn\n", sendvic.kruh.id, sendvic.kruh.ime, sendvic.kruh.tip, sendvic.kruh.cijena);
            }
            fclose(view);
            printf("\n\n\n");
            return;
            break;
        }
        case 2:
        {
            FILE* view = NULL;
            char c;
            
                view = fopen("Meso", "rb");

            if (view == NULL)
            {
                perror("Otvaranje dokumenta");
            }
            system("cls");
            printf("Meso:\n");
            while (fread(&sendvic.meso, sizeof(sendvic.meso), 1, view) != NULL) {
                printf("%d.%s  %s  %0.2f Kn\n", sendvic.meso.id, sendvic.meso.ime, sendvic.meso.vrsta_mesa, sendvic.meso.cijena);
            }
            printf("\n\n\n");
            fclose(view);
            return;

            break;
        }
        case 3:
        {
            FILE* view = NULL;
            system("cls");
            printf("Salate:\n");
            view = fopen("Salate", "rb");
            if (view == NULL)
            {
                perror("Otvaranje dokumenta");
                for (;;) { adminMenu(); break; }
            }
            while (fread(&sendvic.salate, sizeof(sendvic.salate), 1, view) != NULL) {
                printf("%d.%s  %s  %0.2f Kn\n", sendvic.salate.id, sendvic.salate.ime, sendvic.salate.tip_salate, sendvic.salate.cijena);
            }
            printf("\n\n\n");
            fclose(view);
            return;

            break;
        }
        case 4:
        {
            FILE* view = NULL;
            system("cls");
            printf("Namazi:");
            view = fopen("Namazi", "rb");
            if (view == NULL)
            {
                perror("Otvaranje dokumenta");
                for (;;) { adminMenu(); break; }
            }
            while (fread(&sendvic.namaz, sizeof(sendvic.namaz), 1, view) != NULL) {
                printf("%d.%s  %0.2f Kn\n", sendvic.namaz.id, sendvic.namaz.ime, sendvic.namaz.cijena);
            }
            printf("\n\n\n");
            fclose(view);
            return;
            break;
        }
       
        case 5:
        {
            {
                FILE* view = NULL;
                system("cls");
                printf("Sendvic:\n");
                view = fopen("Sendvic.bin", "rb");
                if (view == NULL)
                {
                    perror("Otvaranje dokumenta");
                    for (;;) { adminMenu(); break; }
                }

                while (fread(&sendvic, sizeof(SENDVIC), 1, view) != 0) {
                    printf(" %s\n %s %s\n %s %s\n %s\n %s %s\n %s %s\n %s\n %0.2f\n", sendvic.kruh.ime, sendvic.meso.ime, sendvic.meso.vrsta_mesa, sendvic.salate.ime, sendvic.salate.tip_salate, sendvic.namaz.ime,
                        sendvic.namaz.ime, sendvic.ukupnacijena);
                }
                printf("\n\n\n");
                fclose(view);
                return;
                break;
            }

        }
        case 6:
        {
            for (;;)
            {
                izbornik();
                break;
            }
            break;
        }
        default:
        {
            printf("\aPonovite unos");
            for (;;)
            {
                izbornik();
                break;
            }
        }
        }
    } while (1);
}







