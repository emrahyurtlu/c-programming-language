#include<stdlib.h>
#include<stdio.h>

main(){
	double dakika = 0, tutar = 0.25;
	
	printf("Dakika giriniz: ");
	scanf("%lf", &dakika);
	
	while(dakika <= 0){
		printf("Hata: Dakika bilgisini 0'dan buyuk giriniz!!!");
		printf("\nDakika giriniz: ");
		scanf("%lf", &dakika);
	}
	
	if(dakika > 3){
		tutar += (dakika - 3)*0.08;
	}
	
	printf("Fatura tutariniz: %.2fTL'dir.", tutar);
}
