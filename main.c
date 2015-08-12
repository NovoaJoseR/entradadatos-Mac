#include <stdio.h>

int factorial(int i);

int main (int argc, const char * argv[]) {
	int i;
	int dato[3];
	for (i=0; i<3; i++) {
    printf("Introduce dato numero %d:\n",i);
	scanf("%d", &dato[i]);
}
	for (i=0; i<3; i++) {
		printf("el factorial de %d es: %d\n", dato[i], factorial(dato[i]));
	
    }
	
	return 0;
}
int factorial(int i) {
//	int i;
	int j=1;
	while (i>0) {
		j=j*i--;
	}
	return (j);
}
