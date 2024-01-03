//#ifndef SNAKE_H
#define SNAKE_H

#include<windows.h>


class Snake{

    private:
    COORD pos;//store x,y
    int lenght;//snake len
    char dir;//snake last moved diraction

    public:
    Snake (COORD pos);

    // get pos
    COORD Get_pos();

    //Set dir fuction
    void Set_dir(char dir);

    //Set move_snake fun
    void move_snake();

};