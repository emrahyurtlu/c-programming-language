#include<stdlib.h>
#include<stdio.h>

int main(){
	double en = 0, boy = 0, yukseklik = 0, hacim = 0;
	
	printf("Lutfen havuzun en degerini giriniz: ");
	scanf("%lf", &en);
	
	printf("Lutfen havuzun boy degerini giriniz: ");
	scanf("%lf", &boy);
	
	printf("Lutfen havuzun yukseklik degerini giriniz: ");
	scanf("%lf", &yukseklik);
	
	if(en > 0 && boy > 0 && yukseklik > 0){
		hacim = en * boy * yukseklik;
		printf("\nHavuzun dolmasi icin %.2f metrekup suya ihtiyac vardir.", hacim);
	}else{
		printf("MESAJ : GIRILEN DEGERLER 0'DAN BUYUK OLMALIDIR!!!'");
	}
		
	return 0;
}
