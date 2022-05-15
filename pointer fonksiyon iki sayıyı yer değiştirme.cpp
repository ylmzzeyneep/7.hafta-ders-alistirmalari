#include <stdio.h>
void swap(int *a, int *b){
	int gecici;
    gecici = *a;
	*a = *b;
	*b = gecici;

    printf("%d %d", *a, *b);
}

int main(){
	int a, b;
	
	printf("bir sayi giriniz:");
	scanf("%d", &a);
	
	printf("bir sayi giriniz:");
	scanf("%d", &b);
	
	printf("%d %d\n\n", a, b);
	
	swap(&a, &b);
	
	return 0;
}
