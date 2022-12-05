#include<stdio.h>
#include<string.h>
int main (){
	char s[5][20];
	char t[20];
	int i,j;
	int size = 5;
	 printf("\nNhap 5 chuoi bat ky: \n");
   for (i = 0; i < size; i++) {
      scanf("%s", s[i]);
   }
	
	for (i=1; i<5; i++){
		for (j=1; j<5; j++){
			if(strcmp(s[j-1],s[j]) >0){
				strcpy(t,s[j-1]);
				strcpy(s[j-1],s[j]);
				strcpy(s[j],t);
			}
		}
	}
	printf("Sap xep: \n");
	for (i=0; i<size; i++){
		printf ("\n %s ",s[i]);
	}
	return 0;
}
