#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

//convierte de string de 0 y 1 a entero
int asciiBinaryToInt(char *s) {
	int N = strlen(s);
	int power = 0;
	int num = 0;

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

unsigned int asciiHEXToInt(char *s) {
	int N = strlen(s);
	int power = 0;
	unsigned int num = 0;

	if (N > 8) {
		return num;
	}

	for (int i = N - 1; i >= 0; i--) {
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

double asciiToDouble(char *s) {
	double num = 0;
	int N = strlen(s);
	int pt = -1;

	//si no encuentra es 0
	for (int i = 0; i < N; i++) {
		if (s[i] == '.') {
			pt = i;
		}
	}

	if (pt == -1) {
		pt = N;
	}

	double power = 1;
	for (int i = pt - 1; i >= 0; i--) {
		if (s[i] >= '0' && s[i] <= '9') {
			num += (s[i] - '0') * power;
		}
		else {
			return num;
		}
		power *= 10;
	}

	power = 10;
	for (int i = pt + 1; i < N; i++) {
		if (s[i] >= '0' && s[i] <= '9') {
			num += (s[i] - '0') / power;
		}
		else {
			return num;
		}
		power *= 10;
	}

	return num;
}
