#include<stdio.h>
int main (){
	printf ("-------| Vu Ngoc Tu - PH32035 |-------\n");
	printf ("-------| Lab 2 - Bai 2 : Tinh Chu vi & Dien tich HCN |-------\n");
	//Khai bao
	float longs, width;
	
	// Nhap vao chieu dai va chieu rong
	printf ("Nhap vao chieu dai: ");
	scanf("%f",&longs);
	printf ("Nhap vao chieu rong: ");
	scanf("%f",&width);
	
	// Xu Ly
	float CV = (longs + width)*2;
	float DT = longs*width;
	
	// In ra man hinh
	printf ("Chu vi hinh chu nhat la: %.2f",CV);
	printf ("\nDien tich hinh chu nhat la: %.2f",DT);
	
	return 0;
}
