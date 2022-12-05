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

void xapXep (sinhVien sv[], int n){
	int i,j;
	for ( i=0; i<n; i++){
		for ( j=0; j<n; j++){
			if (sv[i].diemTB < sv[j].diemTB){   // tang dan
				struct sinhVien svtemp = sv[i] ;
				sv[i] = sv[j];
				sv[j] = svtemp;
				    
			}
		}
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
	sinhVien sv[250];
	int n;
	
	printf ("Nhap so luong sinh vien: ");
	scanf("%d",&n);
	printf ("\n");
	
	nhapThongTin(sv,n);
	xapXep(sv,n);
	
	printf ("+-----------  Xuat thong tin ----------\n");
	xuatThongTin(sv,n);
	printf ("\n");

	
	getch();
}





















