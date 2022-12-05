#include<stdio.h>
int main (){
	printf ("-------| Vu Ngoc Tu - PH32035 |-------\n");
	printf ("-------| Lab 2 - Bai 2 : Tinh tong & hieu cua 2 so |-------\n");
	//khai bao
	int a,b;
	// nhap du lieu
	printf ("Nhap vao so thu nhat: ");
	scanf ("%d",&a);
	printf ("Nhap vao so thu hai: ");
	scanf ("%d",&b);
	// Xu Ly
	int T = a+b;
	int H = a-b;
	// In ket qua
	printf ("%d + %d = %d \n",a,b,T);
	printf ("%d - %d = %d \n",a,b,H);	
	
	return 0;
}
