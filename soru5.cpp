#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
	int n = 0, pay = 1, us = 2;
	double x = 0, sonuc = 0;
	
	printf("Lutfen n degerini giriniz: ");
	scanf("%d", &n);
	
	printf("Lutfen x degerini giriniz: ");
	scanf("%lf", &x);
	
	while(pay <= (2*n-1)){
		sonuc = sonuc + (pay / pow(x,us));
		pay = pay + 2;
		us = us + 2;
	}
	
	printf("Hesaplama sonucu: %.2f", sonuc);
		
	return 0;
}
