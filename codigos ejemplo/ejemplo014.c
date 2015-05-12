#include <stdio.h>

#define MAX 10

int main(){
	int i=0, total=0;
	
	for(i=MAX;i>=0;i--){
		total+=i;
	}

	printf("%d\n",total);
}