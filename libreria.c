#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

//convierte de string de 0 y 1 a entero
unsigned int asciiBinaryToInt(char *s) {
	int N = strlen(s);
	int power = 0;
	unsigned int num = 0;

	if (N > 32) {
		return num;
	}

	for (int i = N - 1; i >= 0; i--) {
		if (s[i] == '0' || s[i] == '1') 
		{
			num += (int)(s[i] - '0') * pow(2, power);
			power++;
		}
		else {
			return num;
		}
	}

	return num;
}

//cambia de string de Hexadecimal a int
unsigned int asciiHEXToInt(char *s) {
	int N = strlen(s);
	int power = 0;
	unsigned int num = 0;

	if (N > 8) {
		return num;
	}

	for (int i = N - 1; i >= 0; i--) {
		if (s[i] >= 'a' && s[i] <= 'f')
		{
			s[i] = toupper(s[i]);
		}

		if ((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'A' && s[i] <= 'F')) 
		{
			if (s[i] >= 'A') {
				num += (s[i] - 'A' + 10) * pow(16, power);
			}
			else {
				num += (s[i] - '0') * pow(16, power);
			}
			power++;
		}
		else {
			return num;
		}
	}

	return num;
}

//convierte de OCT a int
int asciiOCTToInt(char *s) {
	int N = strlen(s);
	int power = 0;
	unsigned int num = 0;

	//evitar overflow
	if (N > 10) {
		return num;
	}

	for (int i = N - 1; i >= 0; i--) {
		if (s[i] >= '0' && s[i] <= '7') 
		{
			num += (s[i] - '0') * pow(8, power);
			power++;
		}
		else {
			return num;
		}
	}

	return num;
}

//mueve los bits uno a la derecha para dividir entre 2
unsigned int divideByTwo(unsigned int *i) {
	//binary shift right
	*i = *i >> 1;
	return *i;
}

//mueve los bits uno a la izquierda para multiplicar por 2
unsigned int multByTwo(unsigned int *i) {
	//binary shift left
	*i = *i << 1;
	return *i;
}
