


 #include <stdio.h>
 #include <time.h>
 #include <stdlib.h>
 #include <math.h>

  int dim;
   int dimensione;
   int scelta_secondo_vettore;
   int scelta_di_rifare = 0;









 void caricamento(int vettore[],int dim){
    for(int i=0; i<dim;i++){
        printf("Inserisci numeri");
        scanf("%d",&vettore[i]);
    }
}












int somma_vettore(int vettore[],int dim){
    int somma = 0;
    for(int i=0;i<dim;i++){
     somma = somma + vettore[i];
    }

    return somma;
}




void stampa_copia_vettore(int vettore_secondario_da_riempire[],int dim,int vettore[]){
    


    printf("----------------Primo Vettore---------------------\n");

    printf("\n");
    printf("\n");

    for(int i=0;i<dim;i++){
        printf("vettore[%d] = %d \n",i, vettore[i]);
    }


    printf("\n");
    printf("\n");



    printf("----------------Secondo Vettore---------------------\n");

      printf("\n");

    for(int i=0;i<dim;i++){
        printf("vettore[%d] = %d \n",i, vettore_secondario_da_riempire[i]);
    }


    

 

       

}

void stampa_secondo_vettore(int vettore_secondario_da_riempire[],int dim){
     for(int i=0;i<dim;i++){
        printf("vettore[%d] = %d \n",i, vettore_secondario_da_riempire[i]);
    }
}










void ricerca(int vettore[],int dim,int dato_da_cercare){

    int i = 0;

    while ((vettore[i]!=dato_da_cercare)&&(i<dim))
    i++;

 
if (vettore[i]==dato_da_cercare)
printf("\nValore %d presente in posizione %d\n", dato_da_cercare, i);
else 
 printf("\nValore %d assente\n", dato_da_cercare);



}



