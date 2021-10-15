#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int islemNumarasi, sayac;
char islemYeniden, islemOnay;
float n1, n2, sonuc;
HANDLE hConsole;

void IslemSec(void);
void IslemOnay(void);
void Toplama(void);
void Cikarma(void);
void Carpma(void);
void Bolme(void);
void Mod(void);
void Kare(void);
void Kup(void);
void Daire(void);
void Silindir(void);
void Faktoriyel(void);

int main() {
printf("\n");
printf("     @@@  @@@  @@@@@@  @@@@@@@   @@@@@@  @@@ @@@   \n");
printf("     @@!  !@@ @@!  @@@ @@!  @@@ @@!  @@@ @@! !@@   \n");
printf("     @!@@!@!  @!@  !@! @!@!!@!  @!@!@!@!  !@!@!    \n");
printf("     !!: :!!  !!:  !!! !!: :!!  !!:  !!!   !!:     \n");
printf("     :   :::  : :. :   :   : :  :    : :    .:     \n");
printf("\n\n");

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 11);

	printf("[------------Welcome to my simple calculator------------]\n");
	printf("|                                                       |\n");
	printf("|");
	SetConsoleTextAttribute(hConsole, 10);
	printf("  [01] Toplama islemi\t");    printf("[06] Kare Alma islemi");
	SetConsoleTextAttribute(hConsole, 11);
	printf("           |\n");
	printf("|");
	SetConsoleTextAttribute(hConsole, 10);
	printf("  [02] Cikarma islemi\t");    printf("[07] Kup Alma islemi");
	SetConsoleTextAttribute(hConsole, 11);
	printf("            |\n");
	printf("|");
	SetConsoleTextAttribute(hConsole, 10);
	printf("  [03] Carpma islemi\t");     printf("[08] Daire Alani Hesaplama");
	SetConsoleTextAttribute(hConsole, 11);
	printf("      |\n");
	printf("|");
	SetConsoleTextAttribute(hConsole, 10);
	printf("  [04] Bolme islemi\t");      printf("[09] Silindir Alani Hesaplama");
	SetConsoleTextAttribute(hConsole, 11);
	printf("   |\n");
	printf("|");
	SetConsoleTextAttribute(hConsole, 10);
	printf("  [05] Mod Alma islemi\t");   printf("[10] Faktoryel alma");
	SetConsoleTextAttribute(hConsole, 11);
	printf("             |\n");
	printf("|                                                       |\n");
	printf("[-------------------------------------------------------]\n");






	IslemSec();

	SetConsoleTextAttribute(hConsole, 8);
	return 0;
}
void IslemSec(void){
	SetConsoleTextAttribute(hConsole, 14);
	printf("\nLutfen bir islem seciniz : ");
	scanf("%d", &islemNumarasi);
	SetConsoleTextAttribute(hConsole, 7);
	if(islemNumarasi >= 1 && islemNumarasi <= 10)
	{
            switch(islemNumarasi)
        {
            case 1:
                printf("\nSectiginiz islem : Toplama Islemi [%d]\n", islemNumarasi);
                break;
            case 2:
                printf("\nSectiginiz islem : Cikarma Islemi [%d]\n", islemNumarasi);
                break;
            case 3:
                printf("\nSectiginiz islem : Carpma Islemi [%d]\n", islemNumarasi);
                break;
            case 4:
                printf("\nSectiginiz islem : Bolme Islemi [%d]\n", islemNumarasi);
                break;
            case 5:
                printf("\nSectiginiz islem : Mod Alma [%d]\n", islemNumarasi);
                break;
            case 6:
                printf("\nSectiginiz islem : Kare Islemi [%d]\n", islemNumarasi);
                break;
            case 7:
                printf("\nSectiginiz islem : Kup Alma [%d]\n", islemNumarasi);
                break;
            case 8:
                printf("\nSectiginiz islem : Daire Alaný Hesaplama [%d]\n", islemNumarasi);
                break;
            case 9:
                printf("\nSectiginiz islem : Silindir Alaný Hesaplama [%d]\n", islemNumarasi);
                break;
            case 10:
                printf("\nSectiginiz islem : Faktoriyel Islemi [%d]\n", islemNumarasi);
                break;
            default:
                break;
        }
		IslemOnay();
	}
	else
	{
		SetConsoleTextAttribute(hConsole, 12);
		printf("Islem seciminiz hatali!");
	}
}
void IslemOnay(void){
	SetConsoleTextAttribute(hConsole, 7);
	printf("Islemi onayliyor musunuz [y] / [n] : ");
		scanf(" %c", &islemOnay);
		if(islemOnay == 'y')
		{
			SetConsoleTextAttribute(hConsole, 10);
			printf("\nIslem seciminiz basarili.\n");
			switch(islemNumarasi)
			{
				case 1:
					Toplama();
					break;
				case 2:
					Cikarma();
					break;
				case 3:
					Carpma();
					break;
				case 4:
					Bolme();
					break;
				case 5:
					Mod();
					break;
				case 6:
					Kare();
					break;
				case 7:
					Kup();
					break;
				case 8:
					Daire();
					break;
				case 9:
					Silindir();
					break;
				case 10:
					Faktoriyel();
					break;
				default:
					SetConsoleTextAttribute(hConsole, 12);
					printf("\nError");
					IslemSec();
					break;
			}
		}
		else if(islemOnay == 'n')
		{
			SetConsoleTextAttribute(hConsole, 10);
			printf("\nIslem iptal edildi.");
			IslemSec();
		}
		else
		{
			SetConsoleTextAttribute(hConsole, 12);
			printf("\nYanlis tuslama yaptiniz. Lutfen tekrar deneyin!\n");
			IslemOnay();
		}
}
void Toplama(void){
	printf("\n");
	SetConsoleTextAttribute(hConsole, 15);
	printf("Lutfen kac sayi toplamak istediginizi giriniz : ");
	scanf("%d", &sayac);
	int i;
	for(i = 1; i <= sayac; i++){
		printf("\nBir sayi giriniz : ");
		scanf("%f", &n1);
		sonuc += n1;
	}
	SetConsoleTextAttribute(hConsole, 14);
	printf("\n\nGirdiginiz sayilarin toplami %.2f olarak hesaplandi.", sonuc);

	SetConsoleTextAttribute(hConsole, 15);
	printf("\n\nYeni bir islem yapmak ister misin? [y] / [n] :");
	scanf(" %c", &islemYeniden);
	if(islemYeniden == 'y')
	{
		IslemYeniden();
	}
	else
	{
		exit(0);
	}
}
void Cikarma(void){
	printf("\n");
	SetConsoleTextAttribute(hConsole, 15);
	printf("Lutfen bir sayi giriniz: ");
	scanf("%f", &sonuc);
	printf("\nLutfen kac sayi cikarmak istediginizi giriniz: ");
	scanf("%d", &sayac);
	int i;
	for(i = 1; i <= sayac; i++){
		printf("\nBir sayi giriniz : ");
		scanf("%f", &n1);
		sonuc -= n1;
	}
	SetConsoleTextAttribute(hConsole, 14);
	printf("\n\nSonuc %.2f olarak hesaplandi.", sonuc);

	SetConsoleTextAttribute(hConsole, 15);
	printf("\n\nYeni bir islem yapmak ister misin? [y] / [n] :");
	scanf(" %c", &islemYeniden);
	if(islemYeniden == 'y')
	{
		IslemYeniden();
	}
	else
	{
		exit(0);
	}
}
void Carpma(void){
	printf("\n");
	SetConsoleTextAttribute(hConsole, 15);
	printf("Lutfen kac sayi carpmak istediginizi giriniz : ");
	scanf("%d", &sayac);
	sonuc = 1;
	int i;
	for(i = 1; i <= sayac; i++){
		printf("\nBir sayi giriniz : ");
		scanf("%f", &n1);
		sonuc *= n1;
	}
	SetConsoleTextAttribute(hConsole, 14);
	printf("\n\nSonuc %.2f olarak hesaplandi.", sonuc);

	SetConsoleTextAttribute(hConsole, 15);
	printf("\n\nYeni bir islem yapmak ister misin? [y] / [n] :");
	scanf(" %c", &islemYeniden);
	if(islemYeniden == 'y')
	{
		IslemYeniden();
	}
	else
	{
		exit(0);
	}
}
void Bolme(void){
	printf("\n");
	SetConsoleTextAttribute(hConsole, 15);
	printf("Lutfen bolunecek sayiyi giriniz: ");
	scanf("%f", &n1);
	printf("\nLutfen bolen sayiyi giriniz: ");
	scanf("%f", &n2);

	if(n2 != 0)
	{
		sonuc = n1 / n2;

		SetConsoleTextAttribute(hConsole, 14);
		printf("\n\nSonuc %.2f olarak hesaplandi.", sonuc);

		SetConsoleTextAttribute(hConsole, 15);
		printf("\n\nYeni bir islem yapmak ister misin? [y] / [n] :");
		scanf(" %c", &islemYeniden);
		if(islemYeniden == 'y')
		{
			IslemYeniden();
		}
		else
		{
			exit(0);
		}
	}
	else
	{
		SetConsoleTextAttribute(hConsole, 12);
		printf("Bolen 0 olarak girilemez!");
	}
}
void Mod(void){
	printf("\n");
	SetConsoleTextAttribute(hConsole, 15);
	printf("Lutfen bolunecek sayiyi giriniz: ");
	scanf("%f", &n1);
	printf("\nLutfen bolen sayiyi giriniz: ");
	scanf("%f", &n2);

	if(n2 != 0)
	{
		sonuc = (int)n1 % (int)n2;

		SetConsoleTextAttribute(hConsole, 14);
		printf("\n\n%.0f sayisinin %.0f sayisina bolumunden kalan %.0f olarak hesaplandi.", n1, n2, sonuc);

		SetConsoleTextAttribute(hConsole, 15);
		printf("\n\nYeni bir islem yapmak ister misin? [y] / [n] :");
		scanf(" %c", &islemYeniden);
		if(islemYeniden == 'y')
		{
			IslemYeniden();
		}
		else
		{
			exit(0);
		}
	}
	else
	{
		SetConsoleTextAttribute(hConsole, 12);
		printf("Bolen 0 olarak girilemez!");
	}
}
void Kare(void){
	printf("\n");
	SetConsoleTextAttribute(hConsole, 15);
	printf("Lutfen karesi alinacak sayiyi giriniz: ");
	scanf("%f", &n1);

	sonuc = n1 * n1;

	SetConsoleTextAttribute(hConsole, 14);
	printf("\n\nSonuc %.2f olarak hesaplandi.", sonuc);

	SetConsoleTextAttribute(hConsole, 15);
	printf("\n\nYeni bir islem yapmak ister misin? [y] / [n] :");
	scanf(" %c", &islemYeniden);
	if(islemYeniden == 'y')
	{
		IslemYeniden();
	}
	else
	{
		exit(0);
	}
}
void Kup(void){
	printf("\n");
	SetConsoleTextAttribute(hConsole, 15);
	printf("Lutfen kubu alinacak sayiyi giriniz: ");
	scanf("%f", &n1);

	sonuc = n1 * n1 * n1;

	SetConsoleTextAttribute(hConsole, 14);
	printf("\n\nSonuc %.2f olarak hesaplandi.", sonuc);

	SetConsoleTextAttribute(hConsole, 15);
	printf("\n\nYeni bir islem yapmak ister misin? [y] / [n] :");
	scanf(" %c", &islemYeniden);
	if(islemYeniden == 'y')
	{
		IslemYeniden();
	}
	else
	{
		exit(0);
	}
}
void Daire(void){
	printf("\n");
	SetConsoleTextAttribute(hConsole, 15);
	printf("Lutfen yaricap giriniz: ");
	scanf("%f", &n1);

	sonuc = (n1 * n1) * 3.14;

	SetConsoleTextAttribute(hConsole, 14);
	printf("\n\nSonuc %.2f olarak hesaplandi.", sonuc);

	SetConsoleTextAttribute(hConsole, 15);
	printf("\n\nYeni bir islem yapmak ister misin? [y] / [n] :");
	scanf(" %c", &islemYeniden);
	if(islemYeniden == 'y')
	{
		IslemYeniden();
	}
	else
	{
		exit(0);
	}
}
void Silindir(void){
	printf("\n");
	SetConsoleTextAttribute(hConsole, 15);
	printf("Lutfen yaricap giriniz: ");
	scanf("%f", &n1);
	printf("Lutfen uzunluk giriniz: ");
	scanf("%f", &n2);

	sonuc = (n1 * n1) * n2 * 3.14;

	SetConsoleTextAttribute(hConsole, 14);
	printf("\n\nSonuc %.2f olarak hesaplandi.", sonuc);

	SetConsoleTextAttribute(hConsole, 15);
	printf("\n\nYeni bir islem yapmak ister misin? [y] / [n] :");
	scanf(" %c", &islemYeniden);
	if(islemYeniden == 'y')
	{
		IslemYeniden();
	}
	else
	{
		exit(0);
	}
}
void Faktoriyel(void){
	printf("\n");
	SetConsoleTextAttribute(hConsole, 15);
	printf("Lutfen faktoriyel alinacak sayiyi giriniz : ");
	scanf("%d", &sayac);
	sonuc = 1;
	int i;
	for(i = 1; i <= sayac; i++)
	{
			sonuc *= i;
	}
	SetConsoleTextAttribute(hConsole, 14);
	printf("\n\nSonuc %.2f olarak hesaplandi.", sonuc);

	SetConsoleTextAttribute(hConsole, 15);
	printf("\n\nYeni bir islem yapmak ister misin? [y] / [n] :");
	scanf(" %c", &islemYeniden);
	if(islemYeniden == 'y')
	{
		IslemYeniden();
	}
	else
	{
		exit(0);
	}
}

void IslemYeniden()
{
	n1 = 0; n2 = 0; sonuc = 0; islemYeniden = 2; sayac = 0;
	IslemSec();
}
