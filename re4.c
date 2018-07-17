#include <stdio.h>
#include <stdlib.h>


int foo(int i){	
	int j;

	if(i < 0){
		exit(0);
	}

	if(i !=1){
		if(i == 2){
			return 1;
		}

	}
	return foo(i-1) + foo(i-2);
}

int main(){

	printf("%d\n",foo(10));
	return 0;
}
