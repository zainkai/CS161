/*******************************************
** Author: Kevin Turkington
** 7/29/16
** Description: Tictactoe game file
********************************************/
#include <string>
#include <iostream>
#include "Board.hpp"
#include "TicTacToe.hpp"

using namespace std;

/*************************
** name: TicTacToe
** Description: default constructor for tictactor
** input: N/A
** output: allocated a game
**************************/
TicTacToe::TicTacToe()
{
    gameTable = Board();

    do{
        cout << "Who will go first x or o? (lower case only): ";
        cin >> playerTurn;
        cout << endl;

        if((playerTurn == 'x') || (playerTurn == 'o')){
            break;            
        }
        else{
            cout << "Invalid input." << endl; 
        }
    }
    while(true);
}

/*************************
** name: swapXO
** Description: swaps x and o for who is playing. 
** input: N/A
** output: N/A
**************************/
void TicTacToe::swapXO()
{
    if(playerTurn == 'x'){
        playerTurn = 'o';
    }
    else{
        playerTurn = 'x';
    }
}

/*************************
** name: play
** Description: allows users to play the game. 
** input: N/A
** output: N/A
**************************/
void TicTacToe::play()
{

    while(true){
        int moveCol;
        int moveRow;

        do{
            cout << "Player " << playerTurn << ": please enter your move." << endl;
            cin >> moveCol;
            cin >> moveRow;
            cout << endl;

            if(moveCol < 0 || moveCol > 2 || moveRow < 0 || moveRow > 2){
                cout << "Invalid input." << endl << endl;
            }
            else if(gameTable.makeMove(moveCol,moveRow,playerTurn) == false){
                cout << "Space is already taken" << endl;
            }
            else{
                break;
            }
        }
        while(true);

        gameTable.makeMove(moveCol,moveRow,playerTurn);

        gameTable.print();
        cout << endl;

        swapXO();


        if(gameTable.gameState() == X_WON){
            cout << "X Won!" << endl;
            break; 
        }
        else if(gameTable.gameState() == O_WON){
            cout << "O Won!" << endl;
            break;
        }
        else if(gameTable.gameState() == DRAW){
            cout << "Draw!" << endl;
            break;
        }

        
    }
}

int main()
{
    TicTacToe game1;
    game1.play();

    return 0;
}