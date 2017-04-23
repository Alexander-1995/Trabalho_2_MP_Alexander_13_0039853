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

    /*!Impedir as letras "V,L,D" duplicadas, pois podem ser representadas por "X,C,M" respectivamente*/
    
    for(i=0; i<tam; i++){/*!Caso nro 2 para impedir VV*/  
        if (nro_rom[i] == 'V' & nro_rom[i+1] == 'V'){ 
            return(-1);
            }
    }

    for(i=0; i<tam; i++){/*!Caso nro 3 para impedir LL*/ 
        if (nro_rom[i] == 'L' & nro_rom[i+1] == 'L'){  
            return(-1);
            }
    }           

    for(i=0; i<tam; i++){/*!Caso nro 4 para impedir DD*/
        if (nro_rom[i] == 'D' & nro_rom[i+1] == 'D'){   
            return(-1);
            }
    }   

    /*!Caso para impedir que a letra seja representada 4 vezes seguidas, por exemplo: "IIII","XXXX","CCCC","MMMM"*/

    for(i=0; i<tam; i++){ /*!Caso nro 5 para impedir IIII*/
        if (nro_rom[i] == 'I' & nro_rom[i+1] == 'I' & nro_rom[i+2] == 'I' & nro_rom[i+3] == 'I'){
            return(-1);
            }
    }
   
    for(i=0; i<tam; i++){ /*!Caso nro 6 para impedir XXXX*/
        if (nro_rom[i] == 'X' & nro_rom[i+1] == 'X' & nro_rom[i+2] == 'X' & nro_rom[i+3] == 'X'){  
            return(-1);
            }
    }

    for(i=0; i<tam; i++){/*!Caso nro 7 para impedir CCCC*/
        if (nro_rom[i] == 'C' & nro_rom[i+1] == 'C' & nro_rom[i+2] == 'C' & nro_rom[i+3] == 'C'){
            return(-1);
            }
    }        

    for(i=0; i<tam; i++){  /*!Caso nro 8 para impedir MMMM*/
        if (nro_rom[i] == 'M' & nro_rom[i+1] == 'M' & nro_rom[i+2] == 'M' & nro_rom[i+3] == 'M'){
            return(-1);
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