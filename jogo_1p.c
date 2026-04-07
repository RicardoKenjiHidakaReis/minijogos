#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int escolha;
    char reniciar;

    do {
    printf("\nBEM-VINDO(A) AOS MINIJOGOS!\n");
    
    printf("1: Pergunta e Resposta\n");
    printf("2: Cobra na Caixa!\n");
    printf("3: Gousmas War\n");
    printf("4: Sair\n");

    printf("\nQual desses Minijogos desejas jogar?: ");
    scanf("%d", &escolha);
    
    
    //JOGO1
    if (escolha == 1){

    printf("\nNeste jogo, o computador apresenta uma pergunta com quatro alternativas e solicita que o usuario escolha a resposta correta. Apos a selecao, o sistema indicara se a resposta esta correta ou incorreta. Caso seja incorreta, sera exibida a resposta correta.\n");

    char alternativa;
    int pontos;
    
    do{
        
        pontos = 0;

        printf("\nQual desses Corpos Celestes deixou de ser considerado um planeta?\n");
        printf("A) Terra  B) Netuno  C) Plutao  D) Jupiter\n");
        printf("Escolha a alternativa: ");
        scanf(" %c", &alternativa);
            if (alternativa != 'c' && alternativa != 'C'){
                printf("Incorreto!\n");
                printf("A resposta correta era a alternativa (C)\n\n");
            }
            else {
                printf("Correto!\n\n");
                pontos++;
            }

        printf("Quantos titulos de Copa do Mundo o Brasil possue?\n");
        printf("A) 2  B) 5  C) 3  D) 6\n");
        printf("Escolha a alternativa: ");
        scanf(" %c", &alternativa);
            if (alternativa != 'b' && alternativa != 'B'){
                 printf("Incorreto!\n");
                printf("A resposta correta era a alternativa (B)\n\n");
            }
            else {
                printf("Correto!\n\n");
                pontos++;
            }

        printf("Qual a empresa mais valiosa do mundo?\n");
        printf("A) Nvidia  B) Apple  C) Google  D) Microsoft\n");
        printf("Escolha a alternativa: ");
        scanf(" %c", &alternativa);
            if (alternativa != 'a' && alternativa != 'A'){
                 printf("Incorreto!\n");
                printf("A resposta correta era a alternativa (A)\n\n");
            }
            else {
                printf("Correto!\n\n");
                pontos++;
            }

        printf("Qual a cor da Caixa Preta do aviao?\n");
        printf("A) Preta  B) Azul  C) Laranja  D) Cinza\n");
        printf("Escolha a alternativa: ");
        scanf("  %c", &alternativa);
            if (alternativa != 'c' && alternativa != 'C'){
                printf("Incorreto!\n");
                printf("A resposta correta era a alternativa (C)\n\n");
            }
            else {
                printf("Correto!\n\n");
                pontos++;
            }

        printf("Quem eh o melhor professor do Cesupa?\n");
        printf("A) Casseb  B) Alessandra  C) Girotto D) Beijamin\n");
        printf("Escolha a alternativa: ");
        scanf(" %c", &alternativa);
            if (alternativa != 'd' && alternativa != 'D'){
                printf("Incorreto!\n");
                printf("A resposta correta era a alternativa (D)\n\n");
            }
            else {
                printf("Correto!\n\n");
                pontos++;
            }

        printf("Voce fez %d/5 acertos!\n", pontos);
        printf("Deseja reniciar o jogo S(Sim) / N(Nao)?: \n");
        scanf(" %c", &reniciar);
        } while (reniciar == 's' || reniciar == 'S');
    }
    
    //JOGO2
    if (escolha == 2){
    
    printf("\nA historia do jogo se passa dentro de uma tumba egipcia onde dois exploradores ficaram presos. No centro da sala, ha cinco caixas: uma delas contem o botao para abrir a porta, enquanto uma outra esconde uma cobra mortal. A cada rodada, o local do botao e da cobra muda de caixa de forma aleatoria, aumentando o desafio e a imprevisibilidade do jogo.\n");

    srand(time(NULL));

    int caixa_botao, caixa_cobra, caixa_escolhida1, caixa_escolhida2;
    int jogador1, jogador2, ordem, primeiro, segundo; 
    int vencedor;

    char *nomes[] = {"", "Joao", "Angela", "Carlos", "Pietro", "Mohamed", "Estrela", "Josue"};

    do{
    
        caixa_escolhida1 = 0;
        caixa_escolhida2 = 0;
        caixa_botao = -1;
        caixa_cobra = -1;
        
        printf("\nLista de nomes:\n");
        printf("1) Joao\n");
        printf("2) Angela\n");
        printf("3) Carlos\n");
        printf("4) Pietro\n");
        printf("5) Mohamed\n");
        printf("6) Estrela\n");
        printf("7) Josue\n");
        
        printf("\nJogador 1 escolha seu usuario: ");
        scanf("%d", &jogador1);
        printf("\nJogador 2 escolha seu usuario: ");
        scanf("%d", &jogador2);
        printf("");

        while (caixa_escolhida1 != caixa_botao && caixa_escolhida1 != caixa_cobra && caixa_escolhida2 != caixa_botao && caixa_escolhida2 != caixa_cobra){

        ordem = rand () % 2 + 1;
        if (ordem == 1){
            primeiro = 1;
            segundo = 2;
        }
        else {
            primeiro = 2;
            segundo = 1;
        }

        char *nome_primeiro = (primeiro == 1) ? nomes[jogador1] : nomes[jogador2];
        char *nome_segundo = (segundo == 1) ? nomes[jogador1] : nomes[jogador2];

        caixa_botao = rand () % 5 + 1;
        caixa_cobra = rand () % 5 + 1;

        while (caixa_botao == caixa_cobra){
        
        caixa_botao = rand () % 5 + 1;
        caixa_cobra = rand () % 5 + 1;  
        }

        for(int i = 1; i <= 5; i++){
            printf("+---+\n| %d |\n+---+\n", i);
        }

        printf("\n%s escolha sua caixa: ", nome_primeiro);
        scanf("%d", &caixa_escolhida1);
        printf("%s escolha sua caixa (diferente da escolhida pelo primeiro): ", nome_segundo);
        scanf("%d", &caixa_escolhida2);
        printf("");
        
        while (caixa_escolhida2 == caixa_escolhida1){
            printf("\nEscolha uma caixa diferente!\n");
            printf("Escolha: ");
            scanf("%d", &caixa_escolhida2);
            printf("");
        }
        
        if (caixa_escolhida1 == caixa_botao){
            printf("\nParabens, voce achou o botao!\n");
            vencedor = 1;
        }
        else if (caixa_escolhida1 == caixa_cobra) {
            printf("\nCobra!\n");
            vencedor = 2;
        }
        else {
            printf("\nVazia.\n");
        }

        
        if (caixa_escolhida2 == caixa_botao){
            printf("Parabens, voce achou o botao!\n");
            vencedor = 2;
        }
        else if (caixa_escolhida2 == caixa_cobra) {
            printf("Cobra!\n");
            vencedor = 1;
        }
        else {
            printf("Vazia.\n");
        }
        
    }
        
        if (vencedor == 1){
            printf("\nO vencedor da rodada foi: %s\n", nomes[jogador1]);
        }
        else {
            printf("O vencedor da rodada foi: %s\n", nomes[jogador2]);
        }

        printf("\nDeseja reniciar o jogo S(Sim) / N(Nao)?: \n");
        scanf(" %c", &reniciar);
    
        } while (reniciar == 's' || reniciar == 'S');
    }

    //JOGO3
    if (escolha == 3){
   
    printf("\nNeste jogo de estrategia, os jogadores controlam criaturas chamadas Gousmas, que podem se dividir e acumular furia ao serem atacadas.\n");
    
    int gousma;
    int gousmas1, gousmas1_1, gousmas2, gousmas2_1;
    int furia_g1, furia_g1_1, furia_g2, furia_g2_1;
    int movimento1, movimento2;
    int gousmas_atc1, gousmas_atc2, ataque1, ataque2;
    int sub;

    int rodadas;
    
    do{
       
        rodadas = 1;

        gousmas1 = 1;
        gousmas1_1 = 1;
        gousmas2 = 1;
        gousmas2_1 = 1;
        furia_g1 = 1;
        furia_g1_1 = 1;
        furia_g2 = 1;
        furia_g2_1 = 1;
            
       while ((gousmas1 != 0 || gousmas1_1 != 0) && (gousmas2 != 0 || gousmas2_1 != 0)){

        int furia_g1_ini   = furia_g1;
        int furia_g1_1_ini = furia_g1_1;
        int furia_g2_ini   = furia_g2;
        int furia_g2_1_ini = furia_g2_1;
        
        if (rodadas == 1){
            printf("\n(1): Atacar\n");
        }    
        else if (gousmas1 != 0 && gousmas1_1 != 0){
            printf("\n(1): Atacar // (2): Dividir\n");
        }
        else {
            printf("\n(1): Atacar\n");
        }

        printf("\nJogador 1:\n");
        printf("Escolha seu movimento: ");
        scanf("%d", &movimento1);

        while (rodadas == 1 && movimento1 == 2){
            printf("\n Na primeira rodada pode apenas atacar!");
            printf("\n Escolha seu movimento: ");
            scanf("%d", &movimento1);
        }
        
        while (movimento1 == 2 && (gousmas1 == 0 || gousmas1_1 == 0)){
            printf("\nMovimento invalido!\n");
            printf("Escolhendo ataque...");
            movimento1 = 1;
        }

        if (movimento1 == 1){
            if (gousmas1 != 0 && gousmas1_1 != 0){
                printf("Qual Gousma deseja usar: ");
                scanf("%d", &gousmas_atc1);

                while (gousmas_atc1 != 1 && gousmas_atc1 != 2){
                printf("Opcao invalida!\n");
                printf("Escolha um numero entre (1) e (2): ");
                scanf("%d", &gousmas_atc1);
            }
            }
            else if (gousmas1 != 0){
                printf("\nSomente a Gousma (1) esta disponivel.\n");
                printf("Atacando com a Gousma (1)...\n");
                gousmas_atc1 = 1;
            }
            else {
                printf("\nSomente a Gousma (2) esta disponivel.\n");
                printf("Atacando com a Gousma (2)...\n");
                gousmas_atc1 = 2;
            }

            if (gousmas_atc1 == 1){
                if (gousmas2 != 0 && gousmas2_1 != 0){
                    printf("\nQual gousma desejas atacar (1) ou (2): ");
                    scanf("%d", &ataque1);
                }
                else if (gousmas2 != 0){
                    printf("\nSomente a Gousma (1) pode ser atacada...\n");
                    ataque1 = 1;
                }
                else {
                    printf("\nSomente a Gousma (2) pode ser atacada...\n");
                    ataque1 = 2;
                }

                if (ataque1 == 1){
                    furia_g2 += furia_g1_ini;
                }
                else {
                    furia_g2_1 += furia_g1_ini;
                }
            }
            if (gousmas_atc1 == 2){
                if (gousmas2 != 0 && gousmas2_1 != 0){
                    printf("\nQual gousma desejas atacar (1) ou (2): ");
                    scanf("%d", &ataque1);
                }
                else if (gousmas2 != 0){
                    printf("\nSomente a Gousma (1) pode ser atacada...\n");
                    ataque1 = 1;
                }
                else {
                    printf("\nSomente a Gousma (2) pode ser atacada...\n");
                    ataque1 = 2;
                }

                if (ataque1 == 1){
                    furia_g2 += furia_g1_1_ini;
                }
                else {
                    furia_g2_1 += furia_g1_1_ini;
                }
            }

        }

        else if (movimento1 == 2){
            if (furia_g1 >= 2 && furia_g1_1 >= 2){
                printf("\nQual gousma desejas dividir (1) ou (2): ");
                scanf("%d", &gousma);
            }
            else if (furia_g1 >= 2){
                printf("\nSomente a Gousma (1) pode ser dividida...");
                gousma = 1;
            }
            else {
                printf("\nSomente a Gousma (2) pode ser dividida...");
                gousma = 2;
            }
            
            if (gousma == 1){
                printf("\nQuanto desejas passar para a a outra gousma: ");
                scanf("%d", &sub);
                
                 while (sub <= 0 || sub >= furia_g1){
                    printf("\nValor invalido! A Gosma (1) possue %d de furia\n", furia_g1);
                    printf("Escolha um valor valido para passar: ");
                    scanf("%d", &sub);
                }

                furia_g1 -= sub;
                furia_g1_1 += sub;
            }
            else {
                printf("\nQuanto desejas repassar para a outra gousma: ");
                scanf("%d", &sub);
                
                 while (sub <= 0 || sub >= furia_g1_1){
                    printf("\nValor invalido! A Gosma (2) possue %d de furia\n", furia_g1_1);
                    printf("Escolha um valor valido para passar: ");
                    scanf("%d", &sub);
                }
                
                furia_g1_1 -= sub;
                furia_g1 += sub;        
            }

        }

        if (rodadas == 1){
            printf("\n(1): Atacar\n");
        }    
        else if (gousmas2 != 0 && gousmas2_1 != 0){
            printf("\n(1): Atacar // (2): Dividir\n");
        }
        else {
            printf("\n(1): Atacar\n");
        }
        
        printf("\nJogador 2:\n");
        printf("Escolha seu movimento: ");
        scanf("%d", &movimento2);

        while (rodadas == 1 && movimento2 == 2){
            printf("\n Na primeira rodada pode apenas atacar!");
            printf("\n Escolha seu movimento: ");
            scanf("%d", &movimento2);
        }

        while (movimento2 == 2 && (gousmas2 == 0 || gousmas2_1 == 0)){
            printf("\nMovimento invalido!\n");
            printf("Escolhendo ataque...");
            movimento2 = 1;
        }
        
        if (movimento2 == 1){
             if (gousmas2 != 0 && gousmas2_1 != 0){
                printf("Qual Gousma deseja usar: ");
                scanf("%d", &gousmas_atc2);

                while (gousmas_atc2 != 1 && gousmas_atc2 != 2){
                printf("Opcao invalida!\n");
                printf("Escolha um numero entre (1) e (2): ");
                scanf("%d", &gousmas_atc2);
            }
            }
            else if (gousmas2 != 0){
                printf("\nSomente a Gousma (1) esta disponivel.\n");
                printf("Atacando com a Gousma (1)...\n");
                gousmas_atc2 = 1;
            }
            else {
                printf("\nSomente a Gousma (2) esta disponivel.\n");
                printf("Atacando com a Gousma (2)...\n");
                gousmas_atc2 = 2;
            }
            
            if (gousmas_atc2 == 1){
                if (gousmas1 != 0 && gousmas1_1 != 0){
                    printf("\nQual gousma desejas atacar (1) ou (2): ");
                    scanf("%d", &ataque2);
                }
                else if (gousmas1 != 0){
                    printf("\nSomente a Gousma (1) pode ser atacada...\n");
                    ataque2 = 1;
                }
                else {
                    printf("\nSomente a Gousma (2) pode ser atacada...\n");
                    ataque2 = 2;
                }

                if (ataque2 == 1){
                    furia_g1 += furia_g2_ini;
                }
                else {
                    furia_g1_1 += furia_g2_ini;
                }
            }
            if (gousmas_atc2 == 2){
                if (gousmas1 != 0 && gousmas1_1 != 0){
                    printf("\nQual gousma desejas atacar (1) ou (2): ");
                    scanf("%d", &ataque2);
                }
                else if (gousmas1 != 0){
                    printf("\nSomente a Gousma (1) pode ser atacada...\n");
                    ataque2 = 1;
                }
                else {
                    printf("\nSomente a Gousma (2) pode ser atacada...\n");
                    ataque2 = 2;
                }

                if (ataque2 == 1){
                    furia_g1 += furia_g2_1_ini;
                }
                else {
                    furia_g1_1 += furia_g2_1_ini;
                }
            }

        }

        else if (movimento2 == 2){
            if (furia_g2 >= 2 && furia_g2_1 >= 2){
                printf("\nQual gousma desejas dividir (1) ou (2): ");
                scanf("%d", &gousma);
            }
            else if (furia_g2 >= 2){
                printf("\nSomente a Gousma (1) pode ser dividida...");
                gousma = 1;
            }
            else {
                printf("\nSomente a Gousma (2) pode ser dividida...");
                gousma = 2;
            }
            
            if (gousma == 1){
                printf("\nQuanto desejas passar para a a outra gousma: ");
                scanf("%d", &sub);
                
                while (sub <= 0 || sub >= furia_g2){
                    printf("\nValor invalido! A Gosma (1) possue %d de furia\n", furia_g2);
                    printf("Escolha um valor valido para passar: ");
                    scanf("%d", &sub);
                }

                furia_g2 -= sub;
                furia_g2_1 += sub;
            }
            else {
                printf("\nQuanto desejas passar para a outra gousma: ");
                scanf("%d", &sub);
                
                 while (sub <= 0 || sub >= furia_g2_1){
                    printf("\nValor invalido! A Gosma (2) possue %d de furia\n", furia_g2_1);
                    printf("Escolha um valor valido para passar: ");
                    scanf("%d", &sub);
                }
                
                furia_g2_1 -= sub;
                furia_g2 += sub;        
            }

        }

        if (furia_g1 > 5){
            gousmas1 --;
            furia_g1 = 0;
        }
        if (furia_g1_1 > 5){
            gousmas1_1 --;
            furia_g1_1 = 0;
        }

        if (furia_g2 > 5){
            gousmas2--;
            furia_g2 = 0;
        }
        if (furia_g2_1 > 5){
            gousmas2_1--;
            furia_g2_1 = 0;
        }

        printf("\n    * Resumo da rodada *\n");
        printf("\n Jogador 1\t  Jogador 2\n");
        if (gousmas1 != 0){
            printf("Furia G1: %d\t", furia_g1);
        }
        else {
            printf("Morta       \t");
        }
        if (gousmas2 != 0){
            printf("Furia G1: %d\t\n", furia_g2);
        }
        else {
            printf("Morta       \t\n");
        }
        
        if (gousmas1_1 != 0){
            printf("Furia G2: %d\t", furia_g1_1);
        }
        else {
            printf("Morta       \t");
        }
        if (gousmas2_1 != 0){
            printf("Furia G2: %d\t\n", furia_g2_1);
        }
        else {
            printf("Morta       \t\n");
        }
        
        rodadas++;

        }
        
        if (gousmas2 == 0 && gousmas2_1 == 0 && gousmas1 == 0 && gousmas1_1 == 0){
            printf("Empate!\n");
            printf("%d rodadas\n", rodadas);
        }
        else if (gousmas2 == 0 && gousmas2_1 == 0){
            printf("Jogador 1 venceu em %d rodadas!\n", rodadas);
        }
        else {
            printf("Jogador 2 venceu em %d rodadas!\n", rodadas);
        }

        printf("\nDeseja reniciar o jogo S(Sim) / N(Nao)?: \n");
        scanf(" %c", &reniciar);
        
        } while (reniciar == 's' || reniciar == 'S');

    }
    
    if (escolha == 4){
        printf("\nAte logo!");
        break;
    }
    
    } while (escolha != 4);

    return 0;
}