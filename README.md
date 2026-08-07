# Tic-Tac-Toe

A simple console-based Tic-Tac-Toe game written in C++ for two players.

## How to play

- The game board is a 3x3 grid, with cells numbered 1-9.
- Players take turns entering a number (1-9) to place their mark (X or O) on the board.
- The first player to get three marks in a row (horizontally, vertically, or diagonally) wins.
- If all 9 cells are filled and no one has won, the game ends in a draw.

## How to build and run

Compile with any C++ compiler, for example:

\\
g++ tictactoe.cpp -o tictactoe
./tictactoe
\\

## Features

- Two-player turn-based gameplay
- Win detection for all rows, columns, and diagonals
- Input validation (prevents choosing an occupied or invalid cell)
- Draw detection when the board is full

