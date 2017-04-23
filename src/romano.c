#include "romano.h" /*!Inclusão da biblioteca romano.h.*/

int roman_to_arab(const char nro_rom[30]){  /*!<a roman_to_arab function
                                                Recebe um número Romano e converte para Arábico
                                            */    

    int aux[30]; /*!< Variável auxiliar para fazer a conversão.*/
    int tam; /*!< Variável para armazenar o tamanho da string.*/
    int i;/*!< Variável utilizar como contador.*/
    int j;/*!< Variável utilizar como contador.*/                                            
    tam = strlen(nro_rom);
    
    for(i=0; i<tam; i++){
        if(nro_rom[i] == 'I'){
            aux[i] = 1;
        }else if(nro_rom[i] == 'V'){
            aux[i] = 5;
        }else if (nro_rom[i] == 'X'){
            aux[i] = 10;
        }else if (nro_rom[i] == 'L'){
            aux[i] = 50;
        }else if (nro_rom[i] == 'C'){
            aux[i] = 100;
        }else if (nro_rom[i] == 'D'){
            aux[i] = 500;
        }else if (nro_rom[i] == 'M'){
            aux[i] = 1000;             
        }else{
            return(-1);   /*!Caso nro 1 se não for letra maiúscula ou se for diferente de "I,V,X,L,C,D,M"*/
        }
    }

    j = aux[tam-1];
    for(i=tam-1; i>0; i--){
        if(aux[i]>aux[i-1]){
            j = j-aux[i-1];
        }else if(aux[i]<aux[i-1] || aux[i]==aux[i-1]){
            j = aux[i-1] + j;
        }
    }


    return(j); /*!Retorna o valor convertido para algarismo Arábico.*/
}