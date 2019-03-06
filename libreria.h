#ifndef libreria
#define libreria

//convierte de string de 0 y 1 a entero
unsigned int asciiBinaryToInt(char *s);

//cambia de string de Hexadecimal a int
unsigned int asciiHEXToInt(char *s);

//convierte de OCT a int
int asciiOCTToInt(char *s);

//mueve los bits uno a la derecha para dividir entre 2
unsigned int divideByTwo(unsigned int *i);

//mueve los bits uno a la izquierda para multiplicar por 2
unsigned int multByTwo(unsigned int *i);

#endif