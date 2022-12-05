#include <stdio.h>
void nhapMang (int a[], int n){
	
	for (int i=0; i<n; i++){
		printf ("A[%d]= ",i);
		scanf ("%d",&a[i]);
	}
}

void xuatMang (int a[], int n){
	for (int i=0; i<n; i++){
		printf ("A[%d]= %d, ",i,a[i]);
	}
}


int main (){
	
	int n, S=0, count=0;
	float TB=0;
	printf ("Nhap vao N: ");
	scanf ("%d",&n);
	int a[n];
	
    nhapMang(a,n);
    xuatMang(a,n);

for (int i=0; i<n; i++){
	if (a[i] % 3 == 0){
		count ++;
		S += a[i];
	}
}
    TB = S / count;
    printf ("\n Trung binh cong cac so chia het 3 la: %.2f",TB);
return 0;

}
