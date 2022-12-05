#include<stdio.h>
#include<math.h>
int main (){
	printf ("-------| Vu Ngoc Tu - PH32035 |-------\n");
	printf ("-------| Lab 2 - Bai 3 : Tinh Chu vi & Dien tich cua duong tron |-------\n");
	//Khai bao
	float r;
	float pi = 3.14;
	// Nhap vao ban kinh 
	printf ("Nhap vao ban kinh : ");
	scanf ("%f",&r);
	// Tinh chu vi cua hinh tron
	float CV = (r*2)*pi;
	float DT = 4*pi*pow(r,2);
	
	// In ra man hinh
	printf ("Chu vi cua duong tron: %.2f",CV);
	printf ("\nDien tich cua duong tron: %.2f",DT);
	return 0;
}
