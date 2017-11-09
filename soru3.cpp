#include<stdlib.h>
#include<stdio.h>

int main(){
	int a = 0, b = 0, c = 0, sayi = 0;
	
	printf("Yuzler basamagini giriniz: ");
	scanf("%d", &a);
	
	printf("Onlar basamagini giriniz: ");
	scanf("%d", &b);
	
	printf("Birler basamagini giriniz: ");
	scanf("%d", &c);
	
	if(a > 0){
		sayi = a*100 + b*10 + c;
		printf("Olusan Sayi = %d", sayi);
	}else{
		printf("Hata: Yuzler basamagi icin 0 girilemez!!!");
	}
	
	return 0;
}
