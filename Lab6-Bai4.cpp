#include<stdio.h>
//Nhap mang 
void nhapMang (int a[][100], int n, int m){
	for (int i=0; i<n; i++){
		for (int j=0;j<m;j++){
	    	printf ("A[%d][%d] = ",i,j);
		    scanf ("%d",&a[i][j]);
		}	
	}
}

//Xuat mang
void xuatMang (int a[][100], int n, int m){
	for (int i=0; i<n; i++){
		for (int j=0;j<m;j++){
			printf (" %d ",a[i][j]);
		}		
	}
	printf("\n");
}

int main (){
	int m,n;
	printf ("Nhap vao so hang: ");
	scanf ("%d",&n);
	printf ("Nhap vao so cot: ");
	scanf ("%d",&m);
	int a[100][100];
	printf ("============  Bat Dau Nhap Ma Tran ============\n");
	nhapMang(a,n,m);
	printf ("\n");
	printf ("============  Ma Tran Vua Nhap Vao ============\n");
	xuatMang(a,n,m);
	printf ("\n");
	int c[100][100];
	printf ("===========  Xuat Mang Binh Phuong =============\n");
	
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
		c[i][j] = a[i][j] * a[i][j];
		printf ("  %d  ",c[i][j]);	
		}
	}
    
    return 0;
	
}
