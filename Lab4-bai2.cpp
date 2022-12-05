#include<stdio.h>
#include<math.h>
int main (){
	printf ("------- Vu Ngoc Tu - PH32035------ \n");
	printf ("--------------- Bai 2 --------------\n");
	int x; 
	printf ("Nhap vao x: ");
	scanf ("%d",&x);
	if (x < 2){
		printf ("%d Khong phai la so nguyen to. \n",x);
		return 0;
	}
	
	int count = 0;
	for (int i=2; i<= sqrt(x);i++){
		if (x % i == 0){
			count ++;
		}
	}
	if (count == 0){
		printf ("%d la so nguyen to. \n",x);
	}else {
		printf ("%d Khong phai la so nguyen to. \n",x);
	}
	
	return 0;
}
