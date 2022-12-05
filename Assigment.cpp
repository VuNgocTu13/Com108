#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void checkNumber(){
    float so;  
   printf ("\nMoi nhap so: ");
   scanf ("%f", &so);
   
   if (so==(int)so){
       printf ("\n%g la so nguyen\n", so);
   } else 
         { printf ("\n%g khong phai la so nguyen\n", so);
   }
      
    if(so > 1 && so==(int)so) {
    	int sont = so;
		int i;
		int kiemtra = 1;
		for(i = 2; i <= sqrt(sont); i++)  {
			if(sont % i == 0) {
				kiemtra = 0;
				break;
			}
	}	
		if(kiemtra == 1) {
			printf("%d la so nguyen to \n", sont);
		} else {
			printf("%d khong phai la so nguyen to \n", sont);
	}	}		
	   else {
		printf ("%g khong phai la so nguyen to \n", so);
	} 
	

    if (so>0 && (sqrt(so)==(int)sqrt(so))){
    	printf ("%g la so chinh phuong\n", so);
	} else {
		printf ("%g khong phai la so chinh phuong\n", so);
	}
}

int  timUCBC(){
    int a, b;
	printf("\nNhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
	
	if(a == 0 && b == 0){
			printf("\nKhong ton tai UCLN, BCNN\n");
		} else if(a == 0 || b == 0) {
			printf("\nKhong co BCNN, UCLN = %d\n", (a == 0) ? b : a);
		} else if(a >0 && b>0){ 
			int bc = a * b;			
			while(a != b) {
				if(a > b) {
					a = a - b;
				} else {
					b = b - a;
				}
			}
            printf("UCLN = %d\n", b);
			printf("BCNN = %d\n", bc / b);
		}
		
	else if(a < 0 && b >0){
		int bc = a * b;
		a = -a;
		while(a != b) {
				if(a > b) {
					a = a - b;
				} else {
					b = b - a;
				}
			}
            printf("\nUCLN = %d\n", b);
			printf("BCNN = %d\n", -bc / b);
		}
   
    else if(a > 0 && b < 0){
		int bc = a * b;
		b = -b;
		while(a != b) {
				if(a > b) {
					a = a - b;
				} else {
					b = b - a;
				}
			}
            printf("\nUCLN = %d\n", b);
			printf("BCNN = %d\n", -bc / b);
		}
   
    else{
    	int bc = a * b;
		a = -a;
		b = -b;
		while(a != b) {
				if(a > b) {
					a = a - b;
				} else {
					b = b - a;
				}
			}
            printf("\nUCLN = %d\n", b);
			printf("BCNN = %d\n", bc / b);
		}
}

float tinhTienKaraoke(){
    int batDau, ketThuc;
    float tongTien, giamGia;
    
    printf ("Nhap vao gio bat dau: ");
    scanf("%d",&batDau); 
    printf ("Nhap vao gio ket thuc: ");
    scanf("%d",&ketThuc);
    
   int thoiGian = ketThuc - batDau;
   int gioGiamGia = thoiGian - 4;
   float tien = thoiGian * 150000;
   giamGia = gioGiamGia * 150000;
    
	if (batDau >= 12 &&  ketThuc <= 23){
		if (thoiGian <= 3 && batDau < 14 || batDau > 17){
			printf ("Thanh Toan:  %.2f\n",tien);
		}else if(thoiGian <= 3 && batDau >= 14 || batDau <= 17){
			tongTien = (thoiGian * 150000) -( (thoiGian * 150000)*0.1);
			printf ("Thanh Toan:  %.2f\n",tongTien);
		}else if(thoiGian > 3 && batDau < 14 || batDau > 17){
			tongTien = (3*150000) + (giamGia - (giamGia * 0.3));
			printf ("Thanh Toan:  %.2f\n",tongTien);
		}else {
			tongTien = (3*150000) + (giamGia - (giamGia * 0.3)) - ((3*150000) + (giamGia - (giamGia * 0.3)) * 0.1);
			printf ("Thanh Toan:  %.2f\n",tongTien);
		}
	}else {
		printf ("Ngoai thoi gian phuc vu. \n");
	}
	 
}
     

   

float tinhTienDien(){
		int numberElectric;
	float payElectric;
	printf ("Nhap vao so dien tieu thu: ");
	scanf ("%d",&numberElectric);
	
	float level1 = 50 * 1.678;
	float level2 = 50 * 1.734;
	float level3 = 100 * 2.014;
	float level4 = 100 * 2.536;
	float level5 = 100 * 2.834;
	
    if (numberElectric <= 50){                                 // Bac1
    	payElectric = numberElectric * 1.678;
	}else if (numberElectric <= 100){                    // Bac2
		payElectric = level1 + (numberElectric - 50) * 1.734;
	}else if ( numberElectric <= 200){                   // Bac3
		payElectric = level1 + level2 + ((numberElectric - 100) * 2.014);
	}else if ( numberElectric <= 300) {                  // Bac4
	    payElectric =level1 + level2 + level3 + (numberElectric - 200) * 2.536;             
    }else if ( numberElectric <= 400){                   //Bac5
        payElectric = level1 + level2 + level3 + level4 + (numberElectric - 300) * 2.834;  	
	}else {
		 payElectric = level1 + level2 + level3 +  level4 + level5 + (numberElectric - 400)*2.927; 
	}
	printf ("Ban da su dung: %d (kWh)\n",numberElectric);
	printf ("So tien phai dong la: %f (VND)\n",payElectric);
}

void doiTien (){
   int soTien ;
   printf ("Nhap vao so tien: ");
   scanf ("%d",&soTien);
   
   int menhGia[]= {500, 200, 100, 50, 20, 10, 5, 2, 1};
   int soMenhGia [9]= {0};
   
   int i;
   for (i=0; i<9; i++){
   	if (soTien > menhGia[i])
   		break;
	   
   }
   // Khong dung for vi khong gan i tu 0; 
   // phu hop voi dieu kien o tren.
 while (i<9){
   	if (soTien > 0){
   		soMenhGia[i] = soTien / menhGia[i];
   		soTien = soTien % menhGia[i];
	   }
	   i++;
   }
   printf ("So tien can doi: ");
    for (i=0; i<9; i++){
    	if(soMenhGia[i] > 0){
    		printf ("%d to %d \n", soMenhGia[i],menhGia[i]);
		}
	}
	printf ("\n");
   
}


void tinhLaiSuat (){
	
	float tienVay;
	printf ("Nhap vao so tien vay:  ");
	scanf ("%f",&tienVay);
	
	float laiPhaiTra, gocPhaiTra, soTienPhaiTra;
	gocPhaiTra = tienVay / 12;
	printf ("\nKy han\tLai phai tra\tGoc phai tra\tSo tien phai tra\tSo tien con lai");
	int i;
	for (i=1; i<= 12; i++){
		laiPhaiTra = tienVay * 0.05;
		soTienPhaiTra = laiPhaiTra + gocPhaiTra;
		tienVay -= gocPhaiTra;
		printf ("\n%d\t%2.f\t\t%2.f\t\t%2.f\t\t\t%2.f", i, laiPhaiTra, gocPhaiTra, soTienPhaiTra,tienVay );
	    printf ("\n");
	}
}
	
//float vayTienMuaXe (){
//	float phanTram; 
//	
//	double soTien;
//	printf ("Nhap so tien vay co dinh: ");
//	scanf("%lf",&soTien);
//	printf ("Nhap so phan tram vay: ");
//	
//		scanf ("%f",&phanTram);
//
//	
//	float soTienTraLanDau,laiPhaiTra1, gocPhaiTra1, soTienPhaiTra1;
//	soTienTraLanDau =  soTien * (1 - phanTram);
//	printf ("So tien phai tra truoc: %f\n",soTienTraLanDau);
//	int i;
//	gocPhaiTra1= soTien / 24; 
//		printf ("\nKy han\tLai phai tra\tGoc phai tra\tSo tien phai tra\tSo tien con lai");
//		for ( i=1; i<= 24; i++){
//		
//		laiPhaiTra1 = soTien * 0.072;
//		soTienPhaiTra1 = laiPhaiTra1 + gocPhaiTra1;
//		soTien -= gocPhaiTra1;
//		printf ("\n%d\t%2.f\t\t%2.f\t\t%2.f\t\t\t%2.f", i, laiPhaiTra1, gocPhaiTra1, soTienPhaiTra1,soTien );
//	    printf ("\n");
//	}
//}	
	
	
// Chuc nang 8: Sap xep thông tin sinh viên
	
	
struct SinhVien{
    char ten[20];
    int tuoi;
    float diem;
    char hocLuc[20];
};

void nhapThongTin (struct SinhVien sv[], int *n){
	int i;
	
	printf ("Vui long nhap so luong sinh vien: ");
	scanf ("%d", n);
	
	for ( i=0; i< *n; i++){
		printf ("Sinh vien [%d]= ",i+1);
		fflush(stdin);
		gets(sv[i].ten);

	
	do{
		printf ("Moi nhap tuoi: ");
		scanf ("%f",&sv[i].tuoi);
	}while (sv[i].tuoi <= 0);
	
	do{
		printf ("Moi nhap diem: ");
		scanf ("%f",&sv[i].diem);
	}while (sv[i].diem < 0);
	}	
}

void xapXep (struct SinhVien sv[], int n){
	int i,j;
	for (int i=0; i < n; i++){
		for (int j=0; j < n; j++){
			if(sv[i].diem < sv[j].diem){
				struct SinhVien ds = sv[i];
				sv[i] = sv[j];
				sv[j] =  ds;
			}
			
		}
	}
}

void hocLuc(struct SinhVien sv[], int n){
    int i;
    
    for (i = 0; i < n; i++){
        if(sv[i].diem >= 9){
        strcpy(sv[i].hocLuc,"Hoc luc xuat sac");
		}else 
		if(sv[i].diem >= 8){
        strcpy(sv[i].hocLuc,"Hoc luc gioi");
		}else 
		if(sv[i].diem >= 6.5)
		{
        strcpy(sv[i].hocLuc,"Hoc lua kha");
		}else 
		if(sv[i].diem >= 5){
        strcpy(sv[i].hocLuc,"Hoc luc TB");
		}else {
        strcpy(sv[i].hocLuc,"Hoc luc yeu");}       
    }
}

void hienThi(struct SinhVien sv[], int n){
    int i;
    printf ("\n");
    printf ("+======================================+");
    printf ("|\nSTT\tTen sinh vien\t\tDiem\tHoc luc\n");
    
    for (i = 0; i < n; i++){
    printf ("| %d\t%s\t\t%g\t%s\n", (i + 1), sv[i].ten, sv[i].diem, sv[i].hocLuc);
	}
	printf ("+======================================+\n");       
}

void sinhVien(){
    struct SinhVien sv[40];
    int n;
    
    nhapThongTin(sv, &n);
    
    xapXep(sv, n);
    
    hocLuc(sv, n);
    
    hienThi(sv, n);

}


void fpolyLott(){
	int a, b;
	srand(time(NULL));
	
	do{
	printf ("\nMoi nhap 2 so a, b: ");
	scanf ("%d %d", &a, &b);}
	while (a < 0 || b < 0 || a > 15 || b > 15 || a == b);
	printf ("\nSo ban chon la: %d %d", a, b);
	 
	printf("\nKet qua so xo la: ");
	
		int random1 = 1+rand() % 15;
		int random2 = 1+rand() % 15;
	
	printf ("%d %d\n", random1, random2);	 	
	
	if ((a == random1 && b == random1) || (a == random2 && b == random1) ){
		printf ("\nChuc mung ban da trung giai nhat\n");
	}
	else if (a == random1 || b == random1 || a == random2 || b == random2 ){
		printf ("\nChuc ming ban da trung giai nhi\n");
	}
	else 
	printf ("\nChuc ban may man lan sau\n");
 }
    
    struct PhanSo{
	int tu;
	int mau;
}; 

struct PhanSo nhap(){
	struct PhanSo phanso;
	
	printf ("\nMoi nhap tu so: ");
	scanf ("%d", &phanso.tu);
	do{
	printf ("Moi nhap mau so: ");
	scanf ("%d", &phanso.mau);}
	while (phanso.mau == 0);
	
	return phanso;
}

struct PhanSo cong(struct PhanSo so1, struct PhanSo so2){
	struct PhanSo tong;
	if (so1.mau == so2.mau){
	tong.tu = so1.tu + so2.tu;
	tong.mau = so1.mau;}
	else {
	tong.tu = so1.tu * so2.mau + so2.tu * so1.mau;
	tong.mau = so1.mau * so2.mau;
	}
	return tong;
}

struct PhanSo tru(struct PhanSo so1, struct PhanSo so2){
	struct PhanSo hieu;
	if (so1.mau == so2.mau){
	hieu.tu = so1.tu - so2.tu;
	hieu.mau = so1.mau;}
	else {
	hieu.tu = so1.tu * so2.mau - so2.tu * so1.mau;
	hieu.mau = so1.mau * so2.mau;
	}
	return hieu;
}

struct PhanSo nhan(struct PhanSo so1, struct PhanSo so2){
	struct PhanSo tich;
	tich.tu = so1.tu * so2.tu;
	tich.mau = so1.mau * so2.mau;
	return tich;
}
	
struct PhanSo chia(struct PhanSo so1, struct PhanSo so2){
	struct PhanSo thuong;
	thuong.tu = so1.tu * so2.mau;
	thuong.mau = so1.mau * so2.tu;
	return thuong;
}

void tinhPhanSo(){
	struct PhanSo phanso1 = nhap();
	
	struct PhanSo phanso2 = nhap();
	
	struct PhanSo tong = cong(phanso1, phanso2);
	
	struct PhanSo hieu = tru(phanso1, phanso2);
	
	struct PhanSo tich = nhan(phanso1, phanso2);
	
	struct PhanSo thuong = chia(phanso1, phanso2);
	
	printf ("\nTong 2 phan so la: %d/%d + %d/%d = %d/%d ", phanso1.tu, phanso1.mau, phanso2.tu, phanso2.mau, tong.tu, tong.mau);
	
	printf ("\nHieu 2 phan so la: %d/%d - %d/%d = %d/%d ", phanso1.tu, phanso1.mau, phanso2.tu, phanso2.mau, hieu.tu, hieu.mau);
	
	printf ("\nTich 2 phan so la: %d/%d * %d/%d = %d/%d ", phanso1.tu, phanso1.mau, phanso2.tu, phanso2.mau, tich.tu, tich.mau);
	
	printf ("\nThuong 2 phan so la: %d/%d : %d/%d = %d/%d \n", phanso1.tu, phanso1.mau, phanso2.tu, phanso2.mau, thuong.tu, thuong.mau);
}    
    
    
int main ()
{
    int choose;
	do{
				printf ("+-------------------------------------------------------+\n");
				printf ("|   0. Thoat chuong trinh.                              |\n");
				printf ("|   1. Kiem tra so nguyen.                              |\n");
				printf ("|   2. Tim uoc chung & boi chung cua 2 so.              |\n");
				printf ("|   3. Chuong trinh tinh tien cho quan karaoke.         |\n");
				printf ("|   4. Tinh tien dien.                                  |\n");
				printf ("|   5. Chuc nang doi tien.                              |\n");
				printf ("|   6. Tinh lai suat vay ngan hang tra gop.             |\n");
			//	printf ("|   7. Vay tien mua xe.                                 |\n");
				printf ("|   8. Sap xep thong tin sinh vien.                     |\n");
				printf ("|   9. Game FPOLY-LOTT.                                 |\n");
				printf ("|   10.Tinh toan phan so.                               |\n");
				printf ("+-------------------------------------------------------+\n");
				
				
	
	printf ("Nhap vao chuc nang ban muon su dung:  ");
	scanf ("%d",&choose);
	
	switch(choose){
	case 1:
		checkNumber();			
		break;
		
	case 2:     
		timUCBC();
     	break;
	
	case 3:
		tinhTienKaraoke();
		break;
		
		 case 4: 
	     tinhTienDien();
	     break;
	    
	    case 5:
	        doiTien();
	    break;
	    
	    case 6:
	        tinhLaiSuat();
	    break;
	    
//	    case 7:
//	        vayTienMuaXe();
//	    break;
	    
	    case 8:
	        sinhVien();
	    break;
	    
	    case 9:
	       fpolyLott();
	    break;
		
		case 10:
	       tinhPhanSo();
	    break;
		case 0:
		      printf ("Ban da thoat ! \n"); 
	    break;
		
		default :
			printf ("Again.");
		break;			   
	    }
	}while(choose);
	
	return 0;
}
