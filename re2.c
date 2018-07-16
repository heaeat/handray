#include <stdio.h>


int foo(int n1, int n2, int n3){
	
	int t1 = 0;
	t1 = n1 + n2;
	
	return t1 + n3;
}


int main(){
	
	
	int t1 = 0;
	
	char buf[1024] = {0};
	char *t2 = buf;
		
	foo(1,2,10);	
	printf("%d",foo(5,1,2));

	return 0;
}
