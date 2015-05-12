#include <stdio.h>

#define MAX 10

int main(){
	int i=0, total=0;
	
	i=1;
	while(i<=MAX){
		total += i++;
	}

	printf("%d\n",total);
}