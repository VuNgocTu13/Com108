#include<stdio.h>
int main (){
	printf ("+------------- Vu Ngoc Tu - PH32035 -----------+\n");
	printf ("+------------------  Bai 1 ------------------+\n");
	float points;
	printf ("Nhap vao diem cua sinh vien: ");
	scanf ("%f",&points);
	
	if(points >= 9){
		printf ("Hoc luc xuat sac.");
	}else if (9>points>=8){
		printf ("Hoc luc gioi.");
	}else if (8>points>=6.5){
		printf ("Hoc luc kha.");
	}else if (6.5>points>=5){
		printf ("Hoc luc trung binh.");
	}else if (5>points>=3.5){
		printf ("Hoc luc yeu.");
	}else {
		printf ("Hoc luc kem.");
	}
	return 0;
}
