#include<stdio.h>
int checkYear(int year){
	int check = 0;
	if (year % 400 == 0){
		check =1;
	}else if (year % 4 == 0 && year % 100 != 0){
		check = 1;
	}
	return check;
}

int main (){
	int year;
	printf ("Nhap vao nam: ");
	scanf ("%d",&year);
	
	int check = checkYear(year);
	if (check == 1){
		printf ("%d: La nam nhuan. \n",year);
	}if (check == 0){
		printf ("%d:  Khong la nam nhuan. \n",year);
	}
	return 0;
}
