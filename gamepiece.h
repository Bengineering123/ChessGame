#ifndef GAMEPIECE_H
#define GAMEPIECE_H

class gamepiece {
public:
    char color;

    void change_position(int, char);

private:
    int file;
    char rank;

};

#endif // GAMEPIECE_H
