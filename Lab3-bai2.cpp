#include<stdio.h>
int main (){
	printf ("+------------- Vu Ngoc Tu - PH32035 -----------+\n");
	printf ("+------------------  Bai 2 ------------------+\n");
	float a,b;
	printf ("Nhap vao a: ");
	scanf ("%f",&a);
	printf ("Nhap vao b: ");
	scanf ("%f",&b);
	float x;
	if (a==0 && b==0){
		printf ("Phuong trinh vo so nghiem.");
	}else if (a == 0 && b!= 0){
		printf ("Phuong trinh vo nghiem.");
	}else {
		x= -b/a;
		printf ("Phuong trinh co nghiem x = %f",x);
	}
	return 0;
}
