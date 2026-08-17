#Sistema de complemento de dois com 8bits

#Introduçãols
	Nesse projeto sera realizado a construção de um sistema que converte um valor decimal na escala de -128 até 127, utilizando a linguagem de programação C, será abordado os conceitos de ponteiro para o registro da conversão do valor.


#Diário do projeto. 

##Dia 14/07/2026 Dia 1 Oficialmente.
-	Não Tenho registro sobre o início da ideia de construir esse projeto de apoio de estudo e para fixação de conteúdo, inspirado diretamente pela leitura do livro Estrutura de Dados Usando C (de Aaron Tenenbaum e Yedidyah Langsam). O objetivo principal é entender como os dados se organizam intimamente na memória do computador e como podemos manipular essa mesma memória para interagir com o mundo físico através de um microcontrolador. O desenvolvimento do projeto sera dividido em duas etapas: Na primeira etapa o algoritimo tera sua validação pelo ambiente host, e no seu segundo estágio o sistema sera aplicado em uma placa ESP32 que trabalhara com acioanamento de 8 leds e o seu valor tera o monitoramento de integridade da conversão através do terminal serial da IDE.   

## Dia 16/07/2026 - Dia 2 compreendendo  sistema + fluxograma. 
	
	Realizado um estudo para melhor compreensão do sistema de complemento de dois, definido que o bit de maior relevância é o bit BSM onde fica reservado o valor do sinal (+ ; -). Tive uma melhor compreensão sobre a conversão do valor binário negativo, o exemplo que vou espressar é de 4 bits para uma melhor compreensão didática.
	Exemplo:

	         inverte (not)	         +1           converte
	|1|111| -------------> |1|000| -----> |1|001| ---------> = -1 
        BSM|Valor binario 
           converte            -1           inverte (not)
        -1 ---------> |1|001| ----> |1|000| --------------> |1|111| {para obter o valor decimal para binário}
        
        O valor de BSM permanece 1 como ele é um bit reservado para sinal, não entra para a conversão.
         
uint8_t:
    “u” é de unsigned, ou seja, sem sinal
    “int” de inteiro
    “8_t” quantidade de bits

int8_t:

    a ausência do “u” indica tipo com sinal
    “int” de inteiro
    “8_t” quantidade de bits

Assim, quando escolhemos o tipo uint8_t podemos escrever valores de 0 a 255, já no tipo int8_t os valores vão de -128 a 127.  
        
       Hoje foi concluído o fluxograma do sistema, esse é um fluxograma inicial que pode apresentar erros de lógica na criação do sistema.
##Dia 11/08/2026 - Dia 3 estudando forma de trabalhar com variavel int_8
-	Criando um script para entender o funcionamento de uma variável int_8, para construção desse script foi utilizado as bibliotecas:
	 <inttypes.h> Biblioteca de formatação e exibição de numeros inteiros
	 <stdint.h> Bibliteca para se trabalhar com numeros inteiros.
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
