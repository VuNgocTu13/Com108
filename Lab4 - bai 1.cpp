#include<stdio.h>
int main (){
	printf ("------- Vu Ngoc Tu - PH32035------ \n");
	printf ("--------------- Bai 1 --------------\n");
	int x, y, S = 0, count = 0, TB = 0;
	printf ("Nhap vao x: ");
	scanf ("%d",&x);
	printf ("Nhap vao y: ");
	scanf ("%d",&y);
	
	for (int i = x; i <= y; i++){
		if (i%2==0){
			S += i;
			count++;
		}
	}
	TB = S / count;
	printf ("Trung binh tong cua cac so tu nhien chia het cho 2 (x - y):  %d \n",TB);
	return 0;
}
