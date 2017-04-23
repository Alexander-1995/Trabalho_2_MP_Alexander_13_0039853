#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp" /*!Inclusão da biblioteca catch.hpp para poder realizar os testes.*/
#include "romano.h"/*!Inclusão da biblioteca romano.h.*/


TEST_CASE( "Conversão Romano para Arábico números válidos", "[roman_to_arab]" ) {/*Conjunto de teste de números VÁLIDOS*/
	
    REQUIRE( roman_to_arab((char*)"I") == 1 );        		 	 /*!Teste onde a entrada I deve ser igual a saída 1*/
    REQUIRE( roman_to_arab((char*)"V") == 5 );        		 	 /*!Teste onde a entrada V deve ser igual a saída 5*/
    REQUIRE( roman_to_arab((char*)"X") == 10 );       		 	 /*!Teste onde a entrada X deve ser igual a saída 10*/
    REQUIRE( roman_to_arab((char*)"L") == 50 );       		 	 /*!Teste onde a entrada L deve ser igual a saída 50*/
    REQUIRE( roman_to_arab((char*)"C") == 100 );      		 	 /*!Teste onde a entrada C deve ser igual a saída 100*/
    REQUIRE( roman_to_arab((char*)"D") == 500 );      		 	 /*!Teste onde a entrada D deve ser igual a saída 500*/
    REQUIRE( roman_to_arab((char*)"M") == 1000 );     		 	 /*!Teste onde a entrada M deve ser igual a saída 1000*/
    REQUIRE( roman_to_arab((char*)"IV") == 4 );       		 	 /*!Teste onde a entrada IV deve ser igual a saída 4*/
    REQUIRE( roman_to_arab((char*)"CCXC") == 290 );   		 	 /*!Teste onde a entrada CCXC deve ser igual a saída 290*/
    REQUIRE( roman_to_arab((char*)"LXX") == 70 );     		 	 /*!Teste onde a entrada LXX deve ser igual a saída 70*/
    REQUIRE( roman_to_arab((char*)"IX") == 9 );       		 	 /*!Teste onde a entrada IX deve ser igual a saída 9*/
    REQUIRE( roman_to_arab((char*)"IM") == 999 );     		 	 /*!Teste onde a entrada IM deve ser igual a saída 999*/
    REQUIRE( roman_to_arab((char*)"MXVI") == 1016 );  		 	 /*!Teste onde a entrada MXVI deve ser igual a saída 1016*/
    REQUIRE( roman_to_arab((char*)"MCCCXLIII") == 1343 );   	 /*!Teste onde a entrada MCCCXLIII deve ser igual a saída 1343*/
    REQUIRE( roman_to_arab((char*)"MVM") == 1995 ); 		 	 /*!Teste onde a entrada MVM deve ser igual a saída 1995*/
	REQUIRE( roman_to_arab((char*)"MCDLXXXVIII") == 1488 ); 	 /*!Teste onde a entrada MCDLXXXVIII deve ser igual a saída 1488*/
	REQUIRE( roman_to_arab((char*)"MDCCLXXXIV") == 1784 );  	 /*!Teste onde a entrada MDCCLXXXIV deve ser igual a saída 1784*/
	REQUIRE( roman_to_arab((char*)"MCMXXXIII") == 1933 );   	 /*!Teste onde a entrada MCMXXXIII deve ser igual a saída 1933*/
	REQUIRE( roman_to_arab((char*)"MMCCCXXXIV") == 2334 );  	 /*!Teste onde a entrada MMCCCXXXIV deve ser igual a saída 2334*/
	REQUIRE( roman_to_arab((char*)"MMDLXXXVII") == 2587 );  	 /*!Teste onde a entrada MMDLXXXVII deve ser igual a saída 2587*/
	REQUIRE( roman_to_arab((char*)"MMDCCCLXXXVIII") == 2888 );   /*!Teste onde a entrada MMDCCCLXXXVIII deve ser igual a saída 2888*/

}

TEST_CASE("Conversão Romano para Arábico inválidos","[roman_to_arab]"){ /*Conjunto de teste de números INVÁLIDOS(todos devem retornar -1)*/
    REQUIRE( roman_to_arab((char*)"asfdn") == -1 );    /*!Testa entrada de uma string que não é um número romano*/

}