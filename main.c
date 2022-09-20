#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int a,b;
	float div;
	
	scanf("%d %d", &a,&b);
	
	div = (float)a/b;
	
	
	printf("%d/%d=%f",a,b,div);
	
	return 0;
}
