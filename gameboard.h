#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <string>
#include <vector>
#include <QWidget>
#include "gamepiece.h"
#include <QPainter>

class gameboard :   public QWidget{
public:
    std::string game_state;
    std::vector<gamepiece> black_pieces;
    std::vector<gamepiece> white_pieces;
    gameboard();
    ~gameboard();
    void paintBoard(QPaintEvent *);
};

#endif // GAMEBOARD_H
