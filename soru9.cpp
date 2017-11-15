#include<stdlib.h>
#include<stdio.h>
#define ASGARI_UCRET 1400		// 1400TL
#define BIRIM_SAAT_UCRETI 10	// 10TL

int main() {
	double aylikCalismaSaati = 0, mesaiSaati = 0, katsayi = 0, maas = 0, mesaiUcreti = 0, yol = 0, yemek = 0;
	int kadro = 0;
	
	printf("Lutfen asagidaki gibi kadro grubu giriniz!\n");
	printf("1: Calisan, 2: Takim Lideri, 3: Muhendis, 4: Proje Lideri, 5: CTO, 6: CEO \n");
	scanf("%d", &kadro);
	
	printf("Aylik calisma saati giriniz: ");
	scanf("%lf", &aylikCalismaSaati);
	
	if(aylikCalismaSaati > 160){
		mesaiSaati = aylikCalismaSaati - 160;
		aylikCalismaSaati = 160;
	}
	
	switch(kadro){
		case 1: // Genel Çalýþanlar
			katsayi 		= 1;
			maas 			= ASGARI_UCRET + (aylikCalismaSaati * BIRIM_SAAT_UCRETI * katsayi);
			mesaiUcreti 	= mesaiSaati * BIRIM_SAAT_UCRETI * katsayi * 2;
			yol				= maas * 5 / 100;
			yemek			= maas * 10 / 100;
			break;
		case 2: // Takým Lideri
			katsayi 		= 2.20;
			maas 			= ASGARI_UCRET + (aylikCalismaSaati * BIRIM_SAAT_UCRETI * katsayi);
			mesaiUcreti 	= mesaiSaati * BIRIM_SAAT_UCRETI * katsayi * 2;
			yol				= maas * 5 / 100;
			yemek			= maas * 10 / 100;
			break;
		case 3: // Mühendis
			katsayi 		= 3.40;
			maas 			= ASGARI_UCRET + (aylikCalismaSaati * BIRIM_SAAT_UCRETI * katsayi);
			mesaiUcreti 	= mesaiSaati * BIRIM_SAAT_UCRETI * katsayi * 2;
			yol				= maas * 5 / 100;
			yemek			= maas * 10 / 100;
			break;
		case 4: // Proje Lideri
			katsayi 		= 5;
			maas 			= ASGARI_UCRET + (aylikCalismaSaati * BIRIM_SAAT_UCRETI * katsayi);
			mesaiUcreti 	= mesaiSaati * BIRIM_SAAT_UCRETI * katsayi * 2;
			yol				= maas * 5 / 100;
			yemek			= maas * 10 / 100;
			break;
		case 5: // CTO
			katsayi 		= 7;
			maas 			= ASGARI_UCRET + (aylikCalismaSaati * BIRIM_SAAT_UCRETI * katsayi);
			mesaiUcreti 	= mesaiSaati * BIRIM_SAAT_UCRETI * katsayi * 2;
			yol				= maas * 5 / 100;
			yemek			= maas * 10 / 100;
			break;
		case 6: // CEO
			katsayi 		= 10;
			maas 			= ASGARI_UCRET + (aylikCalismaSaati * BIRIM_SAAT_UCRETI * katsayi);
			mesaiUcreti 	= mesaiSaati * BIRIM_SAAT_UCRETI * katsayi * 2;
			yol				= maas * 5 / 100;
			yemek			= maas * 10 / 100;
			break;
		default: 
			printf("Boyle bir kadro bulunmamaktadir.");
			break;
	}
	
	printf("Taban Maas: %5.2fTL\n", maas);
	printf("Mesai Ucreti : %5.2fTL\n", mesaiUcreti);
	printf("Yol Ucreti : %5.2fTL\n", yol);
	printf("Yemek Ucreti : %5.2fTL\n", yemek);
	printf("Toplam : %5.2fTL\n", maas + mesaiUcreti + yol + yemek);

	return 0;
}
