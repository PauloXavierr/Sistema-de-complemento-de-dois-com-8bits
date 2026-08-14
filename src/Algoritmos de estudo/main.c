  /*
    Nesse script é feito um estudo de limite da variavel int_8, explorando os seus limites e fazendo uma conversão de valores armazenados 
    em um buffer tipo char para para um valor inteiro, criando uma regra com fgets para
    */
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <stdint.h> //Biblioteca de numeros inteiros
    #include <inttypes.h> //Biblioteca de formatação e exibição de numeros inteiros
  
    int main(){
        
        char buffer[32];
        int vetor[8];
        bool validador = true;
        int8_t numero, registrador = 7, tmp;
            
        printf("\nDigite um valor entre -128 ate 127:\n");
        //fgets(onde vai ser salvo o valor, o seu tamanho [32], origin da bsuca do valor como teclado)
        if(fgets(buffer, sizeof(buffer), stdin) != NULL){
            long valor = strtol (buffer, NULL, 10);
            if(valor>=INT8_MIN && valor<=INT8_MAX){
                numero = (int8_t)valor;
                printf("Numero armazenado em int8_t: %" PRId8 "\n", numero);
                if (numero>=0) vetor[0] = 0;
                else {
                    vetor[0] = 1;
                    numero=numero*-1;
                }
            }
            else{
                printf("Erro: O valor informado esta fora do limite de 8 bits!\n");
                return(1);
            }
        }
        while (registrador>=1)
        {
            tmp = numero/2;
            printf("\nValor tmp %"PRId8 "\n",tmp);
             if(numero == 1 && validador == true) {
                vetor[registrador] = 1;
                validador = false;
                registrador--;  
            } 
            else if (numero%2 == 1)
            {
                vetor[registrador] = 1;
            }
            else{
                vetor[registrador] = 0;
            }
              
             registrador--; 
            numero = tmp;
        }
        for (int8_t i= 0; i < 8; i++)
        {
            printf("|%d|", vetor[i]);
        }
        printf("\n");
    return (0);
    }