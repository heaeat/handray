#include <stdio.h>
#include <stdlib.h>




int main(int argc, char *argv[]){

	/* 0x8 : p1 / 0x4 : p2 */
	int p1 = 0;
	int p2 = 0;

	if(argc != 2){
		exit(0);
	}
	p1 = 1;
	for(p1; p1 < 10; p1++){
		for(p2 = 1; p2 < 10; p2++){
			printf("%d\n",p1*p2);
		}
	}
	return 0;
}
