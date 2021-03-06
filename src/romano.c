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

    /*!Impedir casos especiais*/

    for(i=0; i<tam; i++){ /*!Caso nro 9 para impedir IIV e IIIV*/
        if (nro_rom[i] == 'I' & nro_rom[i+1] == 'I' & nro_rom[i+2] == 'I' & nro_rom[i+3] == 'V' || nro_rom[i] == 'I' & nro_rom[i+1] == 'I' & nro_rom[i+2] == 'V'){
            return(-1);
            }
    }    

    for(i=0; i<tam; i++){ /*!Caso nro 10 para impedir IIX e IIIX*/
        if (nro_rom[i] == 'I' & nro_rom[i+1] == 'I' & nro_rom[i+2] == 'I' & nro_rom[i+3] == 'X' || nro_rom[i] == 'I' & nro_rom[i+1] == 'I' & nro_rom[i+2] == 'X'){
            return(-1);
            }
    }

       for(i=0; i<tam; i++){/*!Caso nro 11 para impedir IIL e IIIL*/
        if (nro_rom[i] == 'I' & nro_rom[i+1] == 'I' & nro_rom[i+2] == 'I' & nro_rom[i+3] == 'L' || nro_rom[i] == 'I' & nro_rom[i+1] == 'I' & nro_rom[i+2] == 'L'){
            return(-1);
            }
    }    

    for(i=0; i<tam; i++){/*!Caso nro 12 para impedir IIC e IIIC*/
        if (nro_rom[i] == 'I' & nro_rom[i+1] == 'I' & nro_rom[i+2] == 'I' & nro_rom[i+3] == 'C' || nro_rom[i] == 'I' & nro_rom[i+1] == 'I' & nro_rom[i+2] == 'C'){
            return(-1);
            }
    }        

    for(i=0; i<tam; i++){/*!Caso nro 13 para impedir IID e IIID*/
        if (nro_rom[i] == 'I' & nro_rom[i+1] == 'I' & nro_rom[i+2] == 'I' & nro_rom[i+3] == 'D' || nro_rom[i] == 'I' & nro_rom[i+1] == 'I' & nro_rom[i+2] == 'D'){
            return(-1);
            }
    }    

    for(i=0; i<tam; i++){/*!Caso nro 14 para impedir IIM e IIIM*/
        if (nro_rom[i] == 'I' & nro_rom[i+1] == 'I' & nro_rom[i+2] == 'I' & nro_rom[i+3] == 'M' || nro_rom[i] == 'I' & nro_rom[i+1] == 'I' & nro_rom[i+2] == 'M'){
            return(-1);
            }
    }    


    for(i=0; i<tam; i++){  /*!Caso nro 15 para impedir VX*/
        if (nro_rom[i] == 'V' & nro_rom[i+1] == 'X' ){  
            return(-1);
            }
    }                 

    for(i=0; i<tam; i++){/*!Caso nro 16 para impedir VIX, VIL, VIC, VID, VIM*/
        if (nro_rom[i] == 'V' & nro_rom[i+1] == 'I' & nro_rom[i+2] == 'X' || nro_rom[i] == 'V' & nro_rom[i+1] == 'I' & nro_rom[i+2] == 'L' || nro_rom[i] == 'V' & nro_rom[i+1] == 'I' & nro_rom[i+2] == 'C' || nro_rom[i] == 'V' & nro_rom[i+1] == 'I' & nro_rom[i+2] == 'D' || nro_rom[i] == 'V' & nro_rom[i+1] == 'I' & nro_rom[i+2] == 'M'){ 
            return(-1);
            }
    }        

    for(i=0; i<tam; i++){/*!Caso nro 17 para impedir XXL e XXXL*/
        if (nro_rom[i] == 'X' & nro_rom[i+1] == 'X' & nro_rom[i+2] == 'X' & nro_rom[i+3] == 'L' || nro_rom[i] == 'X' & nro_rom[i+1] == 'X' & nro_rom[i+2] == 'L'){
            return(-1);
            }
    }    

    for(i=0; i<tam; i++){/*!Caso nro 18 para impedir XXC e XXXC*/
        if (nro_rom[i] == 'X' & nro_rom[i+1] == 'X' & nro_rom[i+2] == 'X' & nro_rom[i+3] == 'C' || nro_rom[i] == 'X' & nro_rom[i+1] == 'X' & nro_rom[i+2] == 'C'){
            return(-1);
            }
    }        

    for(i=0; i<tam; i++){/*1Caso nro 19 para impedir XXD e XXXD*/
        if (nro_rom[i] == 'X' & nro_rom[i+1] == 'X' & nro_rom[i+2] == 'X' & nro_rom[i+3] == 'D' || nro_rom[i] == 'X' & nro_rom[i+1] == 'X' & nro_rom[i+2] == 'D'){
            return(-1);
            }
    }    

    for(i=0; i<tam; i++){/*!Caso nro 20 para impedir XXM e XXXM*/
        if (nro_rom[i] == 'X' & nro_rom[i+1] == 'X' & nro_rom[i+2] == 'X' & nro_rom[i+3] == 'M' || nro_rom[i] == 'X' & nro_rom[i+1] == 'X' & nro_rom[i+2] == 'M'){
            return(-1);
            }
    }   

    for(i=0; i<tam; i++){/*!Caso nro 21 para impedir CCD e CCCD*/
        if (nro_rom[i] == 'C' & nro_rom[i+1] == 'C' & nro_rom[i+2] == 'C' & nro_rom[i+3] == 'D' || nro_rom[i] == 'C' & nro_rom[i+1] == 'C' & nro_rom[i+2] == 'D'){
            return(-1);
            }
    }   

    for(i=0; i<tam; i++){/*!Caso nro 22 para impedir CCM e CCCM*/
        if (nro_rom[i] == 'C' & nro_rom[i+1] == 'C' & nro_rom[i+2] == 'C' & nro_rom[i+3] == 'M' || nro_rom[i] == 'C' & nro_rom[i+1] == 'C' & nro_rom[i+2] == 'M'){
            return(-1);
            }
    }   

    for(i=0; i<tam; i++){ /*!Caso nro 23 para impedir XLX,XCX,XDX,XMX*/
        if (nro_rom[i] == 'X' & nro_rom[i+1] == 'L' & nro_rom[i+2] == 'X' || nro_rom[i] == 'X' & nro_rom[i+1] == 'C' & nro_rom[i+2] == 'X' || nro_rom[i] == 'X' & nro_rom[i+1] == 'D' & nro_rom[i+2] == 'X' || nro_rom[i] == 'X' & nro_rom[i+1] == 'M' & nro_rom[i+2] == 'X'){ 
            return(-1);
            }
    }

    for(i=0; i<tam; i++){ /*!Caso nro 24 para impedir LCL,LDL,LML*/
        if (nro_rom[i] == 'L' & nro_rom[i+1] == 'C' & nro_rom[i+2] == 'L' || nro_rom[i] == 'L' & nro_rom[i+1] == 'D' & nro_rom[i+2] == 'L' || nro_rom[i] == 'L' & nro_rom[i+1] == 'M' & nro_rom[i+2] == 'L'){ 
            return(-1);
            }
    }      

    for(i=0; i<tam; i++){ /*!Caso nro 25 para impedir CDC,CMC*/
        if (nro_rom[i] == 'C' & nro_rom[i+1] == 'D' & nro_rom[i+2] == 'C' || nro_rom[i] == 'C' & nro_rom[i+1] == 'M' & nro_rom[i+2] == 'C'){ 
            return(-1);
            }
    } 

    for(i=0; i<tam; i++){ /*!Caso nro 26 para impedir DMD*/
        if (nro_rom[i] == 'D' & nro_rom[i+1] == 'M' & nro_rom[i+2] == 'D'){ 
            return(-1);
            }
    }                    

    for(i=0; i<tam; i++){/*!Caso nro 27 para impedir XXIXX e CCICC*/
        if (nro_rom[i] == 'X' & nro_rom[i+1] == 'X' & nro_rom[i+2] == 'I' & nro_rom[i+3] == 'X' & nro_rom[i+4] == 'X'|| nro_rom[i] == 'C' & nro_rom[i+1] == 'C' & nro_rom[i+2] == 'I' & nro_rom[i+3] == 'C' & nro_rom[i+4] == 'C'){
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

    if(j>3000 || j<0){/*!Caso nro 28 se o número for maior que 3000, ou menor que 1, retorna -1, pois conforme a especificação, os números devem ir até 3000*/
        return(-1);
    }

    return(j); /*!Retorna o valor convertido para algarismo Arábico.*/
}