    #include <stdio.h>
    #include <stdlib.h>
    #include <stdint.h> //Biblioteca de numeros inteiros
    #include <inttypes.h> //Biblioteca de formatação e exibição de numeros inteiros

    int main(){
        
        char buffer[32];
        int8_t numero;
    
        printf("\nDigite um valor entre -128 ate 127:\n");
        /*fgets(onde vai ser salvo o valor, o seu tamanho [32], origin da bsuca do valor como teclado)*/
        if(fgets(buffer, sizeof(buffer), stdin) != NULL){
            
            long valor = strtol (buffer, NULL, 10);
            /*
                long valor = strtol (buffer, NULL, 10);
                long valor -> cria uma variavel long para receber o valor convertido de uma string para inteiro: sendo uma zona de captura segura
                stdtol <string to long> Analisa o texto salvo dentro do buffer e converte para um número inteiro do tipo long 
                buffer texto a ser analisado
                NULL O local para salvar onde a conversão parou (como está NULL, você não está inspecionando se o usuário digitou letras).
                10 Define que a conversão deve usar a base decimal     

            */
           
            if(valor>=INT8_MIN && valor<=INT8_MAX){
                numero = (int8_t)valor;
                printf("Numero armazenado em int8_t: %" PRId8 "\n", numero);
            }
            else{
                printf("Erro: O valor informado esta fora do limite de 8 bits!\n");
            }
        }    

        return (0);

    }