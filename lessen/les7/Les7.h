//
// Created by rikpe on 14/12/2023.
//

#ifndef BEGINNER_LES7_H
#define BEGINNER_LES7_H


#include "../../dataStructures/DataStructuresMain.h"
#include "../../games/tictactoe/TicTacToe.h"
#include "../../games/connectFour/VierOpEenRij.h"

// In Les 7 introduceren we enkele fundamentele datastructuren, waaronder gelinkte lijsten.
// Datastructuren zijn essentieel voor het efficiënt organiseren en manipuleren van data in je programma's.
class Les7 {
    DataStructuresMain dataStructuresMain;
    TicTacToe tictactoe;
    VierOpEenRij vierOpEenRij;

public:
    void runMijnCode() {
//        tictactoe.play();
        vierOpEenRij.speel();

    }
};


#endif //BEGINNER_LES7_H
