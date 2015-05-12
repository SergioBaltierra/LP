#include <stdio.h>

#define MAX 10

int main(){
	int i=0, total=0;
	
	i=MAX;
	while(i>=0){
		total += i--;
	}

	printf("%d\n",total);
}