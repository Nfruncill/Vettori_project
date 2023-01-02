#include <stdio.h>

#define _Bool var = 0



void caricamento(int vettore[],int dim){
    for(int i=0; i<dim;i++){
        printf("Inserisci numeri");
        scanf("%d",&vettore[i]);
    }
}








int ricerca(int vettore[],int dim,int dato_da_cercare){

    int pos_elemento;
    int i = 0;

    

    for ( i = 0; i < dim; i++)
    {
        if(vettore[i]==dato_da_cercare){
        pos_elemento = i;
        }


        

    }

    

    return pos_elemento;
    




     
}

void svuota_vettore(int vettore[],int dim){
    for (int i = 0; i < dim; i++)
    {
        vettore[i] = 0;
    }
    
}

void ordina(int vettore[], int dim){
    int app;
    for(int i = 0 ;i<dim-1;i++){
        for(int j=i+1; j<dim; j++)
        if(vettore[i]>vettore[j]){
            app = vettore[i];
            vettore[i] = vettore[j];
            vettore[j] = app;
        }
    }
}

void ordina_reverse(int vettore[], int dim){
    int app;
    for(int i = 0 ;i<dim-1;i++){
        for(int j=i+1; j<dim; j++)
        if(vettore[i]<vettore[j]){
            app = vettore[i];
            vettore[i] = vettore[j];
            vettore[j] = app;
        }
    }
}


int media(int vettore[],int dim){
    int somma_elementi_vettore = 0;
    for (int i = 0; i < dim; i++)
    {
        somma_elementi_vettore = somma_elementi_vettore + vettore[i];
    }

    return somma_elementi_vettore/dim;
    
}



void stampa(int vettore[],int dim){
    for (int i = 0; i < dim; i++)
    {
        printf("vettore[%d] = %d \n",i, vettore[i]);
    }
    
}

int main(){

   int dim;

   int scelta_di_rifare = 0;
   int scelta_dal_menu;
   int dato_da_cercare,numero_posizione,media_del_vettore;


    

        printf("Inserisci dimensione");
        scanf("%d",&dim);
        int vettore[dim];


do{

        printf("\n");

     printf("****************************************************************\n");
     printf("--------------------------MENU SCELTA---------------------------\n");
       printf("\n");


     printf("1)Crea/Carica il vettore\n");
     printf("2)Ricerca nel vettore\n");
     printf("3)Svuota il vettore\n");
     printf("4)Ottieni media\n");
     printf("5)Stampa Vettore\n");
     printf("6) Ordina vettore(Crescente)\n");
     printf("7) Ordina vettore(Decrescente)\n");
     printf("0)Termina\n");

      printf("\n");

       printf("Scegli dal menu di sopra\n");
       scanf("%d",&scelta_dal_menu);


       switch (scelta_dal_menu)
       {
       case 1:
        caricamento(vettore,dim);
        break;
        case 2:
        printf("Inserisci elemento da ricercare");
        scanf("%d",&dato_da_cercare);
        numero_posizione = ricerca(vettore,dim,dato_da_cercare);
        printf("il valore %d e stato trovato alla posizione n.%d\n",dato_da_cercare,numero_posizione);

     break;

     case 3:
     svuota_vettore(vettore,dim);
     break;

   case 4:
   media_del_vettore = media(vettore,dim);

   printf("la media del vettore e %d",media_del_vettore);

   break;
   case 5:

   stampa(vettore,dim);

   break;

   case 6:
   ordina(vettore,dim);
   break;

case 7:
ordina_reverse(vettore,dim);
break;

   case 0:
   out:
return 0;
break;

       default:
        printf("\n");
       printf("nessuna scelta valida!");
        printf("\n");
        break;
    }




    /* printf("RI-Eseguire il progrmma YES:1 || NO:0");
     scanf("%d",&scelta_di_rifare);*/

    

     }
     while (scelta_di_rifare==0);
     


   


    
    




}