#include <stdio.h>

int main(int argc, char** argv) {
    //int N = 121;    // 121 120 60 30 15 14 7 6 3 2 1 -> 11
    //int N = 51;       // 51 50 25 24 12 6 3 2 1 -> 9
    int N = 30;     // 30 15 14 7 6 3 2 1 -> 8
    //int N = 17;     // 17 16 8 4 2 1 -> 6

    long indice=0, antecesor=N, sucesor=0;
    
    while(antecesor!=0){
        if(antecesor%2==0 && antecesor/2>1)
            sucesor=antecesor/2;
        else
            sucesor=antecesor-1;       
        
        antecesor=sucesor;
        indice++;
    }

    printf("%ld\n",indice);
}