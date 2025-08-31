#include <stdio.h>

int main(){

    int T = 0, B = 0, D = 0, C = 0; // T = torre - B = bispo - D = dama - C = cavalo.  nominal as variaveis
    int movimento, passos; // variaveis para movimento do cavalo com entrada de usuario.
        
    // movimento da torre (T) 5 casas a direita

            printf("MOVIMENTO DA TORRE\n");
        do
        {
            printf("direita\n"); // imprime a diracao do movimento
            T++;
        } while (T < 5);

    // movimento do bispo (B) 5 casas para cima, direita

            printf("MOVIMENTO DO BISPO\n");

          while (B < 5)
        {

            printf("para cima, direita\n"); // imprime a direcao do movimento
            B++;
        }
    // movimento da dama (D) 8 casas para aesquerda

            printf("MOVIMENTO DA DAMA\n");
    
          for (int D = 0; D < 8; D++)
          {
            printf("esquerda\n"); // imprime a direcao do movimento
          }

    // movimento do cavalo (C) duas casa para cima e uma pra direita- cima, cima, direita.

    // entrada de usuario para movimento do cavalo 

            printf("digite o numero 1: "); // para andar uma casa a direita. condicao "while"
            scanf("%d", &movimento);

            printf("digite o numero 2: "); // para saltar  duas casas acima. condicao "for"
            scanf("%d",&passos);

            printf("MOVIMENTO DO CAVALO\n");

            while (movimento --){ // loop externo
                
               for (C = 0; C < 2; C++){ // loop interno
                
            printf("cima\n"); // print de loop interno, cima duas vezes 
            }

            printf("direita\n"); // print de loop externo, direita uma vez
                
            }
            
    
    
          
            
        }