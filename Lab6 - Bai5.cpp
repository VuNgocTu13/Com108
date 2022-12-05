#include<stdio.h>  
#include<conio.h>  

int main()  
{  
   int a[0],n,i;
   printf ("Nhap so thap phan: ");
   scanf ("%d",&n);
   
   for (i=0; n>0;i++){
   	a[i] = n%2;
   	n = n / 2;
   }   
   
   printf ("\n Dang nhi phan : ");
   for (i=i-1;i>=0;i--){
   	printf ("%d",a[i]);
   }
   return 0;

}
