#include <stdio.h>

int main() {
    int x,y,i,divisores;
    divisores = 0;
    printf ("ingrese el primer número\n");
    scanf ("%i",&x);
    printf ("ingrese el segundo número\n");
    scanf ("%i",&y);
    for (i=1;i<x;i++){
        if ((x%i)==0){
           divisores=divisores+i;
           printf("%i\n",i);
        }
    }
    printf("divisores sumados:%i\n",divisores);
    if(divisores==y){
        printf ("son amigos");
    } else{
        printf ("no son amigos");
    }
    

    return 0;
}