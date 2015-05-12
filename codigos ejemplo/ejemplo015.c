#include <stdio.h>

#define MAX 10

int main(){
	int i=0, j=0, total_uno=0, total_dos=0;
	
	for(i=0, j=MAX;i<=MAX && j>=0;i++, j--){
		total_uno+=i;
		total_dos+=j;
	}

	printf("%d\n",total_uno);
	printf("%d\n",total_dos);
}