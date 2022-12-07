// basic fstream:
#include <iostream>
#include <fstream>
/*
Fstream permite la implementacion de entradas y salidas de secuancias de archivos
de alto nivel

tipo:
fstream: basic_fstream<char>


constructor:
std::fstream();

parametros del constructor:
fstream(filename,mode,other)

filename: nombre del archivo que queremos abrir
mode: especifica el modo en que va a funcionar el flujo
other: otra secuencia de archivos

*/

int main() {
    std::ifstream f1;

    int length = f1.tellg();

    char* s = new char [length];
    f1.read(s,length);

    return 0;
}