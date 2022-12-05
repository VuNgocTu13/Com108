#include<stdio.h>
#include<math.h>
int main (){
	printf ("+------------- Vu Ngoc Tu - PH32035 -----------+\n");
	printf ("+------------------  Bai 2.2 ------------------+\n");
	float a,b,c,x;
	
	printf ("Nhap vao a: ");
	scanf ("%f",&a);
	printf ("Nhap vao b: ");
	scanf ("%f",&b);
	printf ("Nhap vao c: ");
	scanf ("%f",&c);
	
	float Delta = b*b-4*a*c;
	if(a==0)
    {
        if(b==0)
            {
                if(c==0)
                    printf("Phuong trinh co vo so nghiem!");
                else
                    printf("Phuong trinh vo nghiem!");
            }
        else
            printf("Phuong trinh co nghiem duy nhat la: %f",-c/b);
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
		return 0;
	}

