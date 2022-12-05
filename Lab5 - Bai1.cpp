#include<stdio.h>
int timMax(int a, int b, int c){
	int max = a;
    if(max < b)//neu max<b cap nhat max=b
    {
        max = b;
    }
    if(max < c)//neu max<c cap nhat max=c
    {
        max = c;
    }
	return max;
}

int main (){
	int max;
	int a,b,c;
	printf ("Enter a: ");
	scanf ("%d",&a);
	printf ("Enter b: ");
	scanf ("%d",&b);
	printf ("Enter c: ");
	scanf ("%d",&c);
	
	int soMax = timMax(a,b,c);
	printf ("So lon nhat trong 3 so: %d",soMax);
	return 0;
}
