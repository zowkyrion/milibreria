#include "milibreria.cpp"
void leers(char *mensaje, char s[],int n){
	printf(mensaje);
	fgets(s,n,stdin);
	fflush(stdin);
	if (s[strlen(s)-1]=='\n'){
		s[strlen(s)-1]=0;
	}	
}

float leerf(char *mensaje, float inferior,float superior){
	float valor;
	do{
		printf(mensaje);
		scanf("%f",&valor);
		if(valor<inferior || valor>superior){
			printf("Dato invalido!, Debe estar entre(%.2f-%.2f). Vuelve a introducirlo:\n",inferior,superior);
		}
	}while (valor<inferior || valor>superior);
	return valor;
}
int leerd(char *mensaje, int inferior,int superior){
	int valor;
	do{
		printf(mensaje);
		scanf("%d",&valor);
		if(valor<inferior || valor>superior){
			printf("Dato invalido!, Debe estar entre(%d-%d). Vuelve a introducirlo:\n",inferior,superior);
		}
	}while (valor<inferior || valor>superior);
	return valor;
}
