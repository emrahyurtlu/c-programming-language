#include<stdlib.h>
#include<stdio.h>

int main(){
	int sayi = 0, faktoriyel = 1;
	
	printf("Sayi giriniz: ");
	scanf("%d", &sayi);
	
	while(1 < sayi){
		faktoriyel = faktoriyel * sayi;
		sayi = sayi -1;
	}
	
	printf("Hesaplanan faktoriyel = %d", faktoriyel);
	
	
	return 0;
}
