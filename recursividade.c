#include <stdio.h>

// Fatorando
int fatorar(int n){
    if (n <= 0){
        return 1;
    } 
    return n * fatorar(n - 1);
}