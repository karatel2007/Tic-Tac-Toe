#include <iostream>
using namespace std;

char board[10] = {' ','1','2','3','4','5','6','7','8','9'};
char currentPlayer = 'X';

void printBoard() {
    cout << board[1] << " | " << board[2] << " | " << board[3] << endl;
    cout << "--+---+--" << endl;
    cout << board[4] << " | " << board[5] << " | " << board[6] << endl;
    cout << "--+---+--" << endl;
    cout << board[7] << " | " << board[8] << " | " << board[9] << endl;
}

char checkWin() {
    int lines[8][3] = {
        {1,2,3},{4,5,6},{7,8,9},
        {1,4,7},{2,5,8},{3,6,9},
        {1,5,9},{3,5,7}
    };
    for (int i = 0; i < 8; i++) {
        int a = lines[i][0], b = lines[i][1], c = lines[i][2];
        if (board[a] == board[b] && board[b] == board[c]) {
            return board[a];
        }
    }
    return ' ';
}

void switchPlayer() {
    switch (currentPlayer) {
        case 'X':
            currentPlayer = 'O';
            break;
        case 'O':
            currentPlayer = 'X';
    }
}

int main() {
    int move;
    char winner = ' ';
    int moveCount = 0;

    do {
        printBoard();
        cout << "Player " << currentPlayer << ", enter cell (1-9): ";
        cin >> move;

        if (move < 1 || move > 9 || board[move] == 'X' || board[move] == 'O') {
            cout << "Invalid move, try again" << endl;
            continue;
        }

        board[move] = currentPlayer;
        moveCount++;
        winner = checkWin();

        if (winner == ' ') {
            switchPlayer();
        }

    } while (winner == ' ' && moveCount < 9);

    printBoard();

    if (winner != ' ') {
        cout << "Player " << winner << " wins" << endl;
    } else {
        cout << "draw!" << endl;
    }

    return 0;
}
