#include <stdio.h>

int main()
{
	int x,y;
	
	printf("Moi ban nhap x: ");
	scanf("%d",&x);
	printf("Moi ban nhap y: ");
	scanf("%d",&y);
	
	printf("\n2 so nguyen x,y la: %d, %d", x ,y);
	printf("\nTong hai so la: %d", x + y);
	printf("\nHieu hai so la: %d", x-y);
	printf("\nTich hai so la: %d", x*y);
	printf("\nThuong hai so la: %d", x/y);
	
	return 0;
}
