#include<stdio.h>
//Nhap mang 
void nhapMang (int a[], int n){
	for (int i=0; i<n; i++){
		printf ("A[%d] = ",i);
		scanf ("%d",&a[i]);
	}
}

//Xuat mang
void xuatMang (int a[], int n){
	for (int i=0; i<n; i++){
		printf ("A[%d]= %d, ",i,a[i]);
	}
}

int main (){
    int n;
	int a[n];
	// Nhap vao so phan tu mang
	printf ("Nhap vao N: ");
	scanf ("%d",&n);
	// Nhap mang
	nhapMang(a,n);
	// Xuat mang
	xuatMang(a,n);
	int max = a[0];
	int min = a[0];
	for (int i=0;i<n;i++){
		if (a[i]>max){
			max = a[i];
		}
		if (a[i] < min){
			min = a[i];
		}
	}
	printf ("\n MAX = %d \n",max);
	printf (" MIN = %d \n",min);
	
	return 0;
}
