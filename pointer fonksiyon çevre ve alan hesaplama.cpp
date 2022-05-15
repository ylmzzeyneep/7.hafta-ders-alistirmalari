#include <stdio.h>
void rectangle(int a, int b, int *area, int *perimeter){
	
	*area = a * b;
	printf("alan:%d\n", *area);
	
	*perimeter = (2 * a) + (2 * b);
	printf("cevre:%d", *perimeter);
	
}

int main(){
	int a, b;
	int alan, cevre;
	
	
	printf("bir sayi giriniz:");
	scanf("%d", &a);
	
	printf("bir sayi giriniz:");
	scanf("%d", &b);
	
	rectangle(a, b, &alan, &cevre);
	
	return 0;
	
}
