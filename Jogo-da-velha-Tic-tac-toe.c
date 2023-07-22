#include <stdio.h>
//Made by Michael Patrick(I am Br!)
//My firt Tic-Tac-Toe!
int main (){
// Data Structure
int l, c, linha, coluna, jogador = 1, ganhou = 0, jogadas = 0, opc = 1;
char jogo[3][3];
//Inicializing my structure
do{
    opc = 1;
    jogador = 1;
    ganhou = 0;
    jogadas = 0;
    for(l=0;l<3;l++){
        for(c=0;c<3;c++){
            jogo[l][c] = ' ';
        }
    }
    printf("\nMade by Owlbert!");
    do{
        //Show game
        printf("\n\n\t  0     1     2\n\n");
        for(l=0;l<3;l++){
            for(c=0;c<3;c++){
                if(c==0)
                    printf("\t");
                printf("  %c  ", jogo[l][c]);
                if(c<2)
                    printf("|");
                if(c==2)
                    printf("  %d", l);
                
            }
            if(l<2){
                printf("\n\t-----------------");
            }
            printf("\n");
        }
        printf("\n\n");
        //Read the bearings
        do{
            printf("Player: %d\nWrite the line and the column, respectively: \n", jogador);
            scanf("%d %d", &linha, &coluna);



        }while(linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || jogo[linha][coluna] != ' ');

        //save bearings
        if(jogador == 1){
            jogo[linha][coluna] = '0';
            jogador++;
        }
        else{
            jogo[linha][coluna] = 'X' ;
            jogador = 1 ;
        }
        jogadas++;
        //win by line
        if(jogo[0][0] == '0' && jogo[0][1] == '0' && jogo[0][2] == '0' ||
        jogo[1][0] == '0' && jogo[1][1] == '0' && jogo[1][2] == '0' ||
        jogo[2][0] == '0' && jogo[2][1] == '0' && jogo[2][2] == '0'){
            printf("\nPlayer 1 wins by the line\n");
            ganhou = 1;
        }
        if(jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X' ||
        jogo[1][0] == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X' ||
        jogo[2][0] == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X'){
            printf("\nPlayer 2 wins by the line!\n");
            ganhou = 1;
        }
        //win by column
        if(jogo[0][0] == '0' && jogo[1][0] == '0' && jogo[2][0] == '0' ||
        jogo[0][1] == '0' && jogo[1][1] == '0' && jogo[2][1] == '0' ||
        jogo[0][2] == '0' && jogo[1][2] == '0' && jogo[2][2] == '0'){
            printf("\nPlayer 1 wins by column!\n");
            ganhou = 1;
        }
        if(jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X' ||
        jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X' ||
        jogo[0][2] == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X'){
            printf("\nPlayer 2 wins by column!\n");
            ganhou = 1;
        }
        //win by the right side
        if(jogo[0][0] == '0' && jogo[1][1] == '0' && jogo[2][2] == '0' ){
            printf("\nPlayer 1 wins by the right side!\n");
            ganhou = 1;
        }
        if(jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X' ){
            printf("\nPlayer 2 wins by the right side!\n");
            ganhou = 1;
        }
        //win by the left side
        if(jogo[0][2] == '0' && jogo[1][1] == '0' && jogo[2][0] == '0' ){
            printf("\nPlayer 1 wins by the left side!\n");
            ganhou = 1;
        }
        if(jogo[0][2] == 'X' && jogo[1][1] == 'X' && jogo[2][0] == 'X' ){
            printf("\nPlayer 2 wins by the left side!\n");
            ganhou = 1;
        }   
    }while(ganhou == 0 && jogadas < 9);
    if(ganhou == 0){
        printf("\nThere is no winner at all!\n");
    }
    printf("Click 1 to play again or anything to close the game:\n");
    scanf(" %d", &opc);
    }while(opc == 1);
return 0;
}