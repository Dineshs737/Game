#include"snake.h"

Snake::Snake(COORD pos){
    this->pos =pos;
    lenght=1;
}

COORD Snake::Get_pos(){
    return pos;
}

void Snake::Set_dir(char dir){
    this->dir=dir;
}

void Snake::move_snake(){
    switch (dir){

        case 'u' :
        pos.Y--;
        break;

        case 'd' :
        pos.Y++;
        break;

        case 'r' :
        pos.X++;
        break;

        case 'l' :
        pos.X--;
        break;

    }
}