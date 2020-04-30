#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char* argv[]) {

	int a, b, c, d = atoi(argv[1]);
	for(a = 2; a <= d; a++){
	c = 0;
	for(b = 2; b < a-1 && c == 0; b++){
		if(a % b == 0) c = 1;
		}
		if (c == 0 && d % a == 0){
		printf("%d\n", a);
		}
	}

return 0;
} 
