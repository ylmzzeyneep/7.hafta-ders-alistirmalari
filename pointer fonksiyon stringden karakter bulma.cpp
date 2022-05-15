#include <stdio.h>
char *ara(char *p, char c){
	while(*p != 0){
		if(*p == c)
		  return p;
	    p++;
	}
	if(c == '\0')
	  return p;
	  
	  return NULL;
}

int main(){
	char *sonuc;
	char aranan;
	char str[100];
	
	printf("stringi giriniz:");
	gets(str);
	
	aranan=getchar();
	printf("aranan: %c", aranan);
	
	sonuc = ara(str, aranan);
	if(sonuc == NULL)
	  printf("karakter bulunamadi\n\n");
	  
	else
	  printf("karakter bulundu\n");
	  
	return 0;    
}
