#include <stdio.h>

int main() {
    int num,num_inv,dig,cont3,cont5,aux;
    int read;
    char answ;
    
    read=1;
    cont3=0;
    cont5=0;
    printf ("Ejercicio 2:\n");
    do {
        num_inv=0;
        printf ("\nIngrese un número: \n");
        scanf (" %i",&num);
        aux=num;
        while (num>0) {
            dig=num%10;
            num_inv=(num_inv*10)+dig;
            num=num/10;
            if (dig==3) {
                cont3=cont3+1;
            } else if (dig==5) {
                cont5=cont5+1;
            }
        }

        if (aux>99) {
            printf ("\nNúmero invertido:%i\n",num_inv);
        }
        printf ("\n¿Leer otro número?(y-n)\n");
        scanf (" %c",&answ);
        if (answ!='y') {
            read=0;
        }
    } while (read==1);
    printf ("\nVeces que se ingresó el 5: %i\nVeces que se ingresó el 3: %i\n",cont5,cont3);
    return 0;
}
