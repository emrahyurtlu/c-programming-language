#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
   char ifade[20], sifrelenmisIfade[20];
   int anahtar = 0, i = 0;
   char c;
   
   printf("Sifrelenecek metni giriniz: ");
   scanf("%s", &ifade);
   
   printf("Anahtar giriniz: ");
   scanf("%d", &anahtar);
   
   while(i < strlen(ifade)){
   		c = ifade[i];
   		sifrelenmisIfade[i] = (char)(((int)c)+anahtar);
   		//i = i +1;
   		i++;
   }
   
   printf("Sifrelenmis ifade: %s", sifrelenmisIfade);
   
   return(0);
}
