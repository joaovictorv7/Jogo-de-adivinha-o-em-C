#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    
    
    srand(time(0));
    int chute;
    int numerosecreto = rand() % 100;
    int nivel;
    int totaltentativas;
    int pontos = 1000;
    int ganhou = 0;
    
    while(1) {
    printf("Nivel: (1) - FACIL (2) - MEDIO (3) - DIFICIL\n");
    scanf("%d",&nivel);
   
   switch(nivel) {
       
        case(1):
            totaltentativas = 20;
            break;
            
        case(2):
            totaltentativas = 15;
            break;
            
        case(3):
            totaltentativas = 6;
            break;
            
        default:
            printf("Erro, digite apenas um dos numeros!\n");
            continue;
       }
    break;
    
    }
    
    printf("Voce tem %d tentativas, boa sorte!\n", totaltentativas);
    
    for(int i = 1 ; i <=totaltentativas ; i++) {
        
        printf("Qual seu %oº chute?\n", i);
        scanf("%d", &chute);
        
        
        if (chute < 0) {
            printf("Erro, jogue apenas numeros positivos!\n");
            i--;
            continue;
        }
        
        int numerochutado;
        if (chute == numerochutado) {
            printf("Voce ja chutou esse número, tente outro.\n");
            i--;
            continue;
        }
            
        
        
        int acertou = chute == numerosecreto;
        
        
        if (acertou) {
            printf("Parabéns voce acertou!!\n");
            ganhou = 1;
            break;
        }
        
        else if (chute > numerosecreto) {
            printf("Errou, chutou maior!\n");
            double pontosperdidos = ((double)chute - (double)numerosecreto);
            pontos -= pontosperdidos;
        }
        
        else {
            printf("Errou, chutou menor!\n");
           double pontosperdidos = abs((double)chute - (double)numerosecreto);
            pontos -= pontosperdidos;
        }
        
        numerochutado = chute;
        
    }
    
    if (ganhou == 0) {
        printf("Sua chances acabaram, mais sorte na proxima vez!\n");
        printf("O numero era %d\n", numerosecreto);
    }
    
    printf("Pontos obtidos: %d\n",pontos);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
