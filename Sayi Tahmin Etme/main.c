#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int rasgelesayi,tahmin,deneme=0;
	srand(time(NULL));
	rasgelesayi=rand()%20+1;
	do
	{
		printf("Herhangi bir sayi tutunuz (1-20): ");
		scanf("%d",&tahmin);
		if(rasgelesayi>tahmin)
		{
			printf("Yukari \n");
			deneme++;
		}
		else if(rasgelesayi<tahmin)
		{
			printf("Asagi \n");
			deneme++;
		}
		else
		{
			printf("Tebrikler Bildiniz! \n");
			deneme++;
		}
	}
	while(rasgelesayi!=tahmin);
	printf("Deneme Sayiniz: %d",deneme);
	return 0;
}
