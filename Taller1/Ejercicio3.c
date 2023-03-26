#include <stdio.h>

int main() {
    int read_cl,read_prod;
    int price,total,clients,prods,id,winrs,gcard,threepc,fivepc,max_total,idgc,c,p,cgiftcard;
    char res_cl,res_prod,tag;
    float pc_winrs;
    
    read_cl=1;
    clients=0;
    gcard=0;
    threepc=0;
    fivepc=0;
    winrs=0;
    max_total=0;
    c=1;
    printf ("Descuentos del 50%\n");
    do {
        prods=0;
        p=1;
        total=0;
        read_prod=1;
        printf ("\n.-Ingrese cédula de cliente %i:\n",c);
        scanf("%i",&id);
        while(read_prod==1) {
            printf ("\n.-Ingrese etiqueta del producto %i:\n",p);
            scanf(" %c",&tag);
            if((tag=='a')||(tag=='m')) {
                printf ("\n.-Ingrese precio de producto %i:\n",p);
                scanf ("%i",&price);
                total=total+price;
            } else {
                printf ("\n.-Etiq. no válida para el concurso.\n");
            }
            printf ("\n.-Total en $: %i\n",total);
            prods=prods+1;
            p=p+1;
            if(prods<=3) {
                printf("\n.-¿Otro producto?(y-n)\n");
                scanf (" %c",&res_prod);
            } else {
                read_prod=0;
            }
            if (res_prod!='y') {
                read_prod=0;
            }
        }
        if ((total>=1000)&&(total<=5000)&&(prods<=3)) {
            winrs=winrs+1;
            if ((id%2)==0) {
                fivepc=fivepc+1;
            } else {
                threepc=threepc+1;
            }
            if (total>max_total) {
                max_total=total;
                idgc=id;
                cgiftcard=c;
            }
        } else {
            printf ("\n.-Cliente no elegible para el descuento.\n");
        }
        printf ("\n.-¿Otro cliente? (y-n)\n");
        scanf (" %c",&res_cl);
        if (res_cl!='y') {
            read_cl=0;
        }
        clients=clients+1;
        c=c+1;
    } while (read_cl==1);
    pc_winrs=(winrs*100)/clients;
    printf ("\n\n\nRESULTADOS:\n\n-Porcentaje de ganadores: %f%%\n\n-Personas con 5%% extra: %i\n\n-Personas con 3%% extra: %i\n\n.-Ganador de la gift card: cliente %i, C.I#: %i\n",pc_winrs,fivepc,threepc,cgiftcard,idgc);
    
    return (0);
    
}
