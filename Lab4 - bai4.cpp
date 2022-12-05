#include<stdio.h>
#include<math.h>

int tinhTrungBinhCong (){
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
	printf ("\n");
}

void kiemTraSoNguyenTo (){
	int x; 
	printf ("Nhap vao x: ");
	scanf ("%d",&x);
	if (x < 2){
		printf ("%d Khong phai la so nguyen to. \n",x);
		
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
	printf ("\n");
}

void kiemTraSoChinhPhuong (){
	int x;
	printf ("Nhap vao x: ");
	scanf ("%d",&x);
	
	for (int i;i<x;i++){
		if (i*i == x){
			printf (" %d La so chinh phuong. \n",x);
		}
	}
	
    	printf (" %d khong la so chinh phuong. \n",x);	
    	printf ("\n");
}
int main (){
	int choose;
	do {
	printf ("------- Vu Ngoc Tu - PH32035------ \n");
	printf ("--------------- Bai 4 --------------\n");
	printf ("+-----------------------------------------------------+\n");
	printf ("| Chuc nang 1: Tinh trung binh tong.                  |\n");
	printf ("| Chuc nang 2: Kiem tra so nguyen to.                 |\n");
	printf ("| Chuc nang 3: Tim so chinh phuong.                   |\n");
	printf ("| Chuc nang 4: Thoat.                                 |\n");
	printf ("+-----------------------------------------------------+\n");
	
	
	printf ("Xin moi chon chuc nang (1,2,3,4): ");
	scanf ("%d",&choose);
	
	switch(choose){
		case 1:
			tinhTrungBinhCong();
			break;
		case 2:
		    kiemTraSoNguyenTo();
			break;
		case 3:
		    kiemTraSoChinhPhuong();
			break;
		case 4:
		    break;
		default:
		printf("Vui long nhap lai. \n");
		break;				
	}
		
	} while (choose);
return 0;
	
}
