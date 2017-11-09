#include<stdlib.h>
#include<stdio.h>

#define mesafe 453

int main(){
	double saat = 0, ortalamaHiz = 0;
	printf("Ankara - Istanbul arasi varis zamani(saat): ");
	scanf("%lf", &saat);
	
	ortalamaHiz = mesafe / saat;
	
	printf("Ortalama hiz = %.4fkm", ortalamaHiz);
	
	return 0;
}
