#include<stdio.h>
#include<math.h>

 void tinhHocLuc (){
	float points;
	printf ("Nhap vao diem cua sinh vien: ");
	scanf ("%f",&points);
	
	if(points >= 9){
		printf ("Hoc luc xuat sac.");
	}else if (9>points>=8){
		printf ("Hoc luc gioi.");
	}else if (8>points>=6.5){
		printf ("Hoc luc kha.");
	}else if (6.5>points>=5){
		printf ("Hoc luc trung binh.");
	}else if (5>points>=3.5){
		printf ("Hoc luc yeu.");
	}else {
		printf ("Hoc luc kem.");
	}
	
}

float giaiPhuongTrinhBac1 (){
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
	
}

float giaiPhuongTrinhBac2 (){
	float a,b,c,x;
	
	printf ("Nhap vao a: ");
	scanf ("%f",&a);
	printf ("Nhap vao b: ");
	scanf ("%f",&b);
	printf ("Nhap vao c: ");
	scanf ("%f",&c);
	
	float Delta = b*b-4*a*c;
	if(a==0){
		x=-c/b;
	}else if(b==0){
		printf ("Phuong trinh vo nghiem. \n");
	}else if(c==0){
		printf ("Phuong trinh vo so nghiem. \n");
	}else if (a+b+c == 0){
		printf ("Phuong trinh co nghiem: \n");
		printf ("\n X1 = 1");
		printf ("\n X2 = %f\n",c/a);
	}else if (a-b+c == 0){
		printf ("Phuong trinh co nghiem: \n");
		printf ("\n X1 = -1");
		printf ("\n X2 = %f\n",-(c/a));
	}else {
		if(Delta<0){
			printf ("Phuong trinh vo nghiem. \n");
		}else if (Delta == 0){
			x= (-b)/(2*a);
			printf ("Phuong trinh co nghiem kep: X = %f \n",x);
		}else {
			printf ("Phuong trinh co 2 nghiem phan biet.\n");
			float x1 =(float) ((-b-sqrt(Delta)) / (2*a));
			float x2 =(float) ((-b+sqrt(Delta)) / (2*a));
			printf ("X1 = %f ",x1);
			printf ("\n X2 = %f \n",x2);
		}
		
		}
		
	}
    
    float tinhTienDien (){
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


int main (){
int choose;
	
	
		printf ("1. Bai 1: Chuong trinh tinh hoc luc. \n");
	    printf ("2. Bai 2: Giai phuong trinh bac 1. \n");
	    printf ("3. Bai 3: Giai phuong trinh bac 2. \n");
	    printf ("4. Bai 4: Tinh tien dien. \n");
	    printf ("0. Thoat \n");
	    printf ("Nhap su lua chon cua ban: ");
	    scanf ("%d",&choose);
	
	
	switch(choose){
		case 1:
			tinhHocLuc();
			break;
		case 2:
		    giaiPhuongTrinhBac1();
		    break;
		case 3:
		    giaiPhuongTrinhBac2();
		    break;
		case 4:
		    tinhTienDien();
			break;
		case 0:
		     break;				
		default	:
			printf ("Ban Da Thoat.");
			break;
		
	}
	
    
}
