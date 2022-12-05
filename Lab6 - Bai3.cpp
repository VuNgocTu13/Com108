#include <stdio.h>

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
	
	printf ("Nhap vao so phan tu cua mang: ");
	scanf ("%d",&n);
	//Nhap mang
	nhapMang(a,n);
	//Xuat mang
	xuatMang(a,n);
	
	for (int i=0; i<n; i++){
		for (int j=0 ; j<n; j++){
			if (a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf ("\n Mang sau khi sap xep giam dan: ");
	for (int i=0; i<n; i++){
		printf (" %d, ",a[i]);
	}
	
	return 0;
}

