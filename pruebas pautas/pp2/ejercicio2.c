#include <stdio.h>

#define N 10

int main(){	
	int sucesion[N];
	int *puntero;
	int i, n_2, n_3, total=1;

	sucesion[0]=1;
	sucesion[1]=0;
	sucesion[2]=0;

	puntero=&sucesion[2];

	for(i=3;i<N;i++){
		puntero-=1;
		n_2 = *puntero;
		puntero-=1;
		n_3 = *puntero;
		puntero+=3;
		*puntero = n_2+n_3;
		total += *puntero;
	}

	printf("%d\n",total);
}