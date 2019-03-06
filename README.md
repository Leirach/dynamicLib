# dynamicLib
dynamic library


Para compilar la libreria

`gcc -c libreria.c`

`gcc -shared -o libreria.dll libreria.o`


linkear dll al programa

`gcc -o test test.c -L./ -llibreria`
