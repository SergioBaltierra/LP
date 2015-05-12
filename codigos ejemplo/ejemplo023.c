#include <stdio.h>

#define MAX 10

int main(){
	int i=0, total=0;
	
	for(i=1;i<=MAX;i++){
		if(i==5) goto salida;
		total+=i;
	}
	
	salida:
		printf("%d\n",total);
}