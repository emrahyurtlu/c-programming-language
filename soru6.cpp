#include<stdlib.h>
#include<stdio.h>

int main(){
	int input = 0, tempInput = 1, counter = 1, modulus = 0;
	
	printf("Sayi giriniz:");
	scanf("%d", &input);
	
	while(input < 0){
		printf("Hata: Sadece pozitif sayilar girebilirsiniz!!! \n");
		printf("Sayi giriniz:");
		scanf("%d", &input);
	}
		
	while(1){

		while (1){
        	
			modulus = input % 10;  
			
			if(input == modulus){
				tempInput = tempInput * modulus;
				break;  
			}
        		   	        	
			if(modulus > 0){
        		tempInput = tempInput * modulus;
        		input = input - modulus;
			}
			
			if(modulus == 0){
				input = input / 10;	
			};

    	}
		
		input = tempInput;
		tempInput = 1;				
		printf("%d. sayi: %d\n", counter, input);
		counter = counter + 1;
		
		if(input < 10)
			break;
	
	}
	
	return 0;
}
