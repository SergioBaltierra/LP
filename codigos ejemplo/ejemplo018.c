#include <stdio.h>

#define MAX 10

int main(){
	int i=0, j=0, total_uno=0, total_dos=0;
	
	i=1;
	j=MAX;
	while(i<=MAX && j>=0){
		total_uno+=i++;
		total_dos+=j--;
	}

	printf("%d\n",total_uno);
	printf("%d\n",total_dos);
}