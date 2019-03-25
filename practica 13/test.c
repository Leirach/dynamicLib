#include <stdio.h>
//libreria creada por Napoleon Lazo
#include "ASCII_dll.h"

int main(int argc, char const *argv[])
{
	char binary[] = "1010101";
	char hex[] = "BAD";
	char dub[] = "1.1";
	int num = 0;
	double num2 = 0;

	num = asciiBinaryToInt(binary);
	printf("%s in binary is %d decimal\n", binary, num);

	num = asciiHEXToInt(hex);
	printf("%s in hex is %d decimal\n", hex, num);

	num2 = asciiToDouble(dub);
	printf("%s parsed to double %lf\n", dub, num2);

	return 0;
}