int ricerca_per_scambio(int vettore[],int dim,int nuovo_elemento){
     int pos_elemento;
    int i = 0;

    

    for ( i = 0; i < dim; i++)
    {
        if(vettore[i]==nuovo_elemento){
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
    for(int i = 0;i<dim-1;i++){
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
        printf("posizione [%d]  = %d ",i, vettore[i]);
        printf("\n");
        printf("\n");
    }
    
}


void pari(int vettore[],int dim){
    for(int i=0;i<dim;i++){
        if(vettore[i]%2==0){
    
            printf("l'elemento in posizione %d e pari!\n",i);
        }
        else{
            printf("l'elemento in posizione %d e dispari!\n",i);
        }
    }
}

void ruota_a_sinistra_il_vettore(int vettore[],int dim)
{
    int temp = vettore[0];


for(int i=0;i<dim-1;i++){
    vettore[i] = vettore[i+1];
}
vettore[dim-1] = temp;

    
}

void ruota_vettore_a_destra(int vettore[],int dim){
    int temp = vettore[dim-1];
for(int i=dim-1;i>0;i--){
    vettore[i] = vettore[i-1];
}
vettore[0] = temp;

}





void sostituisci_elemento(int vettore[],int dim){

    int valore_da_Posizionare,posizione_di_elemento_da_sostituire,nuovo_elemento;
    int scelta = 0,dim1;
    int var_temp;

    printf("------------VETTORE-----------\n");

    stampa(vettore,dim);


    printf("\n");

    printf("\n");


   printf("Inserisci l'elemento da sostituire\n");
   scanf("%d",&nuovo_elemento);

     int i = 0;

    while ((vettore[i]!=nuovo_elemento)&&(i<dim))
    i++;


   if(vettore[i]==nuovo_elemento){
   
   posizione_di_elemento_da_sostituire = ricerca_per_scambio(vettore,dim,nuovo_elemento);

   printf("Inserisci il valore da sostituire");
   scanf("%d",&valore_da_Posizionare);


    var_temp = posizione_di_elemento_da_sostituire;
    dim1 = posizione_di_elemento_da_sostituire;
    

   for(int i=0; i<=dim1; i++){
    

    vettore[dim1] = valore_da_Posizionare;

   }


   


    }
    else{
        printf("\n");
        printf("elemento non trovato");
        printf("\n");
    }
   








    

}


void carica_elementi_a_caso(int vettore[], int dim){

srand(time(0)); 

	for(int i = 0; i < dim; i++){
	   vettore[i]=1+rand()%100; //numeri casuali tra 1 e 100
	   
   	}

    stampa(vettore,dim);

}

void carica_elementi_a_caso_negativi(int vettore[], int dim){

srand(time(0)); 

	for(int i = 0; i < dim; i++){
	   vettore[i]=-100+rand()%100; //numeri casuali tra 1 e 100
	   
   	}

    stampa(vettore,dim);

}


int conta_elementi_presenti(int vettore[],int dim,int valore_da_controllare){
    int contatore_volte_valore = 0;
    if(vettore!=NULL){
    for(int i=0;i<dim;i++){
        if(vettore[i]==valore_da_controllare){
            contatore_volte_valore=contatore_volte_valore + 1;
        }
    }
    }
    else{
        printf("Array vuoto!");
    }
    return contatore_volte_valore;
}


void numeri_positivi_negativi(int vettore[],int dim){   //qui
    for(int i=0;i<dim;i++){
        if(vettore[i]<0){
            vettore[i] = abs(vettore[i]);
        }

    }
        
    
    stampa(vettore,dim);
}



void maggiore(int vettore[],int dim){
    int MAX = 0;
    for(int i=0;i<dim;i++){
        if (i==0) {
             MAX=vettore[i]; 
             } 

             if(vettore[i]>MAX) 
             MAX=vettore[i]; 
             
    }
    stampa(vettore,dim);
    printf("Il massimo elemento del vettore ?? pari a: %d",MAX);
    printf("\n");
     printf("\n");

    
}


void minore(int vettore[],int dim){
      int MIN = 0;
    for(int i=0;i<dim;i++){
        if (i==0) {
             MIN=vettore[i]; 
             } 

             if(vettore[i]<MIN) 
             MIN=vettore[i]; 
             
    }
     stampa(vettore,dim);
    printf("L'elemento pi?? piccolo del vettore ?? pari a: %d",MIN);
    printf("\n");
     printf("\n");

   

}




void unisci_i_vettori(int vettore[],int vettore_secondario_da_riempire[],int dim,int dimensione){


int j=0,i=0;
   dimensione = dim * 2;
    int vettore_unione[dimensione];


    for(int i = 0; i < dim; i++){
        vettore_unione[j] = vettore[i];
        j = j+1;
    }
    
    for(int i = 0; i < dim; i++){
        vettore_unione[j] = vettore_secondario_da_riempire[i];
        j = j+1;
    }

    printf("\n");
    printf("------------------------------VETTORE UNITO 1 E 2 Vettore--------------------------\n");

    for(int i=0;i<dimensione;i++){
  printf("vettore[%d] = %d \n",i, vettore_unione[i]);
  
}

}



void carica_secondo_vettore_1(int vettore_secondario_da_riempire[],int dim){
    for(int i=0; i<dim;i++){
        printf("Inserisci numeri");
        scanf("%d",&vettore_secondario_da_riempire[i]);
        printf("\n");
    }
}

void caricamento_secondo_vettore(int vettore[],int vettore_secondario_da_riempire[],int dim){
    int scelta = 0;
    carica_secondo_vettore_1(vettore_secondario_da_riempire,dim);
    unisci_i_vettori(vettore,vettore_secondario_da_riempire,dim,dimensione);


}







void copia_vettore(int vettore[],int vettore_secondario_da_riempire[],int dim){

     
    

    for(int i=0;i<dim;i++){
       
    vettore_secondario_da_riempire[i] = vettore[i];
    }
    stampa_copia_vettore(vettore_secondario_da_riempire,dim,vettore);


}









int main(){

  
//agguingere cambia memoria tramite richiamo main();
   
   int scelta_dal_menu;
   int dato_da_cercare,numero_posizione = 0,media_del_vettore;
   int valore_da_controllare,valore_controllato,variabile_somma,numero;
   int numero1;
   int media_2 = 0;
  


   printf("inserisci dimensione vettore");
   scanf("%d",&dim);
   int vettore[dim];
  int vettore_copia[dimensione];
     int vettore_secondario_da_riempire[dim];
 

   
  


    

      
        


do{

        printf("\n");

     printf("****************************************************************\n");
     printf("--------------------------MENU SCELTA---------------------------\n");
       printf("\n");


     printf("1) Crea/Carica il vettore\n");
     printf("2) Ricerca nel vettore\n");
     printf("3) Svuota il vettore\n");
     printf("4) Ottieni media\n");
     printf("5) Stampa Vettore\n");
     printf("6) Ordina vettore(Crescente)\n");
     printf("7) Ordina vettore(Decrescente)\n");
     printf("8) Sostituisci elemento\n");
     printf("9) Carica vettore con numeri casuali\n");
     printf("10) Controlla caratteri ripetuti\n");
     printf("11) Copia il vettore e istanzia il secondo vettore\n");
     printf("12) Somma elementi del vettore\n");
     printf("13) Sposta gli elementi del vettore(Verso Sinistra)\n");
     printf("14) Trasforma i numeri del vettore in positivo\n");
     printf("15) Carica vettore con numeri negativi(Random)\n");
     printf("16) Sposta gli elementi del vettore(Verso Destra)\n");
     printf("17) Visualizza elemento piu grande del vettore\n");
     printf("18) Visualizza elemento piu piccolo del vettore\n");
     printf("19) Visualizza valori pari e dispari\n");
     printf("20) Unisci i vettori\n");
     printf("21) Gestisci il secondo vettore\n");
     printf("22) Stampa il secondo vettore\n");
     printf("23) Cambia dimensione\n");
     printf("333)Termina\n");

      printf("\n");

       printf("Scegli dal menu di sopra\n");
       scanf("%d",&scelta_dal_menu);

        printf("\n");


       switch (scelta_dal_menu)
       {
       case 1:
        caricamento(vettore,dim);
        break;
        case 2:
        printf("Inserisci elemento da ricercare");
        scanf("%d",&dato_da_cercare);                                   
        ricerca(vettore,dim,dato_da_cercare);
           printf("\n");
        
          

     break;

     case 3:
     svuota_vettore(vettore,dim);
     break;

   case 4:
   media_del_vettore = media(vettore,dim);

   printf("la media (Intera) del vettore e %d",media_del_vettore);

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

case 8:
sostituisci_elemento(vettore,dim);
break;
case 9:
carica_elementi_a_caso(vettore,dim);
break;
case 10:
printf("Inserisci il valore da controllare");
scanf("%d",&valore_da_controllare);
valore_controllato = conta_elementi_presenti(vettore,dim,valore_da_controllare);
printf("l'elemento %d e ripetuto nell'array %d volte",valore_da_controllare,valore_controllato);
break;
case 11:
copia_vettore(vettore,vettore_secondario_da_riempire,dim);
break;
case 12:
variabile_somma = somma_vettore(vettore,dim);
printf("la somma degli elementi del vettore e pari a: %d",variabile_somma);
printf("\n");
break;
case 13:
printf("Di quante posizioni si intende girare il vettore");
scanf("%d",&numero);
 for (int i = 0; i < numero ; i++)
    {
        ruota_a_sinistra_il_vettore(vettore,dim);
    }
    stampa(vettore,dim);
    break;
    case 14:
    numeri_positivi_negativi(vettore,dim); // qui
    break;
    case 15:
    carica_elementi_a_caso_negativi(vettore,dim);
    break;
    case 16:
    printf("Di quante posizioni si intende girare il vettore");
    scanf("%d",&numero1);
    for (int i = 0; i < numero1 ; i++)
    {
        ruota_vettore_a_destra(vettore,dim);
    }
     stampa(vettore,dim);
    
    break;
    case 17:
    maggiore(vettore,dim);
    break;
    case 18:
    minore(vettore,dim);
    break;
    case 19:
    pari(vettore,dim);
    break;
    case 20:
   caricamento_secondo_vettore(vettore,vettore_secondario_da_riempire,dim);
   //se il vettore_secondarioe gia pieno procedere direttamente con l'unione dei 2 vettori

    break;

    case 21:

   

     do{


     printf("1) Carica vettore con dei numeri\n");
     printf("2) Riempi il vettore con numeri casuali\n");
     printf("3) Visualizza elemento piu grande del vettore\n");
     printf("4) Visualizza elemento piu piccolo del vettore\n");
     printf("5) Visualizza valori pari e dispari\n");
     printf("6) Svuota il vettore\n");
     printf("7) Ottieni media\n");
     printf("8) Stampa Vettore\n");
     printf("9) Ordina vettore(Crescente)\n");
     printf("10) Ordina vettore(Decrescente)\n");
     printf("300) Esci e istanzia di nuovo il vettore\n");

     printf("Scegli");
     scanf("%d",&scelta_secondo_vettore);

     switch (scelta_secondo_vettore)
     { //da qui tutto con il secondo vettore
     case 1:
     //carica_secondo_vettore_1(vettore_secondario_da_riempire,dim);
     caricamento(vettore_secondario_da_riempire,dim);

        break;
        case 2:

        carica_elementi_a_caso(vettore_secondario_da_riempire,dim);

       stampa_secondo_vettore(vettore_secondario_da_riempire,dim);

       break;

       case 3:
    
          maggiore(vettore_secondario_da_riempire,dim);

          break;

          case 4:

          minore(vettore_secondario_da_riempire,dim);

          break;

          case 5:
          pari(vettore_secondario_da_riempire,dim);

          break;

          case 6:
          svuota_vettore(vettore_secondario_da_riempire,dim);
          break;

          case 7:
          media_2 = media(vettore_secondario_da_riempire,dim);

          printf("la media del secondo vettore e pari a: %d\n",media_2);

          break;

          case 8:

          stampa_secondo_vettore(vettore_secondario_da_riempire,dim);

          break;

          case 9:

          ordina(vettore_secondario_da_riempire,dim);
          stampa_secondo_vettore(vettore_secondario_da_riempire,dim);

          break;

          case 10:

          ordina_reverse(vettore_secondario_da_riempire,dim);
          stampa_secondo_vettore(vettore_secondario_da_riempire,dim);

          break;

          case 300:
          main();
          break;


     default:
     printf("errore nella scelta\n");
        break;
     }
     
     }
     while (scelta_di_rifare == 0);

     case 22:
     stampa(vettore_secondario_da_riempire,dim);
     break;

     case 23:
     main();
     break;
     
     
    case 333:
     exit(0);
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