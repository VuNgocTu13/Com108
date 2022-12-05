#include<stdio.h>
int main (){
	printf ("------- Vu Ngoc Tu - PH32035------ \n");
	printf ("--------------- Bai 3 --------------\n");
	int x;
	printf ("Nhap vao x: ");
	scanf ("%d",&x);
	int count;
	for (int i;i<x;i++){
		if (i*i == x){
		  count ++
		}
	}
		if (count == 0){
		printf ("%d khong la so chinh phuong. \n",x);
	}else {
		printf ("%d la so chinh phuong. \n",x);
	}
    		
    	return 0;
}
