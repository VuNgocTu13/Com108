#include<stdio.h>
#include<math.h>
void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main (){
	int a,b;
	printf ("Enter a: ");
	scanf ("%d",&a);
	printf ("Enter b: ");
	scanf ("%d",&b);
	printf ("_________ Truoc khi hoan vi __________");
	printf ("a = %d , b = %d \n",a,b);
	swap(&a,&b);
	printf ("_________ Sau khi hoan vi __________");
	printf ("a = %d , b = %d \n",a,b);
}
