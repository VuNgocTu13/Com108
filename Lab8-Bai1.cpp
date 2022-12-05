#include<stdio.h>
#include<string.h>
#include<conio.h>

struct sinhVien {
	char mssv[50];
	char tenSV[25];
	char nganhHoc[50];
	float diemTB;
};

void nhapThongTin (sinhVien sv[], int &n){
	for (int i=0; i<n; i++){
		printf ("+--------------------------------+\n");
		fflush(stdin);
		printf ("Nhap MSSV: ");
		gets(sv[i].mssv);
		fflush(stdin);
		
		printf ("Nhap Ho va Ten: ");
		gets(sv[i].tenSV);
		fflush(stdin);
		
		printf ("Nhap nganh hoc: ");
		gets(sv[i].nganhHoc);
		fflush(stdin);
		
		printf ("Nhap diem TB: ");
		scanf ("%f",&sv[i].diemTB);
		printf ("\n+--------------------------------+\n");
	}
}

void xuatThongTin (sinhVien sv[], int n){
	for (int i=0; i<n; i++){
		printf ("\n+----------------------------------+\n");
		printf("\nMSSV: %s",sv[i].mssv);
		printf("\nHo va Ten: %s",sv[i].tenSV);
		printf("\nNganh hoc: %s",sv[i].nganhHoc);
		printf("\nDiem TB: %f",sv[i].diemTB);
		printf ("\n+----------------------------------+\n");
	}
}


int main (){
	int n;
	sinhVien sv[100];
	
	printf ("Nhap so luong sinh vien: ");
	scanf("%d",&n);
	
	nhapThongTin(sv,n);
	xuatThongTin(sv,n);
	
	getch();
}


