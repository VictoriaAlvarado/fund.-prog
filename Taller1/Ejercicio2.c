#include <stdio.h>

int main(){
   int n, num, i, a, flip=0, cont=0;
    
    printf("ingrese cuantos numeros desea ingresar/n");
    do{
        scanf("%d",&n);
    }while(n<0);
    
    for (i=0; i<n;i++){
        printf("Ingrese un numero");
        scanf("d%",&num);
             while (num !=0){
                 a= num%10;
                 num= num/10;
                 flip= (flip *10)+a;
                     if (num==3 || num ==5){
                     cont++;
                     }
                 
             }
    }
    printf("\nE1 numero de veces que ingreso el 3 y el 5: %d\n", cont);
    
return 0;
}