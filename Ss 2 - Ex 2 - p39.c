#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	char kitu[100];
	int nguyen;
	float thuc;
	double S;
	long chan;
	short tay;
	
	printf("Moi ban nhap du lieu char: ");
	scanf("%s", &kitu);
	printf("Moi ban nhap du lieu int: ");
	scanf("%d", &nguyen);	
	printf("Moi ban nhap du lieu float: ");
	scanf("%f", &thuc);
	printf("Moi ban nhap du lieu double: ");
	scanf("%lf", &S);
	printf("Moi ban nhap du lieu long: ");
	scanf("%l", &chan);
	printf("Moi ban nhap du lieu short: ");
	scanf("%hd", &tay);
	
	
	printf("\nKi tu char ban vua nhap la: %s", kitu);
	printf("\nKi tu int ban vua nhap la: %d", nguyen);
	printf("\nKi tu float ban vua nhap la: %f", thuc);
	printf("\nKi tu double ban vua nhap la: %lf", S);
	printf("\nKi tu long ban vua nhap la: %ld", chan);
	printf("\nKi tu short ban vua nhap la: %hd", tay);
	
	
	return 0;
}
