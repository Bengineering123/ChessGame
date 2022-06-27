#include "gameboard.h"

void gameboard::paintBoard(QPaintEvent *event){
    int num_rank = 8, num_file = 8;
    QRect rectangle = rect();
    QPainter painter(this);
    painter.setBrush(QColor(0,0,0));        //black color square
    painter.drawRect(rectangle);
}

gameboard::gameboard(){
    QPaintEvent event;
    paintBoard(event);
}

gameboard::~gameboard(){

}
