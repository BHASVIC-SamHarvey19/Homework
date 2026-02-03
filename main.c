#include <stdio.h>

char a = '1';
char b = '2';
char c = '3';
char d = '4';
char e = '5';
char f = '6';
char g = '7';
char h = '8';
char i = '9';

int winner;

int solved = 0;

int player = 1;

int choice;


int taken = 0;

int main(void) {

    while (solved == 0) {
        printf("\n \n \n ");
        printf("Player 1s turn:   \n\n");
        printf("Current board: \n");
        printf(""
               "     |     |     \n"
               "  %c  |  %c  |  %c  \n"
               "_____|_____|______\n"
               "     |     |     \n"
               "  %c  |  %c  |  %c  \n"
               "_____|_____|______\n"
               "     |     |     \n"
               "  %c  |  %c  |  %c  \n"
               "     |     |     \n", a, b, c, d, e, f, g, h, i);


        while (taken == 0){
            printf("Enter what number in the grid you would like to add player %d :", player);
            scanf("%d", &choice);
            fflush(stdin);
            switch (choice) {
                case 1:
                    if (a != 1) {
                        printf("Added!\n\n");
                        taken = 1;
                        if (player == 1) {
                            a = 'X';
                        }
                        else {
                            a = 'O';
                        }
                    }
                    else {
                        printf("Already Added!\n\n");
                        taken = 0;
                    }
                    break;
                case 2:
                    if (b != 2) {
                        printf("Added!\n\n");
                        taken = 1;
                        if (player == 1) {
                            b = 'X';
                        }
                        else {
                            b = 'O';
                        }
                    }
                    else {
                        printf("Already Added!\n\n");
                        taken = 0;
                    }
                    break;
                case 3:
                    if (c != 3) {
                        printf("Added!\n\n");
                        taken = 1;
                        if (player == 1) {
                            c = 'X';
                        }
                        else {
                            c = 'O';
                        }
                    }
                    else {
                        printf("Already Added!\n\n");
                        taken = 0;
                    }
                case 4:
                    if (d != 4) {
                        printf("Added!\n\n");
                        taken = 1;
                        if (player == 1) {
                            d = 'X';
                        }
                        else {
                            d = 'O';
                        }
                    }
                    else {
                        printf("Already Added!\n\n");
                        taken = 0;
                    }
                    break;
                case 5:
                    if (e != 5) {
                        printf("Added!\n\n");
                        taken = 1;
                        if (player == 1) {
                            e = 'X';
                        }
                        else {
                            e = 'O';
                        }
                    }
                    else {
                        printf("Already Added!\n\n");
                        taken = 0;
                    }
                    break;
                case 6:
                    if (f != 6) {
                        printf("Added!\n\n");
                        taken = 1;
                        if (player == 1) {
                            f = 'X';
                        }
                        else {
                            f = 'O';
                        }
                    }
                    else {
                        printf("Already Added!\n\n");
                        taken = 0;
                    }
                    break;
                case 7:
                    if (g != 7) {
                        printf("Added!\n\n");
                        taken = 1;
                        if (player == 1) {
                            g = 'X';
                        }
                        else {
                            g = 'O';
                        }
                    }
                    else {
                        printf("Already Added!\n\n");
                        taken = 0;
                    }
                    break;
                case 8:
                    if (h != 8) {
                        printf("Added!\n\n");
                        taken = 1;
                        if (player == 1) {
                            h = 'X';
                        }
                        else {
                            h = 'O';
                        }
                    }
                    else {
                        printf("Already Added!\n\n");
                        taken = 0;
                    }
                    break;
                case 9:
                    if (h != 9) {
                        printf("Added!\n\n");
                        taken = 1;
                        if (player == 1) {
                            h = 'X';
                        }
                        else {
                            h = 'O';
                        }
                    }
                    else {
                        printf("Already Added!\n\n");
                        taken = 0;
                    }
                    break;
                default:
                    break;
            }
    }
        printf("\n\n\n");
        printf("Current board: \n");
        printf(""
               "     |     |     \n"
               "  %c  |  %c  |  %c  \n"
               "_____|_____|______\n"
               "     |     |     \n"
               "  %c  |  %c  |  %c  \n"
               "_____|_____|______\n"
               "     |     |     \n"
               "  %c  |  %c  |  %c  \n"
               "     |     |     \n", a, b, c, d, e, f, g, h, i);

        switch (player) {
            case 1:
                if ((a == 'X' && b == 'X' && c == 'X') ||
                    (a == 'X' && d == 'X' && g == 'X') ||
                    (a == 'X' && e == 'X' && i == 'X') ||
                    (c == 'X' && f == 'X' && i == 'X') ||
                    (d == 'X' && e == 'X' && f == 'X') ||
                    (g == 'X' && h == 'X' && i == 'X') ||
                    (b == 'X' && e == 'X' && h == 'X') ||
                    (c == 'X' && e == 'X' && g == 'X')) {
                    solved = 1;
                    winner = 1;
                }
            case 2:
                if ((a == 'O' && b == 'O' && c == 'O') ||
                    (a == 'O' && d == 'O' && g == 'O') ||
                    (a == 'O' && e == 'O' && i == 'O') ||
                    (c == 'O' && f == 'O' && i == 'O') ||
                    (d == 'O' && e == 'O' && f == 'O') ||
                    (g == 'O' && h == 'O' && i == 'O') ||
                    (b == 'O' && e == 'O' && h == 'O') ||
                    (c == 'O' && e == 'O' && g == 'O')) {
                    solved = 1;
                    winner = 2;
                    }
            default:
                break;

        }
        if (player == 1) {
            player = 2;
        }
        else {
            player = 1;
        }

    }
    printf("\n\n\n");
    printf("Winner is: PLAYER %d", winner);
}
