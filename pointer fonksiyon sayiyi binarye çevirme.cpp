#include <stdio.h>
void convertToBinary(unsigned x){
    int i=1, k;
    unsigned *p;
    p = &x;
    
    while(1){
	    *(p+i)= x % 2;
		x = x / 2;
		
        if(x == 1){
        	*(p+i+1) = x;
        	break;
		}
		i++;}
			
	for(k=i+1; k>0; k--)
	   printf("%u", *(p+k));}
		

int main() {
	unsigned sayi;
	
	printf("bir sayi giriniz:");
	scanf("%u", &sayi);
	
	convertToBinary(sayi);
	return 0;
}
