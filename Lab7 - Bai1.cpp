#include<stdio.h>
#include<string.h>
int main (){
	char s[100];
	printf ("Nhap vao chuoi: ");
	gets(s);
	int i=0, n=0, p=0;
	
	while (s[i++] != '\0' ){
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||s[i] == 'U' ) {
			n++;
		} else if (s[i] != ' '){
			p++;
		}
	}
	printf ("Chuoi ' %s ' co chua: %d Nguyen am va %d Phu am. \n",s,n,p);
	return 0;
}
