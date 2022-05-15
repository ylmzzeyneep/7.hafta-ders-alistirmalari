#include <stdio.h>
int uzunluk(char *z){
	int u = 0;
	while(*z != '\0'){
		u++;
		z++;
	}
	printf("%d", u);
}

int main(){
	char z[100];
	
	printf("stringi giriniz:");
    gets(z);
	
	uzunluk(z);
	return 0;
}
