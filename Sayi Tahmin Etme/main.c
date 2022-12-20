#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int rasgelesayi,tahmin,deneme=0,devam=1;
	srand(time(NULL));
	rasgelesayi=rand()%20+1;
	while(devam==1){
	do
	{
		printf("Herhangi bir sayi tutunuz (1-20): ");
		scanf("%d",&tahmin);
		deneme++;
		if(rasgelesayi>tahmin)
		{
			printf("Yukari \n");
		}
		else if(rasgelesayi<tahmin)
		{
			printf("Asagi \n");
		}
		
	}while(rasgelesayi!=tahmin);
	printf("Tebrikler, sayiyi bildiniz\n");
	printf("Deneme Sayiniz: %d",deneme);
	rasgelesayi=rand()%20+1;
	deneme=0;
	printf("Devam etmek icin 1, durmak icin 0 yaziniz.\n");
	scanf("%d",&devam);
	}
	return 0;
}
