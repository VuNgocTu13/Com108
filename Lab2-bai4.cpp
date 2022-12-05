#include<stdio.h>
int main (){
	printf ("-------| Vu Ngoc Tu - PH32035 |-------\n");
	printf ("-------| Lab 2 - Bai 4 : Tinh Diem Trung Binh |-------\n");
	//Khai bao
	float toan,ly,hoa;
	// Nhap vao
	printf ("Nhap vao mon diem Toan: ");
	scanf ("%f",&toan);
	printf ("Nhap vao mon diem Ly: ");
	scanf ("%f",&ly);
	printf ("Nhap vao mon diem Hoa: ");
	scanf ("%f",&hoa);
	//Xu Ly
	float diemTrungBinh = ((toan*3)+(ly*2)+hoa)/6;
	// In ra ket qua
	printf ("DTB = %.2f",diemTrungBinh);
	return 0;
	
}
