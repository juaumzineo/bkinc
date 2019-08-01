#include <stdio.h>
#include <io.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(int argc, char *argv[]){
	int esc, c1=0, c2=0, c3=0, c4=0, cont=1;
	float val=0, vr=0, tr=0;
	char add[3];
	setlocale(LC_ALL, "Portuguese");
	while(cont<=3) {
	printf("-----------------------------------------------------------------------\n");
    printf("\n                          BurguerKing \n	              Menu exclusivo da Nike.\n\n");
	printf("-----------------------------------------------------------------------\n\n");
	printf("\n                       ------ MENU ------\n" );
	printf("\n                       Combo Whopper - 1\n");
	printf("\n                       Cheddar Duplo - 2\n                       + 1 Batata Suprema\n                       + 1 Free Refil\n");
	printf("\n                       Combo Whopper - 3\n                       + 1 Cheddar\n");
	printf("\n                       2 Whopper - 4\n                       + 1 Batata Media\n                       + 1 Free Refil\n");
	printf("\n\n               Digite o codigo do combo desejado: ");
	scanf("%d", &esc );
	switch (esc) {
		case 1:
		printf("\n               Voce selecinou o Combo Whopper.\n\n" );
		c1++ ;
		val= val + 19.90;
		printf("\n               Deseja pedir mais um combo? (Sim/Nao) " );
		scanf("%s", &add );
		 if (strcmp(add, "Sim") == 0) {
			 break;
		 }
		 else{
			 cont=3;
		 }
		break;

		case 2:
		printf("\n               Voce selecinou o Cheddar Duplo.\n\n" );
		c2++ ;
		val= val + 19.90;
		printf("\n               Deseja pedir mais um combo? (Sim/Nao) " );
		scanf("%s", &add );
		 if (strcmp(add, "Sim") == 0) {
			 break;
		 }
		 else{
			 cont=3;
		 }
		break;

		case 3:
		printf("\n               Voce selecinou o Combo Whopper e Cheddar.\n\n" );
		c3++ ;
		val= val + 24.90;
		printf("\n               Deseja pedir mais um combo? (Sim/Nao) " );
		scanf("%s", &add );
		 if (strcmp(add, "Sim") == 0) {
			 break;
		 }
		 else{
			 cont=3;
		 }
		break;

		case 4:
		printf("\n               Voce selecinou o Combo Whopper Duplo.\n\n" );
		c4++ ;
		val= val + 26.90;
		printf("\n               Deseja pedir mais um combo? (Sim/Nao) " );
		scanf("%s", &add );
		 if (strcmp(add, "Sim") == 0) {
			 break;
		 }
		 else{
			 cont=3;
		 }
		break;

		default:
		printf("\n               Codigo invalido.\n\n");
		cont--;
		break;
	}
	cont ++;
}
    printf("\n                       ------- COMBOS -------\n");
	printf("\n                       Combo Whopper: %d", c1);
	printf("\n                       Cheddar Duplo: %d", c2);
	printf("\n                       Combo Whopper: %d", c3);
	printf("\n                       Whopper Duplo: %d", c4);
	printf("\n                       ----------------------\n");
	printf("\n                       ------- TOTAL  -------\n");
	printf("\n                              R$%.4f\n", val);
	printf("\n                        Valor recebido: R$");
	scanf("%f", &vr);
	tr= vr - val;
	printf("\n                        Troco R$%.4f", tr);
	printf("\n                       ----------------------\n");
	printf("\n               Nos do BurguerKing e da Nike agradecemos.\n\n" );
	system("PAUSE");
	return 0;
}
