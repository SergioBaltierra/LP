/*
    Nombre: 
    RUN: 
    Tarea Número:

    Algoritmo: 
*/

#include <stdio.h>

#define MAX 5 //74

int main(){
    //char palabra[]="trestrestristrestristrestriguestriguestrigabantrigabanenenununtrigaltrigal";
    char palabra[]="aakkj";
    int i, j, bandera=0, pareja=0;
    
    for(i=0;i<MAX;i++){                         // buscamos desde el i-ésimo caracter al último del primer elemento del par.
        for(j=i+1;j<MAX && bandera!=1;j++){     // buscamos desde el j-ésimo caracter al último del segundo elemento del par y hasta encontrar.
            if(palabra[i]==32 && palabra[j]==32)  // si son un espacio en blanco la i-ésima con la j-ésima bandera = 0.
                bandera=0;
            else if(palabra[i]==palabra[j]){      // de lo contrario se comparan, si son iguales
                palabra[i]=32;                    // se tacha la i-ésima letra con un espacio en blanco.
                palabra[j]=32;                    // se tacha la j-ésima letra con un espacio en blanco.
                bandera=1;                        // bandera se cambia a 1 y así dejamos de buscar el par de caracteres iguales.
                pareja++;                         // contador de parejas de caracteres iguales.
            }
        }
        bandera=0;                                // modificamos bandera=0.
    }

    pareja==(int)MAX/2 ? printf("1\n") : printf("0\n"); // si cantidad de parejas es igual a la mitad del largo del string es un palíndromo, de lo contrario no lo es.
}