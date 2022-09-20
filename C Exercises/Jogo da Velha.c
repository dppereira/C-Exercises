#include <stdio.h>

int main(void)
{

    int i, j, line, column;
    int player, option, won = 0, rounds, valido = 0;
    char jogo[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

    do
    {

        //verificando de quem eh a vez atraves do round
        player = 1;
        rounds = 0;

        do //for(round=0; round<9; rounds++)
        {
            //inserir a posição q ele quer jogar
            //depois, verifica se a posição eh valida e n esta ocupada
            do
            {
                valido = 0;

                scanf("%d %d", &line, &column);

                if (jogo[line][column] == ' ' && line < 3 && column < 3 && line >= 0 && column >= 0)
                {
                    if (player == 1)
                    {
                        jogo[line][column] = 'x';
                        player++;
                    }
                    else
                    {
                        jogo[line][column] = 'o';
                        player = 1;
                    }
                    rounds++;
                    valido = 1;
                }

                if (valido == 0)
                {
                    printf("Erro\n");
                }

            } while (valido == 0);

            if (rounds > 4)
            {

                if (((jogo[0][0] == 'x') && (jogo[0][1] == 'x') && (jogo[0][2] == 'x')) || ((jogo[1][0] == 'x') && (jogo[1][1] == 'x') && (jogo[1][2] == 'x')) ||
                    ((jogo[2][0] == 'x') && (jogo[2][1] == 'x') && (jogo[2][2] == 'x')))
                {
                    printf("Jogador 1 venceu\nLinha %d\n", line);
                    won = 1;
                }

                if (((jogo[0][0] == 'x') && (jogo[1][0] == 'x') && (jogo[2][0] == 'x')) || ((jogo[0][1] == 'x') && (jogo[1][1] == 'x') && (jogo[2][1] == 'x')) ||
                    ((jogo[0][2] == 'x') && (jogo[1][2] == 'x') && (jogo[2][2] == 'x')))
                {
                    printf("Jogador 1 venceu\nColuna %d\n", column);
                    won = 1;
                }

                if ((jogo[0][0] == 'x') && (jogo[1][1] == 'x') && (jogo[2][2] == 'x'))
                {
                    printf("Jogador 1 venceu\nDiagonal principal\n");
                    won = 1;
                }

                if ((jogo[0][2] == 'x') && (jogo[1][1] == 'x') && (jogo[2][0] == 'x'))
                {
                    printf("Jogador 1 venceu\nDiagonal secundaria\n");
                    won = 1;
                }

                if (((jogo[0][0] == 'o') && (jogo[0][1] == 'o') && (jogo[0][2] == 'o')) || ((jogo[1][0] == 'o') && (jogo[1][1] == 'o') && (jogo[1][2] == 'o')) ||
                    ((jogo[2][0] == 'o') && (jogo[2][1] == 'o') && (jogo[2][2] == 'o')))
                {
                    printf("Jogador 2 venceu\nLinha %d\n", line);
                    won = 1;
                }

                if (((jogo[0][0] == 'o') && (jogo[1][0] == 'o') && (jogo[2][0] == 'o')) || ((jogo[0][1] == 'o') && (jogo[1][1] == 'o') && (jogo[2][1] == 'o')) ||
                    ((jogo[0][2] == 'o') && (jogo[1][2] == 'o') && (jogo[2][2] == 'o')))
                {
                    printf("Jogador 2 venceu\nColuna %d\n", column);
                    won = 1;
                }

                if ((jogo[0][0] == 'o') && (jogo[1][1] == 'o') && (jogo[2][2] == 'o'))
                {
                    printf("Jogador 2 venceu\nDiagonal principal\n");
                    won = 1;
                }

                if ((jogo[0][2] == 'o') && (jogo[1][1] == 'o') && (jogo[2][0] == 'o'))
                {
                    printf("Jogador 2 venceu\nDiagonal secundaria\n");
                    won = 1;
                }
            }
        } while (won == 0 && rounds < 9);

        if (won == 0)
            printf("Empate\n");

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%c", jogo[i][j]);
            }
            printf("\n");
        }

        option = 0;

    } while (option == 1);
}