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
   char op;   
   int8_t numero, registrador =7;
   do{
       while (numero<sizeof(int8_t)){

            printf("\nDigite um valor entre -128 ate 127:\n");
            //fgets(onde vai ser salvo o valor, o seu tamanho [32], origin da busca do valor como teclado)
            if(fgets(buffer, sizeof(buffer), stdin) != NULL){
                long valor = strtol (buffer, NULL, 10);
                if(valor>=INT8_MIN && valor<=INT8_MAX){
                    numero = (int8_t)valor;
                    printf("Numero armazenado em int8_t: %" PRId8 "\n", numero);
                    if (numero>=0) vetor[0] = 0;
                    else {
                        vetor[0] = 1;
                        numero=numero*(-1);
                    }
                }
                else{
                    printf("Erro: O valor informado esta fora do limite de 8 bits!\n");
                }
            }
        }
        while (numero>0){
            vetor[registrador] = numero%2;
            registrador--;
            numero=numero/2;
        }
        for (int8_t i= 0; i < 8; i++)
        {
            printf("|%d|", vetor[i]);
            vetor[i] = 0;
            registrador = 7;
        }

        printf("\n");   
        
        inicio:
        printf("Realizar uma nova convercao?\n[s] sim\n[n] nao\n");
        scanf("%c", &op);
        switch (op)
        {
        case 's':
            system("clear");
            break;
        case 'n':
            printf("Sistema encerrado\n");
            break;
        default:
            system("clear");
            goto inicio;
            printf("Opcao invalida\n");
        }
    }while (op != 'n');
    
    
    return (0);
    }