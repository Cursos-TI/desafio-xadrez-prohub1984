#include <stdio.h>

int main(){

    int T = 0, B = 0, D = 0; // T = torre - B = bispo - D = dama. nominal as variaveis
        
    // movimento da torre (T) 5 casas a direita
        do
        {
            printf("direita\n"); // imprime a diracao do movimento
            T++;
        } while (T < 5);

    // movimento do bispo (B) 5 casas para cima, direita

          while (B < 5)
        {
            printf("para cima, direita\n"); // imprime a direcao do movimento
            B++;
        }
    // movimento da dama (D) 8 casas para aesquerda
    
          for (int D = 0; D < 8; D++)
          {
            printf("esquerda\n"); // imprime a direcao do movimento
          }

          
            
        }