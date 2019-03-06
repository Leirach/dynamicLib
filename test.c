#include <stdio.h>
#include "libreria.h"

int main(int argc, char const *argv[])
{
	char binary[] = "1010101";
	int num = 0;
	num = asciiBinaryToInt(binary);
	printf("%d\n", num);
	return 0;
}