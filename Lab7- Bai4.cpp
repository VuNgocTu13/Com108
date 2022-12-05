#include<stdio.h>
#include<string.h>

int main (){
	char ten[5][25] = {'ab','cd','ef','gh', 'jk','\0'};
	int soSanh;
	
	char tenTimKiem[25];
	printf ("Nhap ten tim kiem: ");
	gets(tenTimKiem);	
	
	int i;
	for (i=0; i<5; i++){
		soSanh = strcmp(tenTimKiem,ten[i]);
	}
	
	if (soSanh == 0){
		printf ("Da tim thay. ");
	}
}
