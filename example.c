#include <stdio.h>

int main(void)
{
	char t,s,m;
	int edad;
	
	printf("Ingrese sus tres iniciales, seguido de su edad:");
	scanf("%c %c %c %d", &t, &s, &m, &edad);
	printf("Mis iniciales son: %c%c%c y mi edad es: %d.\n", t, s, m, edad);
	return(0);

}
