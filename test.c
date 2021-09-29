#include "odd.h"

int main(int argc, char *argv[])
{
	if(isOdd(1)!=1 || isOdd(2)!=0){
		printf("isOdd 함수 구현 잘못함\n");
	}
	return 0;
}