#include <stdio.h>	// biblioteca standar I/O.

/*
	combinacion(n,k) = n! / (k! * (n-k)!)
*/

int main(){
	int n, k, n_k=0, fact_k=1, fact_nk=1, fact_n=1;
	double coeficiente=0;

	printf("Ingrese valores de n y k: ");
	scanf("%d %d",&n,&k);


	n_k = n-k;

	while(k>0){
		fact_k *=k;
		k--;
	}

	while(n_k>0){
		fact_nk *= n_k;
		n_k--;
	}

	while(n>0){
		fact_n *= n;
		n--;
	}
	
	coeficiente = fact_n / (fact_k*fact_nk);
	printf("%0.1f\n",coeficiente);
}